#include <iostream>
#include <cmath>

float obliczPrzeciw(){
	float przy1 = 0.0;
	float przy2 = 0.0;
	float wynik = 0.0;

	std::cout << "Podaj przyprostokątne:\n1: ";
	std::cin >> przy1;

	std::cout << "2: ";
	std::cin >> przy2;

	//math
	wynik = powf(przy1, 2) + powf(przy2, 2);
	wynik = sqrtf(wynik);

	return wynik;
	
}

float obliczPrzy(){
	float przy1 = 0.0;
	float przeciw1 = 0.0;
	float wynik = 0.0;

	std::cout << "Podaj przyprostokątną: ";
	std::cin >> przy1;
	
	std::cout << "Podaj przeciwprostokątną: ";
	std::cin >> przeciw1;

	//math
	wynik = powf(przeciw1, 2) - powf(przy1, 2);
	wynik = sqrtf(wynik);
	
	return wynik;
}

int main(){
	float wynik = 0.0;

	int wybor = 0;

	std::cout << "TriangleTools CPP edition\n";
	std::cout << "Wybierz tryb\n";
	std::cout << "1. Obliczanie przeciwprostokątnej\n" <<
	"2. Obliczanie przyprostokątnej\n";
	std::cout << "?: ";
	std::cin >> wybor;

	/*
	1 = Obliczanie przeciwprostokątnej
	2 = Obliczanie przyprostokątnej
	*/
	switch (wybor){
		case 1:
			wynik = obliczPrzeciw();
			break;
		case 2:
			wynik = obliczPrzy();
			break;
		default:
			std::cout << "Taka opcja nie istnieje!\n";
			return 0;
	}

	std::cout << "Wynik: " << wynik << std::endl;

	return 0;
}

