#include <iostream>
using namespace std;
int fib(int input)
{

    if (input == 0 || input == 1)
    {
        return 1;
    }

    int ans;
    ans = fib(input - 1) + fib(input - 2);
    return ans;
}
int main()
{
    int input;
    cout << "enter the number";
    cin >> input;
    cout << fib(input);
    return 0;
}