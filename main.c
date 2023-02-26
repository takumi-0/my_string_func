#include <stdio.h>

#define MAX_NUM 128

int main(void){
    char str1[MAX_NUM];
    scanf("%s", str1);
    printf("%s : %zuwords\n", str1, strlen(str1));
    return 0;
}