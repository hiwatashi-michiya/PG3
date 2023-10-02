#include <stdio.h>

int main() {


	
	printf("コンソールアプリケーションを終了する場合は数字の1を押してEnterキーを入力してください");

	int i = 0;
	while (i != 1) {
		scanf_s("%d", &i);
	}

	return 0;
}