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

string first_word_upper(string the_string)
{
    for (
        decltype(the_string.size()) index = 0;
        index != the_string.size() && !isspace(the_string[index]);
        index++)
    {
        the_string[index] = toupper(the_string[index]);
    }

    return the_string;
}

string while_first_word_upper(string the_string)
{
    int i = 0;

    while (!isspace(the_string[i]))
    {
        the_string[i] = toupper(the_string[i]);
        i++;
    }

    return the_string;
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

    string some_string_to_capitalize = capitalize("this is capitalized now.");
    cout << some_string_to_capitalize << endl;

    string capitalized_first_word = first_word_upper("the first word is capitalized");
    cout << capitalized_first_word << endl;

    string another_capitalized_first_word = while_first_word_upper("this is also capitalized.");
    cout << another_capitalized_first_word << endl;

    return 0;
}