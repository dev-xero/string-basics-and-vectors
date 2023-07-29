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

    return 0;
}