#include <stdio.h>

#define  ROW 2
#define  COL 3

//提前声明


void print_tow_dimensional_array(int (*arr)[COL]);

void print_tow_dimensional_array2(int arr[COL][ROW]);

int main() {

    int arr[ROW][COL] = {
            {1, 2, 3},
            {4, 5, 6}
    };
    printf("转置前的数组: \n");
    print_tow_dimensional_array(arr);
    //实现数组的转置功能
    int i, j;
    int res[COL][ROW];
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; ++j) {
            res[j][i] = arr[i][j];
        }
    }
    printf("转置后的数组:\n");
    print_tow_dimensional_array2(res);
}


void print_tow_dimensional_array(int (*arr)[COL]) {
    int i, j;
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; ++j) {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
}

void print_tow_dimensional_array2(int arr[COL][ROW]) {
    int i, j;
    for (i = 0; i < COL; i++) {
        for (j = 0; j < ROW; ++j) {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
}