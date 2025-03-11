#include <iostream>

int main(){

    std::cout << "Hello! Pick an item that you want: \n\n";
    std::cout << "List out the prices for each item using the list command\n\n";
    int itemChoice {};
    std::cin >> itemChoice;

    

    do{
        std::cout << "1. Cola 2. Pepsi 3. Chips\n";
    }while(itemChoice <= 0 && itemChoice > 10);

}