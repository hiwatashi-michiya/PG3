#include <stdio.h>

template <typename T>

T Min(const T& a, const T& b) {

	if (a < b) {
		return a;
	}

	return b;

}

template <>
char Min<char>(const char& a,const char& b) {

	printf("数字以外の入力は受け付けません\n");

	char result = ' ';

	return result;

}

int main() {

	printf("%d\n", Min<int>(14, 24));
	printf("%f\n", Min<float>(25.3f, 11.2f));
	printf("%lf\n", Min<double>(165.32f, 45.143f));
	printf("%c\n", Min<char>('a', 'b'));
	
	return 0;
}