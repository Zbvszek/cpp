#include <iostream>
#include <vector>
#include <cstdlib>
int main() {
    std::vector<int>MyVector;
    for(int i =0; i<10;i++){
        MyVector.push_back(rand()%100+1);

    }
    std::cout<<MyVector.at(0);
    std::cout<<MyVector.size();


    return 0;
}
