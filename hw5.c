#define _CRT_NO_SECURE_WARINGS
#include <stdio.h>

void decimalToBinary(int n) {
    if (n > 0) {
        decimalToBinary(n / 2);
        printf("%d", n % 2);
    }
}

int main() {
    int decimalNumber;

    printf("양의 정수를 입력하세요: ");
    scanf("%d", &decimalNumber);

    if (decimalNumber <= 0) {
        printf("양의 정수를 입력해야 합니다.\n");
    }
    else {
        printf("%d의 2진수 표현은: ", decimalNumber);
        decimalToBinary(decimalNumber);
        printf("\n");
    }

    return 0;
}