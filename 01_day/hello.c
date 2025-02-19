#include <stdio.h>
#include <limits.h>
#include "function_demo.h"

/*
 *  %d(%i): 十进制的int类型
 *  %c: 字符类型
 *  %f: 浮点数类型
 *  %s:字符串类型
 *  %ld: 十进制的long类型
 *  %lf: 十进制的双浮点型 (double)
 *  %u:十进制的无符号整数
 *  %p: 数据指针
 * */

int main() {
    printf("hello world!\n");
    printf("sum is %d,score is %s", sum(1,2),"A \n");
    printf("sum is %d,score is %c", sum(1,2),'B');
    int c=10;
    int *p=&c;
    printf("c's address point is %p \n",p);
    //修改为左对齐
    printf("c's address point's value is %-10d \n", *p);
    //显示正负号
    printf("c's address point's value is %+i \n",*p);
    //限定小数位数 6表示占6位
    printf("num digits limitation example %6.3f \n",12.3);
    int  arr[]={1,5,9,7,8,41,12,34};
    int len=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,len-1);
    printArray(arr,len);
    int mayors[10];
    for (int i = 0; i < 10; ++i) {
        mayors[i] = i + 10;
    }
    for (int i = 0; i < 10; ++i) {
        printf("%i \t",mayors[i]);
    }
    unsigned int u_num = 65535;
    //无符号整数直接转为有符号数
    short verbs = u_num;
    //可以直到为负数
    printf("%d", verbs);
    printf("%d", INT_MAX);
}

