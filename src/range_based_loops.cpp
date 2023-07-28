#include <iostream>
#include <string>

using namespace std;

string upper(string the_string)
{
    string upper_case_string = the_string;

    for (char &ch : upper_case_string) // a reference to the string's chars
    {
        ch = toupper(ch);
    }

    return upper_case_string;
}

string capitalize(string the_string)
{
    string capitalized_string = the_string;
    capitalized_string[0] = toupper(capitalized_string[0]);

    return capitalized_string;
}

int main()
{
    string iterable_string = "This string is iterable."; // white space is ignored
    string case_string = "some lower case string";
    decltype(iterable_string.size()) pnct_count = 0;

    for (char ch : iterable_string)
    {
        if (ispunct(ch))
        {
            pnct_count++;
        }
    }

    cout << "There are " << pnct_count;
    cout << " punctuation chars in the string: " << iterable_string << endl;
    cout << case_string << " in upper case is ";

    string upper_case_string = upper(case_string);
    cout << upper_case_string << endl;

    string some_string_to_capitalize = capitalize("this isn capitalized now.");
    cout << some_string_to_capitalize << endl;

    return 0;
}