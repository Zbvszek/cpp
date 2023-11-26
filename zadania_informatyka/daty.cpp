#include <iostream>

struct wiek {
    int dzien;
    int miesiac;
    int rok;
};


int main() {
    // Autor marcin Cieśla
    //użytwonik podaje aktulana date miesiac rok i date urodzenia poczym program wylicza ile ma lat

    int dzien, rok, miesiac,dzienU,miesiacU,rokU;

    std::cout << "podaj dzien miesiac i rok";
    std::cin >> dzien >> miesiac >> rok;

    std::cout << "podaj swoja date urodzenia dzien miesiac rok";
    std::cin >> dzienU >> miesiacU >> rokU;

    wiek wiek = { dzien - dzienU,miesiac - miesiacU,rok - rokU };
    if (dzien - dzienU < 0) {
        wiek.miesiac - 1;
        wiek.dzien = 31;
    }
    if (miesiac - miesiacU<0) {
        wiek.rok - 1;
        wiek.miesiac = 12;
    }

    std::cout << "Urodziłeś się dokładnie " << wiek.dzien << " dni temu " << wiek.miesiac << " miesiecy temu " << wiek.rok << " lat temu ";



}