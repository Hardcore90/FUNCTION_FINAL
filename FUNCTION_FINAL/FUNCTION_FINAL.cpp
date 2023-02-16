#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>
#include <iostream>
#include <conio.h>

void firstAndSecondChar()
{
    printf("Введите строку: \n");
    char str[100];
    gets_s(str);
    str[strlen(str)] = 0;
    char n;
    printf("Введите символ:");
    n = getchar();
    str[0] = str[strlen(str)-1] = n;
    puts(str);
}

void startAndEndSpaces()
{
    printf("Введите строку: \n");
    char str1[100];
    gets_s(str1);
    for (int i = 0; i < strlen(str1); i++)
    {
        for (int j = 0; str1[j] == ' '; j++)
        {
            for (int k = 0; k < strlen(str1); k++)
            {
                 str1[k] = str1[k + 1];
            }
        }
    }
    for (int i = strlen(str1)-1; str1[i] == ' '; i--)
    {
        str1[i] = 0;
    }
    puts(str1);
    printf("\n");
}

int main()
{
    setlocale(LC_ALL, "Russian");

    printf("Задание №1\n\nСоздать функцию, получающую на вход строку и символ, и возвращающую строку с измененной первой и последней буквой на входной символ.\n\n");

    firstAndSecondChar();
    printf("\n");
    while (fgetc(stdin) != '\n');
    

    printf("Задание №2\n\nСоздать функцию, получающую на вход строку и возвращающую строку с удалением начальных и конечных пробелов.\n\n");

    startAndEndSpaces();
    system("pause");
}