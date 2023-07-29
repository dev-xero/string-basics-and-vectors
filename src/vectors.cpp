#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> watching = {"Jujutsu Kaisen", "Zom 100", "Mushoku Tensei"};
    int i = 1;

    for (string anime : watching)
    {
        cout << i << ". " << anime << endl;
        i++;
    }

    string firstVectItem = string("The item at index 0 is ").append(watching.at(0));
    cout << firstVectItem << endl;

    string vectSize = string("The vector's size is ").append(to_string(watching.size()));
    cout << vectSize << endl;

    return 0;
}