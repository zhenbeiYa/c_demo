#include <stdio.h>

#define  N 5
#define  ROWS 3
#define  COLS  3

int main() {
/*    int arr[N];
    int *p = arr;
    printf("请输入5个数\n");
    //采用循环
    *//*   for (int i = 0; i < N; ++i) {
           scanf("%d", &arr[i]);
       }*//*
    //采用指针
    for (int i = 0; i < N; ++i) {
        scanf("%d", p + i);
    }
    *//*   for (int i = 0; i < N; ++i) {
           printf("%d \t", arr[i]);
       } *//*
    //采用指针的方式
    for (int i = 0; i < N; ++i) {
        printf("%d \t", *(p + i));
    }*/

    int res[ROWS][COLS] = {
            {13, 21, 13},
            {43, 55, 6},
            {74, 788, 94}
    };
    int *q, max;
    //采用指针形式找出最大值
    for (q = res[0], max = *q; q < res[0] + ROWS * COLS; q++) {
        if (max < *q) {
            max = *q;
        }
    }
    printf("the max value in tow_dimensional_array is  %d", max);
}
