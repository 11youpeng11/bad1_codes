#include <nvboard.h>
#include "Vreg_top.h"

void nvboard_bind_all_pins(Vreg_top* top) {
	nvboard_bind_pin( &top->clk, BIND_RATE_SCR, BIND_DIR_IN , 1, BTNC);
	nvboard_bind_pin( &top->rst, BIND_RATE_SCR, BIND_DIR_IN , 1, SW15);
	nvboard_bind_pin( &top->i_seg, BIND_RATE_SCR, BIND_DIR_IN , 8, SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->i_rand_flag, BIND_RATE_SCR, BIND_DIR_IN , 1, SW14);
	nvboard_bind_pin( &top->o_seg_0, BIND_RATE_SCR, BIND_DIR_OUT, 8, DEC0P, SEG0G, SEG0F, SEG0E, SEG0D, SEG0C, SEG0B, SEG0A);
	nvboard_bind_pin( &top->o_seg_1, BIND_RATE_SCR, BIND_DIR_OUT, 8, DEC1P, SEG1G, SEG1F, SEG1E, SEG1D, SEG1C, SEG1B, SEG1A);
	nvboard_bind_pin( &top->o_led, BIND_RATE_SCR, BIND_DIR_OUT, 8, LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->o_rand_flag, BIND_RATE_SCR, BIND_DIR_OUT, 1, LD15);
}
