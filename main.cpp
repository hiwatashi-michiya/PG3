#include <stdio.h>
#include <Windows.h>
#include <list>
#include <iostream>
using namespace std;

int main() {

	SetConsoleOutputCP(65001);

	list<const char*> yamanoteLine{
		"Tokyo",
		"Kanda",
		"Akihabara",
		"Okachimachi",
		"Ueno",
		"Uguisudani",
		"Nippori",
		/*"Nishi-Nippori",*/
		"Tabata",
		"Komagome",
		"Sugamo",
		"Otsuka",
		"Ikebukuro",
		"Mejiro",
		"Takadanobaba",
		"Shin-Okubo",
		"Shinjuku",
		"Yoyogi",
		"Harajuku",
		"Shibuya",
		"Ebisu",
		"Meguro",
		"Gotanda",
		"Osaki",
		"Shinagawa",
		/*"Takanawa Gateway",*/
		"Tamachi",
		"Hamamatsucho",
		"Shimbashi",
		"Yurakucho"
	};

	cout << "1970年\n";

	for (auto it = yamanoteLine.begin(); it != yamanoteLine.end(); it++) {

		cout << *it;
		cout << "\n";

	}

	return 0;
}