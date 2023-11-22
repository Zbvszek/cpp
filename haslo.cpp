#include <cstdio>


int main() {
	//Marcin Cieśla
	//Logowanie
	//Logowanie,podaj haslo moze zgadniesz albo przeczytasz
    char password='superhaslomega2011plMarekKiedyKorki';
    char guess;
    
    while(1){
        
    scanf("%c",&guess);
    
    if(guess != password){
        printf("podaleś złe hasło");
        
    }
    else{
        
        printf("zapraszam do środka");
        break;
        
    }
    
}
}
    
