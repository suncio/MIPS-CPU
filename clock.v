`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:28:07 05/23/2017 
// Design Name: 
// Module Name:    clock 
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
module clock(
	input clk,
	input [31:0]max,
	output reg c=0
	);
	
	reg [31:0]count1;
	
	always@(posedge clk)
	begin
		if(count1>=max)
		begin
			count1<=0;
			c<=~c;
		end
		else count1<=count1+1;
	end

endmodule
