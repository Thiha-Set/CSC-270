#include <iostream>
#include <string>

int main(){
    std::string food = "Pizza";

    //creating pointer of food
    std::string *ptr = &food;

    //creating references to refer to the food variable
    std::string &meal = food;

    //output the food value
    std::cout << food << "\n";

    //Output the memory address of food with the pointer
    std::cout << &food << "\n";

    std::cout << ptr << "\n";

    std::cout << meal << "\n";

    return 0;
}