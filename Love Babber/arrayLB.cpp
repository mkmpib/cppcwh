#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    cout << "printing the array:" << endl;

    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl
         << "printing Done" << endl;
}
int main()
{

    // Without using function
    int data[5] = {1, 3, 5, 6, 7};
    cout << "printing the array:" << endl;
    int n = 5;
    for (int i = 0; i < n; i++)
    {

        cout << data[i] << " ";
    }

    cout << endl
         << "printing Done" << endl;

    // Using the funtion
    printArray(data, 5);
    int ram[10] = {2};
    printArray(ram, 10);


    int ramsize =sizeof(ram)/sizeof(int);
    cout<<"The size of array is:"<<ramsize<<endl;


    // charcter array
    char ch[5]={'M','O','H','I','T'};
    cout<<ch[4]<<endl;

    for(char i=0;i<5;i++){

        cout<<ch[i];
    }



    cout<<endl<<"Everything is fine";
    return 0;
}