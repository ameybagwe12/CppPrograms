#include<iostream>

using namespace std;
typedef unsigned int uint; // Define a new type name 'uint' for 'unsigned int'
typedef std::string str; // Define a new type name 'str' for 'std::string'

using text_t = std::string; // Define a new type name 'text_t' for 'std::string'
using number_t = unsigned int; // Define a new type name 'number_t' for 'unsigned int'
int main() {
    uint a = 10; // Declare an unsigned integer variable 'a' and initialize it to 10
    str s = "Hello, World!"; // Declare a string variable 's' and initialize it to "Hello, World!"
    
    text_t text = "This is a text"; // Declare a variable 'text' of type 'text_t' and initialize it
    number_t num = 42; // Declare a variable 'num' of type 'number

    cout << "Text: " << text << endl; // Print the value of 'text'
    cout << "Number: " << num << endl; // Print the value of 'num
    cout << "Value of a: " << a << endl; // Print the value of 'a'
    cout << "Value of s: " << s << endl; // Print the value of 's'
    return 0;
}

// USE using to create type aliases for existing types, making the code more readable and easier to maintain.
// USE typedef to create type aliases for existing types, providing a way to define new names for existing types.