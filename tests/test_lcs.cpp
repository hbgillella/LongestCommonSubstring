#include "../include/lcs.h"
#include <iostream>
#include <cassert>

void testLCS() {
    assert(longestCommonSubstring("ABAB", "BABA") == "BAB");
    assert(longestCommonSubstring("abcdef", "zbcdf") == "bcd");
    assert(longestCommonSubstring("aaaa", "aaaa") == "aaaa");

    std::cout << "All tests passed!" << std::endl;
}

int main() {
    testLCS();
    return 0;
}
 
