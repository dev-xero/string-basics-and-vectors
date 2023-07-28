#include <string>
#include <iostream>

using namespace std;

void hex_string()
{
    string digits = "0123456789ABCDEF";
    string res;
    int ch;

    while (cin >> ch)
    {
        if (ch < digits.size())
        {
            res += digits[ch];
        }
    }

    cout << "Your hex string is: " << res << endl;
}

int main()
{
    cout << "Enter a series of numbers from 0 to 15 "
         << "separated by spaces. hit ENTER when finished: "
         << endl;

    hex_string();

    return 0;
}