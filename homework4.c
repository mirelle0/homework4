#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    int A, B;
    printf("Введите сумму A: ");
    scanf("%d", &A);
    printf("Введите сумму B: ");
    scanf("%d", &B);
    printf((A % 2) != (B % 2) ? "Код сгенерирован\n" : "Код не сгенерирован\n");
    getchar();
}
