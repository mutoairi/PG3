#include <iostream>
#include<Windows.h>
#include <string>
#include <chrono>
#include <ctime>

int main() {

	printf("100000�������ړ��ƃR�s�[�Ŕ�r���܂����B\n");
	std::string a(1000000, 'a');

	std::chrono::system_clock::time_point start,end;

	start = std::chrono::system_clock::now();
	std::string b = a;
	end = std::chrono::system_clock::now();
	std::chrono::duration<long double,std::micro> copyTime= (end - start);
	std::cout << "�R�s�[: " << copyTime.count() << " us"<<std::endl;

	//�ړ�
	start = std::chrono::system_clock::now();
	std::string&& c = std::move(a);
	end = std::chrono::system_clock::now();
	std::chrono::duration<long double, std::micro> moveTime = end - start;
	std::cout << "�ړ�: " << moveTime.count() << " us" << std::endl;

	return 0;
}