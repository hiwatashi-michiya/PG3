#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

typedef void(*PFunc)(int*);

void Result(int* num) {

	int result = rand() % 11 + 2;

	//���������̔���
	bool isEven = false;

	if (result % 2 == 0) {
		isEven = true;
	}

	if (isEven == false && *num == 1) {
		printf("%d�̒�!���Ȃ��̏����ł�!\n", result);
	}
	else if (isEven && *num == 2) {
		printf("%d�̔�!���Ȃ��̏����ł�!\n", result);
	}
	else if (*num == 1) {
		printf("%d�̔�!���Ȃ��̕����ł�...\n", result);
	}
	else if (*num == 2) {
		printf("%d�̒�!���Ȃ��̕����ł�...\n", result);
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

	printf("��������!\n���Ȃ�1�A���Ȃ�2�������Ă�������\n");
	
	while (num < 1 || 2 < num)
	{

		scanf_s("%d", &num);
		while (getchar() != '\n');

	}

	if (num == 1) {
		printf("����I�т܂���!���ʂ�");
	}
	else {
		printf("����I�т܂���!���ʂ�");
	}

	PFunc p;
	p = Result;
	setTimeout(p, 3, num);

	return 0;
}