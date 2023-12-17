module lfsr(
    input		clk,
    input		rst,
    input	[7:0]	i_seg,
    input		i_rand_flag,
    output reg 	[7:0] 	o_rand
);
    reg		[3:0]	count;	//一周期为8    3/4位宽都可以
    wire	[7:0]	o_q;
    wire		o_q_0;
    reg			o_q_1;
    
    assign o_q_0 = (count == 4'd8) ? o_q[7] ^ o_q[5] ^ o_q[4] ^ o_q[3] : o_q_1;	//实验验收内容给出 x8 = x4 ^ x3 ^ x2 ^ x0  此时o_q_0代表最左位  一个周期
    d_reg uo(.clk(clk), .i_d(o_q_0), .o_q(o_q[0]));
    d_reg u1(.clk(clk), .i_d(o_q[0]), .o_q(o_q[1]));
    d_reg u2(.clk(clk), .i_d(o_q[1]), .o_q(o_q[2]));
    d_reg u3(.clk(clk), .i_d(o_q[2]), .o_q(o_q[3]));
    d_reg u4(.clk(clk), .i_d(o_q[3]), .o_q(o_q[4]));
    d_reg u5(.clk(clk), .i_d(o_q[4]), .o_q(o_q[5]));
    d_reg u6(.clk(clk), .i_d(o_q[5]), .o_q(o_q[6]));
    d_reg u7(.clk(clk), .i_d(o_q[6]), .o_q(o_q[7]));	//8位寄存器结构路程图看一下就明白了
    
    always @(posedge rst or negedge clk) begin
    	if(rst) begin
    		count <= 4'b0000;
    		o_rand <= 8'b0;
    		o_q_1 <= 1'b0;	//复位操作
    	end
    	if(count < 4'd8) begin
    		o_q_1 <= i_seg[count[2:0]];
    		count <= count + 1'b1;
    		o_rand <= 8'b0;
    	end
    	else if(count == 4'd8) begin
    		count <= count;
    		o_q_1 <= 1'b0;
    		if(i_rand_flag)
			o_rand <= o_q[7:0];
    		else 
    			o_rand <= o_rand;
    	end
    	
    end
endmodule
