#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // ofstream for creating a file and writing content
    // if the file already exists the content inside it will get truncated
    ofstream ofs ("My.txt", ios::trunc);
    ofs << "John" << endl;
    ofs << 25 << endl;
    ofs << "cs" << endl;

    ofs.close();
}