#include <stdio.h>

// This program demonstrates the use of namespaces in C++ to avoid naming conflicts.
namespace first {
    int x = 1;
}
namespace second {
    int x = 2;
}
using namespace std; // Using the standard namespace for convenience

int main() {
    using namespace first; // Using the first namespace
    printf("first::x = %d\n", x); // Accessing x from the
    printf("first::x = %d\n", first::x); // Accessing x from the first namespace
    printf("second::x = %d\n", second::x); // Accessing x from the second namespace

    return 0;
}