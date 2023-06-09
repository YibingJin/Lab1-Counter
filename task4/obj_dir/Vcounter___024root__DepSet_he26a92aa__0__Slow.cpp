// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter.h for the primary calling header

#include "verilated.h"

#include "Vcounter___024root.h"

VL_ATTR_COLD void Vcounter___024root___settle__TOP__0(Vcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__myDecoder__DOT__result = 0U;
    vlSelf->top__DOT__myDecoder__DOT__result = ((0xfff00U 
                                                 & vlSelf->top__DOT__myDecoder__DOT__result) 
                                                | (IData)(vlSelf->count));
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xff0ffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf00U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                          >> 8U)) << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xf0fffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf000U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                           >> 0xcU)) 
                           << 0xcU)));
    }
    vlSelf->top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                & (vlSelf->top__DOT__myDecoder__DOT__result 
                                                   << 1U));
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xff0ffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf00U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                          >> 8U)) << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xf0fffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf000U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                           >> 0xcU)) 
                           << 0xcU)));
    }
    vlSelf->top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                & (vlSelf->top__DOT__myDecoder__DOT__result 
                                                   << 1U));
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xff0ffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf00U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                          >> 8U)) << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xf0fffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf000U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                           >> 0xcU)) 
                           << 0xcU)));
    }
    vlSelf->top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                & (vlSelf->top__DOT__myDecoder__DOT__result 
                                                   << 1U));
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xff0ffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf00U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                          >> 8U)) << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xf0fffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf000U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                           >> 0xcU)) 
                           << 0xcU)));
    }
    vlSelf->top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                & (vlSelf->top__DOT__myDecoder__DOT__result 
                                                   << 1U));
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xff0ffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf00U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                          >> 8U)) << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xf0fffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf000U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                           >> 0xcU)) 
                           << 0xcU)));
    }
    vlSelf->top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                & (vlSelf->top__DOT__myDecoder__DOT__result 
                                                   << 1U));
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xff0ffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf00U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                          >> 8U)) << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xf0fffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf000U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                           >> 0xcU)) 
                           << 0xcU)));
    }
    vlSelf->top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                & (vlSelf->top__DOT__myDecoder__DOT__result 
                                                   << 1U));
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xff0ffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf00U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                          >> 8U)) << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xf0fffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf000U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                           >> 0xcU)) 
                           << 0xcU)));
    }
    vlSelf->top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                & (vlSelf->top__DOT__myDecoder__DOT__result 
                                                   << 1U));
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xff0ffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf00U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                          >> 8U)) << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xf0fffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf000U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                           >> 0xcU)) 
                           << 0xcU)));
    }
    vlSelf->top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                & (vlSelf->top__DOT__myDecoder__DOT__result 
                                                   << 1U));
    vlSelf->bcd = (0xfffU & (vlSelf->top__DOT__myDecoder__DOT__result 
                             >> 8U));
}

VL_ATTR_COLD void Vcounter___024root___eval_initial(Vcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vcounter___024root___eval_settle(Vcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_settle\n"); );
    // Body
    Vcounter___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vcounter___024root___final(Vcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___final\n"); );
}

VL_ATTR_COLD void Vcounter___024root___ctor_var_reset(Vcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->v = VL_RAND_RESET_I(8);
    vlSelf->bcd = VL_RAND_RESET_I(12);
    vlSelf->count = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__myCounter__DOT__v = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__myDecoder__DOT__result = VL_RAND_RESET_I(20);
}
