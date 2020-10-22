#include <string>

class Person{
    public:
        Person(std::string personName, int idNum);
        virtual std::string getData() const=0;
        std::string getName() const;
        int getID() const;
    private:
        std::string name;
        int id;
    
};

class Professor : public Person{
    public:
        Professor(std::string rankName, int numPublications, std::string theirName, int idNum);
        int getPublications() const;
        std::string getRank() const;
        std::string getData() const;
    private:
        std::string name;
        int id;
        std::string rank;
        int publications;
        std::string toString(int num) const;
};

class Student : public Person{
    public:
        Student(std::string majorName, std::string minorName, std::string theirName, int idNum);
        std::string getMajor() const;
        std::string getMinor() const;
        std::string getData() const;
    private:
        std::string name;
        int id;
        std::string major;
        std::string minor;
        std::string toString(int num) const;
};