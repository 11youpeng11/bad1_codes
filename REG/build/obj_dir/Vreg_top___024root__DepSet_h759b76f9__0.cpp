// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreg_top.h for the primary calling header

#include "Vreg_top__pch.h"
#include "Vreg_top___024root.h"

VL_INLINE_OPT void Vreg_top___024root___ico_sequent__TOP__0(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->o_rand_flag = vlSelf->i_rand_flag;
}

void Vreg_top___024root___eval_ico(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vreg_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vreg_top___024root___eval_triggers__ico(Vreg_top___024root* vlSelf);

bool Vreg_top___024root___eval_phase__ico(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vreg_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vreg_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vreg_top___024root___eval_act(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vreg_top___024root___nba_sequent__TOP__0(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__reg_top__DOT__u_lfsr__DOT__count 
        = vlSelf->reg_top__DOT__u_lfsr__DOT__count;
    vlSelf->__Vdly__o_led = vlSelf->o_led;
}

VL_INLINE_OPT void Vreg_top___024root___nba_sequent__TOP__1(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdly__reg_top__DOT__u_lfsr__DOT____Vcellout__uo__o_q 
        = vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__uo__o_q;
    vlSelf->__Vdly__reg_top__DOT__u_lfsr__DOT____Vcellout__uo__o_q 
        = ((8U == (IData)(vlSelf->reg_top__DOT__u_lfsr__DOT__count))
            ? ((IData)(vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__u7__o_q) 
               ^ ((IData)(vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__u5__o_q) 
                  ^ ((IData)(vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__u3__o_q) 
                     ^ (IData)(vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__u4__o_q))))
            : (IData)(vlSelf->reg_top__DOT__u_lfsr__DOT__o_q_1));
}

extern const VlUnpacked<CData/*7:0*/, 16> Vreg_top__ConstPool__TABLE_h1aba171b_0;

VL_INLINE_OPT void Vreg_top___024root___nba_sequent__TOP__2(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    if (vlSelf->rst) {
        vlSelf->__Vdly__reg_top__DOT__u_lfsr__DOT__count = 0U;
        vlSelf->__Vdly__o_led = 0U;
        vlSelf->reg_top__DOT__u_lfsr__DOT__o_q_1 = 0U;
    }
    if ((8U > (IData)(vlSelf->reg_top__DOT__u_lfsr__DOT__count))) {
        vlSelf->reg_top__DOT__u_lfsr__DOT__o_q_1 = 
            (1U & ((IData)(vlSelf->i_seg) >> (7U & (IData)(vlSelf->reg_top__DOT__u_lfsr__DOT__count))));
        vlSelf->__Vdly__o_led = 0U;
        vlSelf->__Vdly__reg_top__DOT__u_lfsr__DOT__count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->reg_top__DOT__u_lfsr__DOT__count)));
    } else if ((8U == (IData)(vlSelf->reg_top__DOT__u_lfsr__DOT__count))) {
        vlSelf->__Vdly__reg_top__DOT__u_lfsr__DOT__count 
            = vlSelf->reg_top__DOT__u_lfsr__DOT__count;
        vlSelf->__Vdly__o_led = ((IData)(vlSelf->i_rand_flag)
                                  ? (((IData)(vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__u7__o_q) 
                                      << 7U) | (((IData)(vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__u6__o_q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__u5__o_q) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__u4__o_q) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__u3__o_q) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__u2__o_q) 
                                                             << 2U) 
                                                            | (((IData)(vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__u1__o_q) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__uo__o_q))))))))
                                  : (IData)(vlSelf->o_led));
        vlSelf->reg_top__DOT__u_lfsr__DOT__o_q_1 = 0U;
    }
    vlSelf->reg_top__DOT__u_lfsr__DOT__count = vlSelf->__Vdly__reg_top__DOT__u_lfsr__DOT__count;
    vlSelf->o_led = vlSelf->__Vdly__o_led;
    __Vtableidx1 = (0xfU & (IData)(vlSelf->o_led));
    vlSelf->o_seg_0 = Vreg_top__ConstPool__TABLE_h1aba171b_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->o_led) 
                            >> 4U));
    vlSelf->o_seg_1 = Vreg_top__ConstPool__TABLE_h1aba171b_0
        [__Vtableidx2];
}

VL_INLINE_OPT void Vreg_top___024root___nba_sequent__TOP__3(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__u7__o_q 
        = vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__u6__o_q;
    vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__u6__o_q 
        = vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__u5__o_q;
    vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__u5__o_q 
        = vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__u4__o_q;
    vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__u4__o_q 
        = vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__u3__o_q;
    vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__u3__o_q 
        = vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__u2__o_q;
    vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__u2__o_q 
        = vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__u1__o_q;
    vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__u1__o_q 
        = vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__uo__o_q;
    vlSelf->reg_top__DOT__u_lfsr__DOT____Vcellout__uo__o_q 
        = vlSelf->__Vdly__reg_top__DOT__u_lfsr__DOT____Vcellout__uo__o_q;
}

void Vreg_top___024root___eval_nba(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vreg_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vreg_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vreg_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vreg_top___024root___nba_sequent__TOP__3(vlSelf);
    }
}

void Vreg_top___024root___eval_triggers__act(Vreg_top___024root* vlSelf);

bool Vreg_top___024root___eval_phase__act(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vreg_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vreg_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vreg_top___024root___eval_phase__nba(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vreg_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_top___024root___dump_triggers__ico(Vreg_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_top___024root___dump_triggers__nba(Vreg_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_top___024root___dump_triggers__act(Vreg_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vreg_top___024root___eval(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vreg_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/robot/ysyx-workbench/nvboard/REG/vsrc/reg_top.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vreg_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vreg_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/robot/ysyx-workbench/nvboard/REG/vsrc/reg_top.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vreg_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/robot/ysyx-workbench/nvboard/REG/vsrc/reg_top.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vreg_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vreg_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vreg_top___024root___eval_debug_assertions(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->i_rand_flag & 0xfeU))) {
        Verilated::overWidthError("i_rand_flag");}
}
#endif  // VL_DEBUG
