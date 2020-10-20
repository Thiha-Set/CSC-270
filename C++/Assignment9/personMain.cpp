#include <iostream>
#include <string>
#include "person.h"

//person's parameterized constructor
Person::Person(std::string personName){
    this->name = personName;
}
//write the getter method for the name in Person
std::string Person::getName() const{
    return this->name;
}
//write the getter method for the ID in Person
int Person::getID() const{
    return this->id;
}
//==========================================
//write methods and constructor(s) for Professor class
//parameterized constructor
Professor::Professor(std::string rankName, int numPublications):Person(this->getName()){
    this->rank = rankName;
    this -> publications = numPublications;
}   
//getters
//getRank() returns the rank of the professor
std::string Professor::getRank() const{
    return this->rank;
}

//getPublications() returns the number of publications a professor has
int Professor::getPublications() const{
    return this->publications;
}

//getData() formats the data into a readable format
std::string Professor::getData() const{
    
}

