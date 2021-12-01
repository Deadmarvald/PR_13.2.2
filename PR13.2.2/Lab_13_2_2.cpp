// Lab_13.2.2.cpp
// Вольвенко Іван
// Лабораторна робота № 13.2(частина 2)
// Директиви препроцесора
// Варіант 13

#include <stdio.h>
#include <conio.h>
#include <stdarg.h>

float MaxComDiv(int first, ... );

#include <varargs.h>

float MaxComDiv(va_list);

int main(void)
{
	puts("function with a variable number of arguments");
	printf("MaxComDiv(6, 9, 12, 15) is: %f\n",
		MaxComDiv(6, 9, 12, 15, -1));
	printf("MaxComDiv(4, 2, 1) is: %f\n",
		MaxComDiv(4, 2, 1, -1));
	printf("MaxComDiv(12, 36, 72) is: %f\n",
		MaxComDiv(12, 36, 72, -1));

	while (!_kbhit());
}

float MaxComDiv(int first, ...)
{
	int a = first;
	int k;
	int i;

	va_list marker;
	va_start(marker, first);
	for (i = a; i > 0; i--)
	{
		va_list marker;
		va_start(marker, first);
		a = first;
		k = 0;
		while (a != -1)
		{
			if (a % i != 0)
			{
				k++;
			}
			a = va_arg(marker, int);
		}
		if (k == 0)
		{
			break;
		}
		va_end(marker);
	}

	float rez = (float)i;
	return rez;
}