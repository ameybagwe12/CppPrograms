#include<iostream>
#include<string>
int main () {
    std::string str1 = "Hello, ";
    std::string str2 = "World!";

    std::string name;
    std::cout << "Enter your name: ";
    getline(std::cin >> std::ws, name); // read user input and store it in the variable name
    
    if(name.empty()) { // check if the string name is empty
        std::cout << "You did not enter a name." << std::endl;
    } else {
        std::cout << "You entered: " << name << std::endl; // print the user's name
    }
    name.clear(); // clear the contents of the string name
    std::cout << name.length() << std::endl; // print the length of the string name

    name.append(" is a great programmer!"); // append a string to the string name
    std::cout << name << std::endl; // print the updated string name

    name.at(0) = 'A'; // change the first character of the string name to 'A'
    std::cout << name << std::endl; // print the modified string name
    
    name.insert(0, "Hello! "); // insert a string at the beginning of the string name
    std::cout << name << std::endl; // print the updated string name

    // find the position of the substring "programmer" in the string name
    std::cout << name.find("programmer") << std::endl; // print the string name

    name.erase(0, 7); // erase the first 7 characters of the string name
    std::cout << name << std::endl; // print the updated string name
    return 0;

}