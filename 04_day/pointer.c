#include <stdio.h>
#include <malloc.h>


int main() {
/*
    int arr[] = {1, 2, 3, 4, 4};
    int *index = arr;
    printf("index's value is %d \n", *index);*/
    int row = 0, column = 0;
    printf("行值长度:");
    scanf("%d", &row);
    printf("列值长度:");
    scanf("%d", &column);
    //采用malloc()初始化一个二维数组
    int **res = (int **) malloc(row * sizeof(int *));
    for (int j = 0; j < row; ++j) {
        res[j] = (int *) malloc(column * sizeof(int));
        for (int k = 0; k < column; ++k) {
            res[j][k] = 5 + j + k;
        }
    }
    for (int j = 0; j < row; ++j) {
        for (int k = 0; k < column; ++k) {
            printf("%d \t", res[j][k]);
        }
        printf("\n");
    }
}