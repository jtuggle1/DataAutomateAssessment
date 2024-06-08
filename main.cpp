#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

string decode(const string& message_file) {
    string r;
    ifstream file(message_file);
    string str;
    while (getline(file, str)) {

        cout << "Read line: " << str << endl;
    }

    return r;
}

int main() {
    string decoded_message = decode("C:/Users/cppma/OneDrive/Desktop/test.txt");
    cout << "Decoded Message:\n" << decoded_message << endl;
    return 0;
}
