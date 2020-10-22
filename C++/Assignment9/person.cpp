#include <iostream>
#include <string>
#include "person.h"
#include <sstream>

//person's parameterized constructor
Person::Person(std::string personName, int idNum){
    this->name = personName;
    this-> id = idNum;
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
Professor::Professor(std::string rankName, int numPublications, std::string theirName, int idNum):Person(theirName,idNum){
    this->rank = rankName;
    this -> publications = numPublications;
    this->name = theirName;
    this->id = idNum;
}   
//getters
//getRank() returns the rank of the professor
std::string Professor::getRank() const{
    return this->rank;
}
//helper method toString() --> converts int num to String
std::string Professor::toString(int num) const{
    //CREDIT: https://www.bitdegree.org/learn/string-to-int-c-plus-plus
    //Use stringstream to convert int to string
    std::string intString;
    std::stringstream stream;
    stream << num;
    intString = stream.str();
    return intString;
}
//getPublications() returns the number of publications a professor has
int Professor::getPublications() const{
    return this->publications;
}

//getData() formats the data into a readable format
std::string Professor::getData() const{
    //call the toString helper method to convert int member values to string
    std::string id_string = toString(this->getID());
    std::string publication_string = toString(this->getPublications());

    return this->getRank() +" professor "+this->getName()+" (id "+id_string+") has "+publication_string+" publications";
}

//=======================================================================================================
//write method(s) and constructor(s) for Student class
//parameterized constructor
Student::Student(std::string majorName, std::string minorName, std::string theirName, int idNum):Person(theirName,idNum){
    this->major = majorName;
    this->minor = minorName;
    this->name = theirName;
    this->id = idNum;
}

//getters
//getMajor() --> returns the major of the respective student
std::string Student::getMajor() const{
    return this->major;
}

//getMinor() --> returns the minor of the respective student
std::string Student::getMinor() const{
    return this->minor;
}

//helper method toString() --> converts int num to String
std::string Student::toString(int num) const{
    //CREDIT: https://www.bitdegree.org/learn/string-to-int-c-plus-plus
    //Use stringstream to convert int to string
    std::string intString;
    std::stringstream stream;
    stream << num;
    intString = stream.str();
    return intString;
}

//getData() --> formats the data into a readable format
std::string Student::getData() const{
    //call the toString helper method to convert int member values to string
    std::string id_string = toString(this->getID());

    //check if minor is none
    if(this->getMinor()=="none")
        return this->getMajor()+" major "+this->getName()+" (id "+id_string+")";
    else
        return this->getMajor()+" major "+this->getName()+" (id "+id_string+") minors in "+this->getMinor();
    
}