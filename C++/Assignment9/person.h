#include <string>

class Person{
    public:
        Person(std::string personName);
        virtual std::string getData() const=0;
        std::string getName() const;
        int getID() const;
    private:
        std::string name;
        int id;
    
};

class Professor : public Person{
    public:
        Professor(std::string rankName, int numPublications);
        int getPublications() const;
        std::string getRank() const;
        std::string getData() const;
    private:
        std::string rank;
        int publications;
};

class Student : public Person{
    public:
        Student(std::string majorName, std::string minorName);
        std::string getMajor() const;
        std::string getMinor() const;
        std::string getData() const;
    private:
        std::string major;
        std::string minor;
};