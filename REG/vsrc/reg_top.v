module reg_top(
    input clk,
    input rst,
    input [7:0] i_seg,
    input       i_rand_flag,
    output [7:0] o_seg_1,
    output [7:0] o_seg_0,
    output [7:0] o_led,
    output       o_rand_flag
);

    lfsr u_lfsr(
        .clk(clk), 
        .rst(rst), 
        .i_seg(i_seg), 
        .i_rand_flag(i_rand_flag), 
        .o_rand(o_led)
    );

    seg_hex u_seg_hex(
        .i_seg(o_led),
        .o_seg_0(o_seg_0),
        .o_seg_1(o_seg_1)
    );

    assign o_rand_flag = i_rand_flag;
endmodule
