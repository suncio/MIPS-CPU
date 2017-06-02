//////////////////////////////////////////////////////////////////////
////                                                              ////
//// Copyright (C) 2014 leishangwen@163.com                       ////
////                                                              ////
//// This source file may be used and distributed without         ////
//// restriction provided that this copyright statement is not    ////
//// removed from the file and that any derivative work contains  ////
//// the original copyright notice and the associated disclaimer. ////
////                                                              ////
//// This source file is free software; you can redistribute it   ////
//// and/or modify it under the terms of the GNU Lesser General   ////
//// Public License as published by the Free Software Foundation; ////
//// either version 2.1 of the License, or (at your option) any   ////
//// later version.                                               ////
////                                                              ////
//// This source is distributed in the hope that it will be       ////
//// useful, but WITHOUT ANY WARRANTY; without even the implied   ////
//// warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR      ////
//// PURPOSE.  See the GNU Lesser General Public License for more ////
//// details.                                                     ////
////                                                              ////
//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
// Module:  data_ram
// File:    data_ram.v
// Description: Êý¾Ý´æ´¢Æ÷
// Revision: 1.0
//////////////////////////////////////////////////////////////////////

`include "defines.v"

module data_ram(

	input	wire										clk,
	input wire										ce,
	input wire										we,
	input wire[`DataAddrBus]					addr,
	input wire[3:0]								sel,
	input wire[`DataBus]							data_i,
	output reg[`DataBus]							data_o,
	//view
	input wire										view_en,
	input wire[`DataAddrBus]					view_addr,
	output reg [15:0]								data_high,
	output reg [15:0]								data_low
);

	reg[`ByteWidth]  data_mem0[0:`DataMemNum-1];
	reg[`ByteWidth]  data_mem1[0:`DataMemNum-1];
	reg[`ByteWidth]  data_mem2[0:`DataMemNum-1];
	reg[`ByteWidth]  data_mem3[0:`DataMemNum-1];
	
	initial 
	begin
		$readmemh ( "ram3_fib.data", data_mem0 );
		$readmemh ( "ram3_fib.data", data_mem1 );
		$readmemh ( "ram3_fib.data", data_mem2 );
		$readmemh ( "ram3_fib.data", data_mem3 );
		//data_mem0[20] = 8'h14;data_mem1[20] = 8'h0;data_mem2[20] = 8'h0;data_mem3[20] = 8'h0;
		//data_mem0[21] = 8'h3; data_mem1[21] = 8'h0;data_mem2[21] = 8'h0;data_mem3[21] = 8'h0;
		//data_mem0[22] = 8'h3; data_mem1[22] = 8'h0;data_mem2[22] = 8'h0;data_mem3[22] = 8'h0;
		//data_mem0[80] = 8'h14;data_mem1[80] = 8'h0;data_mem2[80] = 8'h0;data_mem3[80] = 8'h0;
	end

	always @ (posedge clk) 
	begin
		if (ce == `ChipEnable) 
		begin
			if(we == `WriteEnable) 
			begin
			  if (sel[3] == 1'b1) 
			  begin
		      data_mem3[addr[`DataMemNumLog2+1:2]] <= data_i[31:24];
		     end
			  if (sel[2] == 1'b1) 
			  begin
		      data_mem2[addr[`DataMemNumLog2+1:2]] <= data_i[23:16];
		     end
		     if (sel[1] == 1'b1) 
			  begin
		      data_mem1[addr[`DataMemNumLog2+1:2]] <= data_i[15:8];
		     end
			  if (sel[0] == 1'b1) 
			  begin
		      data_mem0[addr[`DataMemNumLog2+1:2]] <= data_i[7:0];
		     end			   	    
			end
			else
			begin
		    data_o <= {data_mem3[addr[`DataMemNumLog2+1:2]],
		               data_mem2[addr[`DataMemNumLog2+1:2]],
		               data_mem1[addr[`DataMemNumLog2+1:2]],
		               data_mem0[addr[`DataMemNumLog2+1:2]]};
			end
		end
		else
		begin
			data_o <= `ZeroWord;
		end
	end
	
		
	always @ (posedge clk) 
	begin
		if(view_en)
		begin
			data_high <= {data_mem3[view_addr[`DataMemNumLog2-1:0]],
		                data_mem2[view_addr[`DataMemNumLog2-1:0]]};
			data_low <= {data_mem1[view_addr[`DataMemNumLog2-1:0]],
		               data_mem0[view_addr[`DataMemNumLog2-1:0]]};
		end
		else
		begin
			data_high <= 16'heeee;
			data_low <= 16'haaaa;
		end
	end

endmodule
