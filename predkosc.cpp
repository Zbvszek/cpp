#include <iostream>

int main(){
    //Autor Marcin Cieśla
    //użytkownik wybiera co chce liczyć itp pozdro
    int choice;
    double predkosc,droga,czas;
    std::string wybor_pentla;

    while(1){
        std::cout<<"Czy chcesz obliczyć predkosc,droge lub czas?:(t/n)";
        std::cin>>wybor_pentla;

        if(wybor_pentla == "n"){
            break;
        }

        std::cout<<"Co chcesz obliczyc\n1.Predkosc\n2.Droga\n3.Czas";
        std::cin>>choice;

        switch(choice){
            case 1:
                std::cout<<"Podaj droge i czas po spacji";
                std::cin>>droga>>czas;

                predkosc =droga/czas;

                std::cout<<predkosc;

                break;
            case 2:
                std::cout<<"Podaj predkosc i czas po spacji";
                std::cin>>predkosc>>czas;
                droga = predkosc/czas;
                std::cout<<droga;

                break;
            case 3:
                std::cout<<"Podaj predkosc i droge po spacji";
                std::cin>>predkosc>>droga;
                czas = droga/predkosc;
                std::cout<<czas;

                break;

        }
    }

return 0;
}
