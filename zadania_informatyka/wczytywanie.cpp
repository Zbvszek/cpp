#include <iostream>
#include <vector>
int main(){
int ilosc1=0,ilosc2=0,ilosc3=0;
string slowo1,slowo2,slowo3,flaga="stop";

std::vector<std::string> slowa;

std::cout<<"jakie 3 słowa chcesz zbierac (napisz je po spacji): ";
std::cin>>slowo1>>slowo2>>slowo3;

std::cout<<"napisz stop by zakonczyc wypisywanie";

while(flaga!="stop"){

    std::cin>>flaga;

    if(flaga == "stop") {
        break;
    }

    slowa.push_back(flaga);

    if(flaga == slowo1){
        ilosc1++;
    }
    else if(flaga == slowo2){
        ilosc2++;
    }
    else if(flaga == slowo3){
        ilosc3++;
    }

}

std::cout<<"uzyto "<<ilosc1<<" slowa "<<slowo1<<"uzyto "<<ilosc2<<" slowa "<<slowo2<<"uzyto "<<ilosc3<<" slowa "<<slowo3;

return 0;
    }