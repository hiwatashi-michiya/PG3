#include <stdio.h>

/// <summary>
/// �ċA�I�Ȓ����̌v�Z�֐�
/// </summary>
/// <param name="money">����̒���</param>
/// <param name="n">��������</param>
/// <returns>���v����</returns>
int RecursiveWage(int money, int n) {

	if (n <= 1) {
		return money;
	}

	return money + RecursiveWage(money * 2 - 50, n - 1);

}

int main() {

	//����������
	int WorkTime = 0;
	
	//��ʓI�Ȏ���
	int normalWage = 1072;

	//�ċA�I�Ȓ����̊J�n����
	int recursiveWageStart = 100;

	//���v����
	int totalWage = recursiveWageStart;

	//�ċA�I��������ʓI�Ȏ����𒴂���܂Ń��[�v
	while (normalWage * WorkTime > totalWage || WorkTime == 0) {

		WorkTime++;

		totalWage = RecursiveWage(recursiveWageStart, WorkTime);

	}

	printf("���������� : %d\n", WorkTime);
	printf("��ʓI�Ȓ��� : %d\n", normalWage * WorkTime);
	printf("�ċA�I�Ȓ��� : %d\n", totalWage);

	return 0;
}