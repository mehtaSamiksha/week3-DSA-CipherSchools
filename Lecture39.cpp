#include <iostream>
using namespace std;

int main()
{
    // Bubble Sort
    int a[10];

    // Read 10 elements
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    // Perform Bubble Sort
    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                // Swap the elements
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
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