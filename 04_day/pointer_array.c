#include <stdio.h>

#define  SIZE 3
#define COLS 4

int main() {
    int *pointer[SIZE];
    int line1[][COLS] = {{1, 2,  3,  4},
                         {5, 6,  7,  8},
                         {9, 10, 11, 12}};
    for (int i = 0; i < SIZE; ++i) {
        pointer[i] = line1[i];
    }

    //遍历打印数组元素
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < COLS; ++j) {
            printf("%d \t ", *(pointer[i] + j));
        }
    }


}
