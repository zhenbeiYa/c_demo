#include <stdio.h>
#include <stdbool.h>
//bool类型头文件库


int main() {
    char name = 'A';
    printf("name=%c \n", name);
    char token = 97;
    printf("token= %c \n", token);
    bool isFlag = true;
    if (isFlag) {
        printf("YYuuuTTT");
    }
    float f1 = 12.33f;
    double d1 = 123.4;
    float f2 = (float) d1;
    printf("f1=%f \n", f1);
    printf("f2=%f \n", f2);
    printf("d1=%6lf \n", d1);

}