#include <iostream>
#include "lcs.h"

int main() {
    std::string str1, str2;
    std::cout << "Enter the first string: ";
    std::cin >> str1;
    std::cout << "Enter the second string: ";
    std::cin >> str2;

    // Call the function to get the longest common substring and print the result inside the function itself
    longestCommonSubstring(str1, str2);

    return 0;
}
