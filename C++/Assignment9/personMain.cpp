#include <iostream>
#include <string>
#include "person.cpp"

void handle_record(int numRecords, int currentNumber){
    //have a temp variable output to hold the records
    std::string output = "";

    int idNum = 1;
    //As long as there are records to read
    while(currentNumber < numRecords){
        //await user input...
        std::cout <<"";
        char identifier;
        std::string name;
        
        //scan in the identifier (to see whether the person is a student or a professor)
        std::cin >> identifier >> name;
        //if the person is a professor
        if(identifier == 'p'||identifier == 'P'){
            //get the appropriate vars
            int publications;
            std::string rank;

            //scan in the values for the publications and roles
            std::cin >> publications >> rank;

            //create the Professor object
            Professor professorObj(rank, publications, name, idNum);

            //call the getData() method and put it in output
            output+= professorObj.getData()+"\n";

            //increment idNum
            idNum++;
        }
        //otherwise, it is a student
        else{
            //get the appropriate vars
            std::string major;
            std::string minor;

            //scan in the values for the majors and minors
            std::cin >> major >> minor;

            //create the Student object
            Student studentObj(major,minor,name,idNum);

            //call the getData() method and put it in output
            output+= studentObj.getData()+"\n";

            //increment idNum
            idNum++;
        }
        //increase the currentNumber
        currentNumber++;
    }
    //print out output
    std::cout << output;
}
//role_function() --> check the role of the person, and call the appropriate getData() method
//Pre-condition: line is a string in the specified format, roleDeterminant is the first char of line (and is either 'p' or 's')
/*
std::string role_function(char roleDeterminant,std::string line){
    //if the person in question is a professor (case-insensitive)
    if(roleDeterminant == 'p' || roleDeterminant == 'P'){
        //get the 
    }
}
*/
int main(){
    //prompt the user for number of records and preserve the input
    //in a variable
    int numRecords;
    std::cin >> numRecords;
    
    //delegate record scanning and formatting to a helper method
    handle_record(numRecords,0);
}