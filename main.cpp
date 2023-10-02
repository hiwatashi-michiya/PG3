#include <stdio.h>

/// <summary>
/// 再帰的な賃金の計算関数
/// </summary>
/// <param name="money">初回の賃金</param>
/// <param name="n">働く時間</param>
/// <returns>合計賃金</returns>
int RecursiveWage(int money, int n) {

	if (n <= 1) {
		return money;
	}

	return money + RecursiveWage(money * 2 - 50, n - 1);

}

int main() {

	//働いた時間
	int WorkTime = 0;
	
	//一般的な時給
	int normalWage = 1072;

	//再帰的な賃金の開始時給
	int recursiveWageStart = 100;

	//合計賃金
	int totalWage = recursiveWageStart;

	//再帰的賃金が一般的な時給を超えるまでループ
	while (normalWage * WorkTime > totalWage || WorkTime == 0) {

		WorkTime++;

		totalWage = RecursiveWage(recursiveWageStart, WorkTime);

	}

	printf("働いた時間 : %d\n", WorkTime);
	printf("一般的な賃金 : %d\n", normalWage * WorkTime);
	printf("再帰的な賃金 : %d\n", totalWage);

	return 0;
}