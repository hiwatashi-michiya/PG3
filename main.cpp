#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

typedef void(*PFunc)(int*);

void Result(int* num) {

	int result = rand() % 11 + 2;

	//’š‚©”¼‚©‚Ì”»’è
	bool isEven = false;

	if (result % 2 == 0) {
		isEven = true;
	}

	if (isEven == false && *num == 1) {
		printf("%d‚Ì’š!‚ ‚È‚½‚ÌŸ‚¿‚Å‚·!\n", result);
	}
	else if (isEven && *num == 2) {
		printf("%d‚Ì”¼!‚ ‚È‚½‚ÌŸ‚¿‚Å‚·!\n", result);
	}
	else if (*num == 1) {
		printf("%d‚Ì”¼!‚ ‚È‚½‚Ì•‰‚¯‚Å‚·...\n", result);
	}
	else if (*num == 2) {
		printf("%d‚Ì’š!‚ ‚È‚½‚Ì•‰‚¯‚Å‚·...\n", result);
	}

}

void setTimeout(PFunc p, int second, int num) {

	int count = second;

	while (count != 0)
	{

		printf(".");

		Sleep(1000);

		count--;

	}

	printf("\n");

	p(&num);

}

int main(void) {

	srand(unsigned int(time(nullptr)));

	int num = 0;

	printf("’š”¼”‘Å!\n’š‚È‚ç1A”¼‚È‚ç2‚ğ‰Ÿ‚µ‚Ä‚­‚¾‚³‚¢\n");
	
	while (num < 1 || 2 < num)
	{

		scanf_s("%d", &num);
		while (getchar() != '\n');

	}

	if (num == 1) {
		printf("’š‚ğ‘I‚Ñ‚Ü‚µ‚½!Œ‹‰Ê‚Í");
	}
	else {
		printf("”¼‚ğ‘I‚Ñ‚Ü‚µ‚½!Œ‹‰Ê‚Í");
	}

	PFunc p;
	p = Result;
	setTimeout(p, 3, num);

	return 0;
}