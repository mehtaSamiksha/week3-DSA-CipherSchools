#include <iostream>
using namespace std;

int main()
{
    // Selection sort
    int a[10];

    // Read 10 elements
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    // Perform selection sort
    for (int i = 0; i < 10; i++)
    {
        int least = i;
        for (int j = i + 1; j < 10; j++)
        {
            if (a[j] < a[least])
            {
                least = j;
            }
        }
        // Swap the found minimum element with the element at index i
        int temp = a[i];
        a[i] = a[least];
        a[least] = temp;
    }

    // Print the sorted array
    cout << "The elements are sorted: ";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}