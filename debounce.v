`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:29:14 05/23/2017 
// Design Name: 
// Module Name:    debounce 
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
module debounce(
	input in,
	input clk,
	output reg out=0
	);
	
	reg [31:0] cnt=0;
	
	always@(posedge clk)
	begin
		if(in!=out)
			cnt<=cnt+1;
		else
			cnt<=0;
		if(cnt>=500000)
		begin
			out<=in;
			cnt<=0;
		end
	end

endmodule
