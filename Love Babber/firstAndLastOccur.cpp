#include <iostream>
using namespace std;

int firstocc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastocc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int data[8] = {1, 2, 3, 3, 3, 3, 3, 4};

    int result = firstocc(data, 8, 3); // << endl;
    cout << "The first occ of 3 at index: " << result << endl;
    cout << "The last occ of 3 at index: " << lastocc(data, 8, 3) << endl;

    // Total number of occurence of key:---

    int totalnumocc = (lastocc(data, 8, 3) - firstocc(data, 8, 3)) + 1;
    cout << "Total Number of occerence of 3 is: " << totalnumocc << endl;
    return 0;
}