#include <iostream>
#include <string>

struct Wiek {
	int dzien;
	int miesiac;
	int rok;
};

int main() {
	int dzien, rok, miesiac, dzienU, miesiacU, rokU;
	std::string slowo1, slowo2, slowo3, flaga = "stop";

	std::cout << "podaj dzien miesiac i rok";
	std::cin >> dzien >> miesiac >> rok;

	std::cout << "podaj swoja date urodzenia dzien miesiac rok";
	std::cin >> dzienU >> miesiacU >> rokU;

	Wiek wiek = { dzien - dzienU, miesiac - miesiacU, rok - rokU };
	if (dzien - dzienU < 0) {
		wiek.miesiac -= 1;
		wiek.dzien += 31;
	}
	if (miesiac - miesiacU < 0) {
		wiek.rok -= 1;
		wiek.miesiac += 12;
	}

	std::cout << "Urodziles sie dokladnie " << wiek.dzien << " dni temu " << wiek.miesiac << " miesiecy temu " << wiek.rok << " lat temu ";

	return 0;
}
