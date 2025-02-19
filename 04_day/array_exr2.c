#include <stdio.h>

#define  ROW 10
#define  COL 10

/**
 * 杨辉三角
 * @return
 */
int main() {
    int yang_hui[ROW][COL];
    for (int i = 0; i < ROW; ++i) {
        yang_hui[i][0] = 1;
        yang_hui[i][i] = 1;
        for (int j = 1; j < i; ++j) {
            yang_hui[i][j] = yang_hui[i - 1][j] + yang_hui[i - 1][j - 1];
        }
    }


    for (int i = 0; i < ROW; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("%i \t", yang_hui[i][j]);
        }
        printf("\n");
    }
}