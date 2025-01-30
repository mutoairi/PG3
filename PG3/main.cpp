#include <stdio.h>
#include <iostream>
#include <list>



int main() {

	std::list<const char*>rosen = { "Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno",
		"Uguisudani", "Nippori", "Tabata", "Komagome",
		"Sugamo", "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba",
		"Shin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya",
		"Ebisu", "Meguro", "Gotanda", "Osaki", "Shinagawa",
		"Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho" };

	printf("1970”N\n");
	for (std::list<const char*>::iterator  itr = rosen.begin();
		itr != rosen.end();
		itr++)
	{
		std::cout << *itr << std::endl;
	}

	printf("\n2019”N\n");
	for (std::list<const char*>::iterator  itr = rosen.begin();
		itr != rosen.end();
		itr++)
	{
		if (*itr == "Tabata") {
			itr = rosen.insert(itr, "Nishi-Nippori");
			std::cout << *itr << std::endl;
			++itr;
		}
		std::cout << *itr << std::endl;
	}

	printf("\n2022”N\n");
	for (std::list<const char*>::iterator  itr = rosen.begin();
		itr != rosen.end();
		itr++)
	{
		if (*itr == "Tamachi") {
			itr = rosen.insert(itr, "Takanawa Gateway");
			std::cout << *itr << std::endl;
			++itr;
		}
		std::cout << *itr << std::endl;
	}
	return 0;
}
