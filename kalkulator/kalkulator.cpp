#include <iostream>

int dodawanie(int num1,int num2){
    return num1+num2;
}
int odejmowanie(int num1,int num2){
    return num1 - num2;
}
double dzielenie(double num1,double num2){
    if(num1 <0 || num2<0){
        return -1;
    }
    else{
        return num1/num2;
    }

}
int mnozenie(int num1,int num2){
    return num1*num2;
}


int main() {
    int num1, num2;
    char thing;

    std::cin >> num1 >> thing >> num2;

    switch (thing){
        default:
            std::cout<< "podano zly znacznik";
            break;
        case '+':
            std::cout<< dodawanie(num1,num2);
            break;
        case '-':
            std::cout<< odejmowanie(num1,num2);
            break;
        case '/':
            std::cout<< dzielenie(num1,num2);
            break;
        case '*':
            std::cout<< mnozenie(num1,num2);
            break;
    }
  return 0;
}
