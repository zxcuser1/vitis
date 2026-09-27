#include "lab1_z1.h"
#include <iostream>
#include <cstdlib>

int main() {
    din_type inA, inB, inC;
    din_type inArr[ROWS];

    dout_type expectedArr[ROWS];
    dout_type actualArr[ROWS];

    int err_cnt = 0;

    for (int iter = 0; iter < N; ++iter) {
        std::cout << "Simulation iteration " << iter << " started\n";

        // Генерация входных данных
        inA = std::rand() % 1000;
        inB = std::rand() % 1000;
        inC = std::rand() % 1000;

        for (int i = 0; i < ROWS; ++i) {
            inArr[i] = std::rand() % 1000;
        }

        // Вычисляем эталонный результат
        for (int i = 0; i < ROWS; ++i) {
            expectedArr[i] =
                static_cast<dout_type>(inArr[i]) * inA
                + inB
                + inC;
        }

        // Запускаем тестируемую функцию
        lab1_z1(inArr, inA, inB, inC, actualArr);

        // Сравниваем результат
        for (int i = 0; i < ROWS; ++i) {
            if (expectedArr[i] != actualArr[i]) {
                ++err_cnt;

                std::cout
                    << "ERROR: index = " << i
                    << ", expected = " << expectedArr[i]
                    << ", actual = " << actualArr[i]
                    << '\n';
            }
        }

        std::cout << "Simulation iteration " << iter << " finished\n";
    }

    std::cout << "Total error count: " << err_cnt << '\n';

    if (err_cnt) {
        std::cout << "TEST FAILED\n";
    } else {
        std::cout << "TEST PASSED\n";
    }

    return err_cnt;
}