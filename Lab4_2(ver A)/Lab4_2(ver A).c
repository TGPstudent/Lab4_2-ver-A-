// Lab4_2 (ver A).c: Підрахунок середнього арифметичного всіх парних чисел у діапазоні//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main(void)
{
	int s = 0, n = 0;
	setlocale(LC_CTYPE, "ukr");
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			s += i; n++;
		}
	}
	printf("\n В дiапазонi [1:100] \n Сума парних значень: %d \n Kiлькiсть значень: %d \n Cереднє арифметичне значення: %.1f", s, n, (float) s/n);
	int getch(); getch();
	return 0;
}