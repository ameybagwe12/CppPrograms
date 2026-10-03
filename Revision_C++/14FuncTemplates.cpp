// A function template lets one function work with different data types.
#include <iostream>

template <typename T, typename U>
auto maximum(T first, U second) {
	return (first > second) ? first : second;
}
// auto return type deduction is used here to allow the function to return the appropriate type based on the input types.
int main() {
	std::cout << "Maximum of integers: " << maximum(10, 20) << '\n';
	std::cout << "Maximum of doubles: " << maximum(3.5, 2.1) << '\n';
    std::cout << "Maximum of mixed types: " << maximum(9.5, 3) << '\n';
	return 0;
}
