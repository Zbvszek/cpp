#include <iostream>
#include <string>

int numSkoczkow;

class Zawodnik {
public:
    std::string imie;
    std::string nazwisko;
    int punkty_s;
    int punkty_k;
};

static void sprawdz_kw(int punkty_k, int punkty_s) {
    if (punkty_k > 200 || punkty_s > 100) std::cout << "kwalifikujesz sie do tego rocznego pucharu swiata";
}

int main() {
    while (numSkoczkow < 3) {
        std::cout << "Ilu skoczkow bierze udział: ";
        std::cin >> numSkoczkow;
    }

    Zawodnik* skoczkowie = new Zawodnik[numSkoczkow];

    for (int i = 0; i < numSkoczkow; i++) {
        std::cout << "Podaj imię skoczka nr " << i + 1 << ": ";
        std::cin >> skoczkowie[i].imie;

        std::cout << "Podaj nazwisko tego skoczka: ";
        std::cin >> skoczkowie[i].nazwisko;
    }
    for (int i = 0; i < numSkoczkow; i++) {
        std::cout << "Podaj punkty skoczka " << skoczkowie[i].imie << " " << skoczkowie[i].nazwisko << ": ";
        std::cin >> skoczkowie[i].punkty_s;

        std::cout << "Podaj punkty K skoczka " << skoczkowie[i].imie << " " << skoczkowie[i].nazwisko << ": ";
        std::cin >> skoczkowie[i].punkty_k;
    }
    for (int i = 0; i < numSkoczkow; i++) {
        std::cout << skoczkowie[i].imie << "" << skoczkowie[i].nazwisko << "\n" << "zdobyl " << skoczkowie[i].punkty_k << "punktow w kontynentalnym\n" << "zdobyl " << skoczkowie[i].punkty_k << "punktow w swiatowym";
        sprawdz_kw(skoczkowie[i].punkty_k, skoczkowie[i].punkty_s);
    }

    return 0;
}
