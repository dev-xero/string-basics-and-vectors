#include <iostream>
#include <string>

using namespace std;

void read_strings() {
    string word;

    while (cin >> word) {
        cout << word << endl;
    }
}

int main() {
    string text = "Nice string";
    string copy_string = string(10, 'H');
    string catenated_string = string()
        .append("nice ").append("catenated ").append("string");

    cout << text << endl;
    cout << "some copy string: " << copy_string;
    cout << " of length " << copy_string.size() << endl;
    cout << catenated_string << endl;

    return 0;
}