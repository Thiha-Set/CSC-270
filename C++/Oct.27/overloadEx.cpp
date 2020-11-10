#include <iostream>
class printData{
    public:
     void print(int i){
        std::cout <<"Printing int: "<< i << std::endl;
    }
    void print(double f){
        std::cout << "Printing float: "<< f << std::endl;
    }
    void print(char* c){
        std::cout << "Printing characters: "<< c <<std::endl;
    }
};

int main(){
    printData pd;
    printData* printPtr = &pd;
    

    
    //pd.print(3);
    printPtr->print(3);

    //pd.print(3.1415926);
    printPtr->print(3.1415926);

    //pd.print("Hi C++");
    printPtr->print("Hi C++");

    
}