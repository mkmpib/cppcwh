#include <iostream>
using namespace std;

int main()
{
    int range;
    cout << "Enter the range ";
    cin >> range;
    int i;
    int sum = 0;
    for (i = 1; i <= range; i++)
    {

        sum = sum + i;
    }

    cout << "Sum is "<<sum << endl;

    return 0;
}