#include <stdio.h>
#include "calc.h"

void print_menu() 
{
    printf("\nМеню калькулятора:\n");
    printf("1) Сложение\n");
    printf("2) Вычитание\n");
    printf("3) Умножение\n");
    printf("4) Деление\n");
    printf("5) Выход\n");
    printf("Выберите операцию: ");
}

int main() 
{
    int choice;
    int a, b, result;

    while (1) 
    {
        print_menu();
        scanf("%d", &choice);

        if (choice == 5) 
        {
            printf("Выход из программы.\n");
            break;
        }

        if (choice < 1 || choice > 5) 
        {
            printf("Ошибка: неверный выбор!\n");
            continue;
        }

        printf("Введите первое число: ");
        scanf("%d", &a);
        printf("Введите второе число: ");
        scanf("%d", &b);

        switch (choice) 
        {
            case 1:
                result = add(a, b);
                printf("Результат: %d\n", result);
                break;
            case 2:
                result = sub(a, b);
                printf("Результат: %d\n", result);
                break;
            case 3:
                result = mul(a, b);
                printf("Результат: %d\n", result);
                break;
            case 4:
                if (b == 0) 
                {
                    printf("Ошибка: деление на ноль!\n");
                } 
                else 
                {
                    result = div(a, b);
                    printf("Результат: %d\n", result);
                }
                break;
            default:
                printf("Неизвестная ошибка\n");
        }
    }

    return 0;
}
