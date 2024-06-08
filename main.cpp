#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream>


using namespace std;

string decode(const string& message_file) {
    //declaring necessary data values
    string r;
    int linecount = 0;
    map<int, string> mymap;
    ifstream file(message_file);
    string str;
    int j = 1;


    //get the line count and place every key value pair into a map
    while (getline(file, str)) {
    istringstream iss(str);
    int n;
    string w;
    linecount++;
    iss>> n >> w;
    mymap[n] = w;
    }


    //adding to the string only the words at the end of each pyramid line
    for (int i = 1; i <= linecount;){
        r += mymap[i] + " ";
        j++;
        i = i + j;
    }

    return r;
}

int main() {
    string decoded_message = decode("C:/Users/cppma/OneDrive/Desktop/coding_qual_input.txt");
    cout << "Decoded Message:\n" << decoded_message << endl;
    return 0;
}
