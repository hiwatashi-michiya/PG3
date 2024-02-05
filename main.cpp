#include <thread>
#include <iostream>

void ShowThread(int num) {

	std::cout << "thread " << num << std::endl;

}

int main() {

	std::thread thread1(ShowThread, 1);
	thread1.join();
	std::thread thread2(ShowThread, 2);
	thread2.join();

	std::thread thread3(ShowThread, 3);
	thread3.join();

	return 0;
}