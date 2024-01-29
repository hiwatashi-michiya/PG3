#include <stdio.h>
#include <iostream>
#include <chrono>
#include <string>

int main() {

	std::string str(100000, 'a');

	std::chrono::system_clock::time_point start, end;

	start = std::chrono::system_clock::now(); //計測開始

	std::string copy = str;

	end = std::chrono::system_clock::now(); //計測終了

	auto usec = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

	std::cout << "copy:" << usec << std::endl;

	start = std::chrono::system_clock::now(); //計測開始

	std::string move = std::move(str);

	end = std::chrono::system_clock::now(); //計測終了

	usec = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

	std::cout << "move:" << usec << std::endl;

	return 0;
}