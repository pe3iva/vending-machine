#include <iostream>

int main(){

    std::cout << "Hello! Pick an item that you want: \n\n";
    std::cout << "List out the prices for each item using the list command\n\n";

    unsigned int itemChoice {};


    while(itemChoice <= 0 || itemChoice > 10){

        std::cout << "1. Cola 2. Pepsi 3. Chips\n";
        std::cout << "4. Chicken 5. French fries 6. Ice cream\n";
        std::cout << "7. Rice 8. Strawberry 9. Jam\n";
        std::cout << "           10. Pineapple\n";

        std::cin >> itemChoice;

        if(itemChoice >= 4294967295){
            break;
        }

        if(itemChoice <= 0 || itemChoice > 10){
            std::cout << "Wrong number entered. Must be 1 to 12.\n";
        }
    }

    /*  if the first if statement is met, it exits out of the for loop
    *   and then make another one
    *
    */



}