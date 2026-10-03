#include <iostream>

class Human {
    public:
        std::string name;
        std::string gender;
        int age;
        void speak() {
            std::cout << "Hello, I am a human." << std::endl;
        }
        void introduce() {
            std::cout << "My name is " << name << ", I am a " << gender << ", and I am " << age << " years old." << std::endl;
        }
        void sleep() {
            std::cout << "I am sleeping." << std::endl;
        }
    Human() 
    {
        name = "Unknown";
        gender = "Unknown";
        age = 0;
    }
};


int main () {
    Human h;
    h.name = "John";
    h.gender = "Male";
    h.age = 30;
    h.introduce();
    h.speak();
    h.sleep();

    Human h2;
    h2.introduce();
    return 0;
}