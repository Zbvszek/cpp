#include <iostream>


int main() {
	//Marcin Cieśla
	//Logowanie
	//Logowanie,podaj haslo moze zgadniesz albo przeczytasz
        std::string password = "dupa";
        std::string guess;

        while(1){
        std::cout << "Podaj haslo\n";
        std::cin >> guess;

        if(guess != password){
            std::cout<< "podales zle haslo\n";

        }
        else{
            std::cout<<"zapraszam do srodka\n";
            break;

        }
    
    }
    return 0;
}
    
