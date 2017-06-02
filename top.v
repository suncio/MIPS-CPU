`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:03:49 05/23/2017 
// Design Name: 
// Module Name:    top 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module top(
	input clk,
	input [7:0]sw,
	input [3:0]btn,
	input btns,
	output [6:0]seg,
	output dp,
	output [7:0]Led,
	output [3:0]an
    );

	reg [15:0]segdata;
	wire cclk;
	wire [7:0]sw_;
	wire [3:0]btn_;
	wire btns_;
	
	wire view_en;
	reg [31:0] view_addr;
	wire [15:0] data_high;
	wire [15:0] data_low;
	
	assign dp=1;
	assign Led=8'b10100101;
	assign view_en=btns_;

	debounce deb0(sw[0],clk,sw_[0]);
	debounce deb1(sw[1],clk,sw_[1]);
	debounce deb2(sw[2],clk,sw_[2]);
	debounce deb3(sw[3],clk,sw_[3]);
	debounce deb4(sw[4],clk,sw_[4]);
	debounce deb5(sw[5],clk,sw_[5]);
	debounce deb6(sw[6],clk,sw_[6]);
	debounce deb7(sw[7],clk,sw_[7]);

	debounce deb8(btn[0],clk,btn_[0]);
	debounce deb9(btn[1],clk,btn_[1]);
	debounce deba(btn[2],clk,btn_[2]);
	debounce debb(btn[3],clk,btn_[3]);
	debounce debs(btns,clk,btns_);
	
	openmips_min_sopc cpu(clk,rst,view_en,view_addr,data_high,data_low);
	
	reg [31:0]count;
	reg cnt;
	always@(posedge clk)
	begin
		if(count>=50000000)//待定
		begin
			count<=0;
			cnt<=~cnt;
		end
		else count<=count+1;
	end
	
	//共三秒，第一秒地址，第二秒data_low，第三秒data_high
	reg [1:0] cnt_3;
	always@(posedge cnt)
	begin
		if(cnt_3>=2)
		begin
			cnt_3<=0;
		end
		else 
			cnt_3<=cnt_3+1;
	end
	
	always@(*)
	begin
	 case(cnt_3)
		0: segdata=view_addr;
		1: segdata=data_low;
		2: segdata=data_high;
		default: segdata=16'hd1e1;
		endcase
	end
	//segdata=16'hf00c;
	
	
	always@(posedge cnt)
	begin
		if(~view_en)
		begin
			view_addr <= 32'b00000000000000000000000000000000;
		end
		else
		begin
			view_addr <= {20'b0,btn_[3:0],sw_[7:0]};
		end
	end
	
	display disp(clk,segdata,an,seg);

endmodule

