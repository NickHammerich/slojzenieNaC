// Имя файла Сложение.exe
// Автор Ник Хаммерич

#include <stdio.h>
main()
{
    float pervoe, vtoroe;
    float otvet;

    printf("Введите первое слагаемое ");
    scanf(" %f", &pervoe);

    printf("\nВведите второе слагаемое ");
    scanf(" %f", &vtoroe);

    otvet = pervoe+vtoroe;

    printf("\nСумма = %.2f\n", otvet);

    system ("pause");
    return 0;
}
