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

	//���������̔���
	bool isEven = false;

	if (result % 2 == 0) {
		isEven = true;
	}

	if (isEven == false && num == 1) {
		printf("%d�̒�!���Ȃ��̏����ł�!\n", result);
	}
	else if (isEven && num == 2) {
		printf("%d�̔�!���Ȃ��̏����ł�!\n", result);
	}
	else if (num == 1) {
		printf("%d�̔�!���Ȃ��̕����ł�...\n", result);
	}
	else if (num == 2) {
		printf("%d�̒�!���Ȃ��̕����ł�...\n", result);
	}

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
		printf("����I�т܂���!���ʂ�...\n");
	}
	else {
		printf("����I�т܂���!���ʂ�...\n");
	}

	PFunc p;
	p = Result;
	setTimeout(p, 3, num);

	return 0;
}