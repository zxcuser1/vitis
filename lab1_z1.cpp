#include "lab1_z1.h"

void lab1_z1(
    din_type inArr[ROWS],
    din_type inA,
    din_type inB,
    din_type inC,
    dout_type outArr[ROWS]
) {
internal_loop:
    for (int i = 0; i < ROWS; ++i) {
#pragma HLS PIPELINE off

        din_type x = inArr[i];

        dout_type mult = x * inA;
        dout_type sumBC = inB + inC;

        outArr[i] = mult + sumBC;
    }
}