#include "lab1_z2.h"
#include <cstdlib>
#include <iostream>

int main() 
{
    int err_cnt = 0;
    for (int iter = 0; iter < N; ++iter) 
    {
        std::cout << "iteration " << iter + 1 << " starting\n";
        din_type inA = std::rand() % 1337, inB = std::rand() % 1337, inC = std::rand() % 1337;
        
        dout_type exp_sum = inA + inB + inC;
        
        dout_type sum = lab1_z2(inA, inB, inC);

        if (sum != exp_sum) 
        {
            err_cnt++;
            std::cout << "expected: " << exp_sum << std::endl 
                << "actual: " << sum << std::endl 
                << "inA:" << inA << " inB: " << inB << " inC: " << inC << std::endl;
        }
        
        std::cout << "iteration " << iter + 1 << " finished\n";
    }

    if (!err_cnt) 
    {
        std::cout << "TEST PASSED!" << std::endl;
        return err_cnt;
    }

    std::cout << "TEST FAILED!" << std::endl;
    return err_cnt;
}