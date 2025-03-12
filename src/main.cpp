#include <iostream>

int main(){

    std::cout << "Hello! Pick an item that you want: \n\n";
    std::cout << "List out the prices for each item using the list command\n\n";

    // made an unsigned int so we dont have to worry about breaking the loop in negatives
    unsigned int itemChoice {};


    while(itemChoice <= 0 || itemChoice > 10){

        std::cout << "1. Cola 2. Pepsi 3. Chips\n";
        std::cout << "4. Chicken 5. French fries 6. Ice cream\n";
        std::cout << "7. Rice 8. Strawberry 9. Jam\n";
        std::cout << "           10. Pineapple\n";

        std::cin >> itemChoice;

        if(itemChoice >= 4294967295){
            std::cout << "Do not enter numbers bigger than 4294967294. Restart the program.\n";
            break;
        }

    }

    std::string listCmd {};
    std::cin >> listCmd;

    if(listCmd == "list"){

        std::cout << "List of prices for all the items\n\n";
        
        std::cout << "Cola = 0,73\n";
        std::cout << "Pepsi = 0,71\n";
    }



}