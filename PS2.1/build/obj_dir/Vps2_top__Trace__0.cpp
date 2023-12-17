// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vps2_top__Syms.h"


void Vps2_top___024root__trace_chg_0_sub_0(Vps2_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vps2_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root__trace_chg_0\n"); );
    // Init
    Vps2_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vps2_top___024root*>(voidSelf);
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vps2_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vps2_top___024root__trace_chg_0_sub_0(Vps2_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->ps2_top__DOT__ps2_u1__DOT__buffer),10);
        bufp->chgCData(oldp+1,(vlSelf->ps2_top__DOT__ps2_u1__DOT__w_ptr),3);
        bufp->chgCData(oldp+2,(vlSelf->ps2_top__DOT__ps2_u1__DOT__count),4);
        bufp->chgCData(oldp+3,(vlSelf->ps2_top__DOT__ps2_u1__DOT__ps2_clk_sync),3);
        bufp->chgBit(oldp+4,((IData)((4U == (6U & (IData)(vlSelf->ps2_top__DOT__ps2_u1__DOT__ps2_clk_sync))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+5,(vlSelf->ps2_top__DOT__ready_d1));
        bufp->chgBit(oldp+6,(vlSelf->ps2_top__DOT__nextdata_n));
        bufp->chgCData(oldp+7,(vlSelf->ps2_top__DOT__seg_data_0),8);
        bufp->chgCData(oldp+8,(vlSelf->ps2_top__DOT__seg_data_1),8);
        bufp->chgCData(oldp+9,(vlSelf->ps2_top__DOT__seg_data_2),8);
        bufp->chgBit(oldp+10,((0U == (IData)(vlSelf->ps2_top__DOT__seg_data_0))));
        bufp->chgCData(oldp+11,((0xfU & (IData)(vlSelf->ps2_top__DOT__seg_data_0))),4);
        bufp->chgCData(oldp+12,((0xfU & ((IData)(vlSelf->ps2_top__DOT__seg_data_0) 
                                         >> 4U))),4);
        bufp->chgBit(oldp+13,((0U == (IData)(vlSelf->ps2_top__DOT__seg_data_1))));
        bufp->chgCData(oldp+14,((0xfU & (IData)(vlSelf->ps2_top__DOT__seg_data_1))),4);
        bufp->chgCData(oldp+15,((0xfU & ((IData)(vlSelf->ps2_top__DOT__seg_data_1) 
                                         >> 4U))),4);
        bufp->chgBit(oldp+16,((0U == (IData)(vlSelf->ps2_top__DOT__seg_data_2))));
        bufp->chgCData(oldp+17,((0xfU & (IData)(vlSelf->ps2_top__DOT__seg_data_2))),4);
        bufp->chgCData(oldp+18,((0xfU & ((IData)(vlSelf->ps2_top__DOT__seg_data_2) 
                                         >> 4U))),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+19,(vlSelf->ps2_top__DOT__ps2_u1__DOT__fifo
                                [vlSelf->ps2_top__DOT__ps2_u1__DOT__r_ptr]),8);
        bufp->chgBit(oldp+20,(vlSelf->ps2_top__DOT__ready));
        bufp->chgCData(oldp+21,(vlSelf->ps2_top__DOT__ps2_u1__DOT__fifo[0]),8);
        bufp->chgCData(oldp+22,(vlSelf->ps2_top__DOT__ps2_u1__DOT__fifo[1]),8);
        bufp->chgCData(oldp+23,(vlSelf->ps2_top__DOT__ps2_u1__DOT__fifo[2]),8);
        bufp->chgCData(oldp+24,(vlSelf->ps2_top__DOT__ps2_u1__DOT__fifo[3]),8);
        bufp->chgCData(oldp+25,(vlSelf->ps2_top__DOT__ps2_u1__DOT__fifo[4]),8);
        bufp->chgCData(oldp+26,(vlSelf->ps2_top__DOT__ps2_u1__DOT__fifo[5]),8);
        bufp->chgCData(oldp+27,(vlSelf->ps2_top__DOT__ps2_u1__DOT__fifo[6]),8);
        bufp->chgCData(oldp+28,(vlSelf->ps2_top__DOT__ps2_u1__DOT__fifo[7]),8);
        bufp->chgCData(oldp+29,(vlSelf->ps2_top__DOT__ps2_u1__DOT__r_ptr),3);
    }
    bufp->chgBit(oldp+30,(vlSelf->clk));
    bufp->chgBit(oldp+31,(vlSelf->rst));
    bufp->chgBit(oldp+32,(vlSelf->ps2_clk));
    bufp->chgBit(oldp+33,(vlSelf->ps2_data));
    bufp->chgCData(oldp+34,(vlSelf->seg1),8);
    bufp->chgCData(oldp+35,(vlSelf->seg2),8);
    bufp->chgCData(oldp+36,(vlSelf->seg3),8);
    bufp->chgCData(oldp+37,(vlSelf->seg4),8);
    bufp->chgCData(oldp+38,(vlSelf->seg5),8);
    bufp->chgCData(oldp+39,(vlSelf->seg6),8);
    bufp->chgCData(oldp+40,(vlSelf->seg7),8);
    bufp->chgCData(oldp+41,(vlSelf->seg8),8);
    bufp->chgBit(oldp+42,(vlSelf->overflow));
    bufp->chgBit(oldp+43,(vlSelf->ps2_top__DOT__ready_p1));
    bufp->chgBit(oldp+44,((1U & (~ (IData)(vlSelf->rst)))));
}

void Vps2_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root__trace_cleanup\n"); );
    // Init
    Vps2_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vps2_top___024root*>(voidSelf);
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
