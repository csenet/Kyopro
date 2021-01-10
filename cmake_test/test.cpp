//
// Created by kouic on 2020/09/25.
//
#include <iostream>
#include "test.hpp"

void add(int a, int b) {
    int i;
    auto ans = 1;
    for (i = 0; i < b; i++) {
        ans *= a;
        std::cout << ans << std::endl;
    }
    std::cout << "合計値は," << ans << "です" << std::endl;
}

