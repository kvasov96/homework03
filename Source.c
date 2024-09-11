#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int a, b;
	printf("¬ведите a и b:\n");
	scanf("%d %d", &a, &b);
	system("pause");
	puts(".___________________________.");
	puts("|  a * b  | a + b |  a - b  |");
	puts("|---------------------------|");
	printf("|% 3.d *% -3.d |% 3.d +% -3.d|% 3.d -% -3.d|", a, b, a, b, a, b);
	puts("\n|---------------------------|");
	printf("|  % -7.d|   % -5.d|   % -5.d|", a * b, a + b, a - b);
	puts("\n-----------------------------");
	return 777;
}