#include <stdio.h>
#include <iostream>
#include <limits>

struct Student {
    int id;
    std::string name;
    float score;
};

int main() {
    struct Student s1 = {1, "Alice", 85.5};
    struct Student s2[2];

    printf("Student 1: %d, %s, %.2f\n", s1.id, s1.name, s1.score);

    for(int i = 0; i < sizeof(s2)/sizeof(s2[0]); i++) {
        std::cout << "Enter ID, NAME AND SCORE OF THE STUDENT " << i + 1 << ": ";
        std::cin >> s2[i].id >> s2[i].score;
        std::getline(std::cin >> std::ws, s2[i].name); // read the name with spaces
    }

    for(Student student : s2) {
        std::cout << "Student: " << student.id << ", " << student.name << ", " << student.score << std::endl;
    }

    return 0;
}