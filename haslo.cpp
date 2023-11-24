#include <iostream>
#include <string>

int main() {
  std::string password = "superhaslomega2011plMarekKiedyKorki";
  std::string guess;

  while(1){
      std::cout << "Podaj hasło: ";
      std::cin >> guess;

      if(password != guess){
          std::cout << "Podałeś złe hasło\n";
      }
      else{
          std::cout << "Zapraszam do środka\n";
          break;
      }
  }

  return 0;
}
