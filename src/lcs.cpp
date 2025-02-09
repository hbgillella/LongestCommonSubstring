#include "lcs.h"
#include <iostream>

using namespace std;

string longestCommonSubstring(string str1, string str2) {
    int n = str1.length();
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    int maxLength = 0;
    int endIndex = -1; // to store the end index of the longest common substring

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > maxLength) {
                    maxLength = dp[i][j];
                    endIndex = i - 1; // update end index
                }
            } else {
                dp[i][j] = 0;
            }
        }
    }

    // Print the DP table
    cout << "DP Table:" << endl;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Extract the longest common substring
    string lcs = "";
    if (maxLength > 0) {
        lcs = str1.substr(endIndex - maxLength + 1, maxLength);
    }

    cout << "Longest Common Substring: " << lcs << endl;
    cout << "Length of Longest Common Substring: " << maxLength << endl;

    return lcs;
}



