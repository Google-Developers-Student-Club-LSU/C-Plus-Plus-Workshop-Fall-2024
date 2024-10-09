#include <iostream>
#include <string>

// Class declaration
class student
{
public: // instead of using public keyword, everything that's public needs to be under here
    int age;
    double gpa;

    // Constructor with member initializer list
    student() : age(0), gpa(0.0)
    {
        std::cout << "Default constructor called.\n";
    }
    student(int age, double mean)
    {
        this->age = age;
        this->gpa = mean;
        std::cout << "Parameterized constructor called.\n";
    }
    // special Constructor for when a student object is copied
    student(const student &other) : age(other.age), gpa(other.gpa)
    {
        std::cout << "Copy constructor called.\n";
    }

    // Destructor is called when object is deleted
    ~student()
    {
        std::cout << "Destructor called.\n";
    }

private:
    std::string secretInfo = "Hidden Data";
};

int main()
{
    // Creating an object using default constructor
    student obj1;

    // Creating an object using parameterized constructor
    student obj2(25, 4.5);

    // Copying obj2 into obj3
    student obj3 = obj2;

    // Using the heap to create an object
    student *objHeap = new student(30, 7.2);

    // Deleting the object in the heap whhich will call the deconstructor
    delete objHeap;

    return 0;
}
