#include <iostream>
#include "Temperature_class.h"

//parameterized constructor
Temperature::Temperature(float degrees, int system){
    //get the system

    //if it is in celsisus
    if(system==Temperature::CELSIUS){
        //then the private var celsisus will just be the degrees
        Temperature::celsius = degrees;
    }
    //if it is in fahrenheit
    else if(system==Temperature::FAHRENHEIT){
        //then celsius is (degree -32 )* 5/9
        Temperature::celsius = (degrees - 32) * 5/9;
    }
    //otherwise system = KELVIN
    else
    {
        //celsius = degrees - 273.15;
        Temperature::celsius = degrees - 273.15;
    }
}

//write the getCelsius method
float Temperature::getCelsius() const{
    //just return the celsius
    return celsius;
}

//write the getFahrenheit method
float Temperature::getFahrenheit() const{
    //Fahrenheit = (celsius * 9/5) + 32
    return (celsius * 9/5) +32;
}

//write the getKelvin method
float Temperature::getKelvin() const{
    //Kelvin = celsius + 273.15
    return celsius + 273.15;
}

int main(){
    float temp = 68.0;

    std::cout << "Fahrenheit: " << temp <<std::endl;
    Temperature t(temp, Temperature::FAHRENHEIT);

    std::cout << "in Celsius: " << t.getCelsius() <<std::endl;
    std::cout << "in Kelvin : " << t.getKelvin() <<std::endl;
}