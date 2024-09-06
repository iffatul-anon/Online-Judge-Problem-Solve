// The longest common subsequence in C

#include <stdio.h>
#include <string.h>

int main() {
    char S1[1000], S2[1000];
    scanf("%s",S1);
    scanf("%s",S2);

    int m = strlen(S1);
    int n = strlen(S2);
    int  LCS_table[m+1][n+1];

    // Filling 0's in the matrix
    for (int i = 0; i <= m; i++)
        LCS_table[i][0] = 0;
    for (int i = 0; i <= n; i++)
        LCS_table[0][i] = 0;

    // Building the mtrix in bottom-up way
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++) {
        if (S1[i - 1] == S2[j - 1]) {
            LCS_table[i][j] = LCS_table[i - 1][j - 1] + 1;
        } 
        else if (LCS_table[i - 1][j] >= LCS_table[i][j - 1]) {
            LCS_table[i][j] = LCS_table[i - 1][j];
        } 
        else {
            LCS_table[i][j] = LCS_table[i][j - 1];
        }
    }

    int index = LCS_table[m][n];
    char lcsAlgo[index + 1];
    lcsAlgo[index] = '\0';

    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (S1[i - 1] == S2[j - 1]) {
            lcsAlgo[index - 1] = S1[i - 1];
            i--;
            j--;
            index--;
        }
        else if (LCS_table[i - 1][j] > LCS_table[i][j - 1])
            i--;
        else
            j--;
    }

    // Printing the sub sequences
    printf("S1 : %s \nS2 : %s \n", S1, S2);
    printf("LCS Length: %d\n",LCS_table[m][n]);
    printf("LCS: %s\n", lcsAlgo);

    return 0;
}