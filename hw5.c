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

    printf("���� ������ �Է��ϼ���: ");
    scanf("%d", &decimalNumber);

    if (decimalNumber <= 0) {
        printf("���� ������ �Է��ؾ� �մϴ�.\n");
    }
    else {
        printf("%d�� 2���� ǥ����: ", decimalNumber);
        decimalToBinary(decimalNumber);
        printf("\n");
    }

    return 0;
}