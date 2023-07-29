#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numVector = {1, 2, 3, 4, 5, 6, 7};

    for (auto &num : numVector)
    {
        num *= num;
    }

    for (auto num : numVector)
    {
        cout << num << endl;
    }

    return 0;
}