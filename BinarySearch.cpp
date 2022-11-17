#include <iostream>
using namespace std;

bool BinarySearch(int arr[], int size, int key)
{
    int start = 0, end = size-1;
    int mid = start + (end-start)/2;
    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return 1;
        }
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else 
            end = mid - 1; 
        mid = start + (end-start)/2;
    }
    return 0;

}

int main()
{
    int arr[20], size, key;

    cout << "Enter Array size : " << endl;
    cin >> size;
    cout << "Enter " << size << " elements : " <<endl;
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter No for Searching : ";
    cin >> key;

    // function calling
    bool Ans = BinarySearch(arr, size, key);
    if(Ans == 1)
        cout << "Element is found in array";
    else
        cout << "Not found element in array";
    return 0;
}