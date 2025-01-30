#include <iostream>
#include<Windows.h>
#include <string>
#include <chrono>
#include <ctime>

int main() {

	printf("100000文字を移動とコピーで比較しました。\n");
	std::string a(1000000, 'a');

	std::chrono::system_clock::time_point start,end;

	start = std::chrono::system_clock::now();
	std::string b = a;
	end = std::chrono::system_clock::now();
	std::chrono::duration<long double,std::micro> copyTime= (end - start);
	std::cout << "コピー: " << copyTime.count() << " us"<<std::endl;

	//移動
	start = std::chrono::system_clock::now();
	std::string&& c = std::move(a);
	end = std::chrono::system_clock::now();
	std::chrono::duration<long double, std::micro> moveTime = end - start;
	std::cout << "移動: " << moveTime.count() << " us" << std::endl;

	return 0;
}