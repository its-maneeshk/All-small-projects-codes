#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream file("demo.txt", ios::out);  // Specify output mode
    if (file.is_open()) {
        file << "Ram is a good boy." << endl;
    } else {
        cout << "Unable to create file" << endl;
    }

    file.close();
    return 0;

    fstream
}
