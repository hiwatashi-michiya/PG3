#include <stdio.h>
#include <Windows.h>
#include <list>
#include <iostream>
using namespace std;

int main() {

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

	cout << "1970年の山手線の駅一覧\n";

	for (auto it = yamanoteLine.begin(); it != yamanoteLine.end(); it++) {

		cout << *it;
		cout << "\n";

	}

	cout << "2019年の山手線の駅一覧(西日暮里追加)\n";

	for (auto it = yamanoteLine.begin(); it != yamanoteLine.end(); it++) {

		if (*it == "Tabata") {
			it = yamanoteLine.insert(it, "Nishi-Nippori");
			break;
		}

	}

	for (auto it = yamanoteLine.begin(); it != yamanoteLine.end(); it++) {

		cout << *it;
		cout << "\n";

	}

	cout << "2022年の山手線の駅一覧(高輪ゲートウェイ追加)\n";

	for (auto it = yamanoteLine.begin(); it != yamanoteLine.end(); it++) {

		if (*it == "Tamachi") {
			it = yamanoteLine.insert(it, "Takanawa Gateway");
			break;
		}

	}

	for (auto it = yamanoteLine.begin(); it != yamanoteLine.end(); it++) {

		cout << *it;
		cout << "\n";

	}

	return 0;
}