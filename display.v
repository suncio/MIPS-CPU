`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:23:41 05/23/2017 
// Design Name: 
// Module Name:    display 
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
module display(
	input clk,
	input [15:0]num,
	output reg [3:0]an=4'b1110,
	output reg [6:0]seg
	);
	
	wire t1;
	reg [1:0]c=0;
	reg [3:0]n;
	
	clock cl(clk,25000,t1);
	
	always@(posedge t1)
	begin
		an<={an[2:0],an[3]};
		c<=c+1;
	end
	
	always@(*)
	begin
		case(n)
			0:seg=7'b1000000;//0
			1:seg=7'b1111001;//1
			2:seg=7'b0100100;//2
			3:seg=7'b0110000;//3
			4:seg=7'b0011001;//4
			5:seg=7'b0010010;//5
			6:seg=7'b0000010;//6
			7:seg=7'b1111000;//7
			8:seg=7'b0000000;//8
			9:seg=7'b0010000;//9
			10:seg=7'b0001000;//A
			11:seg=7'b0000011;//b
			12:seg=7'b1000110;//C
			13:seg=7'b0100001;//d
			14:seg=7'b0000110;//E
			15:seg=7'b0001110;//F
		endcase
	end
	
	always@(*)
	begin
		case(c)
			0:n=num[3:0];
			1:n=num[7:4];
			2:n=num[11:8];
			3:n=num[15:12];
		endcase
	end

endmodule
