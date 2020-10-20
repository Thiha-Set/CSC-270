#include <iostream>
#include <string>

//Base class
class Vehicle{
    public:
        std::string brand = "Ferrari";

        void honk(){
            std::cout << "Tuut, tuut! \n";
        }
};

//Derived class
class FormulaOne: public Vehicle{
    public:
        std::string model = "SF90";
};

class SUV: public Vehicle{
  public:
    std::string mode = "4WD";  
};
int main(){
    FormulaOne myCar;
    myCar.honk();

    std::cout << myCar.brand +" " + myCar.model;
}