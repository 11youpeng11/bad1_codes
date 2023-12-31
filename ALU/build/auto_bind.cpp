#include <nvboard.h>
#include "Valu_top.h"

void nvboard_bind_all_pins(Valu_top* top) {
	nvboard_bind_pin( &top->i_a, BIND_RATE_SCR, BIND_DIR_IN , 4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->i_b, BIND_RATE_SCR, BIND_DIR_IN , 4, SW7, SW6, SW5, SW4);
	nvboard_bind_pin( &top->i_op, BIND_RATE_SCR, BIND_DIR_IN , 1, SW8);
	nvboard_bind_pin( &top->o_led, BIND_RATE_SCR, BIND_DIR_OUT, 4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->o_carry, BIND_RATE_SCR, BIND_DIR_OUT, 1, LD4);
	nvboard_bind_pin( &top->o_overflow, BIND_RATE_SCR, BIND_DIR_OUT, 1, LD5);
	nvboard_bind_pin( &top->o_max, BIND_RATE_SCR, BIND_DIR_OUT, 1, LD6);
	nvboard_bind_pin( &top->o_equ, BIND_RATE_SCR, BIND_DIR_OUT, 1, LD7);
	nvboard_bind_pin( &top->o_seg, BIND_RATE_SCR, BIND_DIR_OUT, 8, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G, DEC0P);
}
