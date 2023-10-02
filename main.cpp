#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

typedef int(*PFunc)();

int Result() {

	return rand() % 11 + 2;

}

void setTimeout(PFunc p, int second, int num) {

	Sleep(second * 1000);

	int result = p();

	//丁か半かの判定
	bool isEven = false;

	if (result % 2 == 0) {
		isEven = true;
	}

	if (isEven == false && num == 1) {
		printf("%dの丁!あなたの勝ちです!\n", result);
	}
	else if (isEven && num == 2) {
		printf("%dの半!あなたの勝ちです!\n", result);
	}
	else if (num == 1) {
		printf("%dの半!あなたの負けです...\n", result);
	}
	else if (num == 2) {
		printf("%dの丁!あなたの負けです...\n", result);
	}

}

int main(void) {

	srand(unsigned int(time(nullptr)));

	int num = 0;

	printf("丁半博打!\n丁なら1、半なら2を押してください\n");
	
	while (num < 1 || 2 < num)
	{

		scanf_s("%d", &num);
		while (getchar() != '\n');

	}

	if (num == 1) {
		printf("丁を選びました!結果は...\n");
	}
	else {
		printf("半を選びました!結果は...\n");
	}

	PFunc p;
	p = Result;
	setTimeout(p, 3, num);

	return 0;
}