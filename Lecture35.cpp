#include <iostream>
#include <stack>
#include <queue>
#include <map>
#include <list>
using namespace std;
int main()
{
    stack<int> a;
    queue<int> b;
    a.push(5);
    a.push(6);
    a.push(8);
    cout << a.top() << endl;
    a.pop();
    cout << a.top() << endl;
    if (a.empty() == 0)
    {
        cout << "the stack is currently not empty" << endl;
    }
    else
    {
        cout << "The stack is empty";
    }
    a.pop();
    a.pop();
    if (a.empty() == 0)
    {
        cout << "the stack is currently not empty";
    }
    else
    {
        cout << "The stack is empty" << endl;
    }

    b.push(7);
    b.push(8);
    b.push(10);
    cout << b.front() << endl;
    a.pop();

    // hash map
    map<string, int> hash;
    hash["rohit"] = 1;
    hash["programming"] = 2;
    hash["monalisha"] = 3;

    for (auto j = hash.begin(); j != hash.end(); j++)
    {
        cout << "They key will be " << j->first << " and the value of the key will be " << j->second << endl;
    }

    // list
    list<int> c;
    c.push_back(4);
    c.push_front(3);
    c.push_back(1);
    c.push_front(2);

    c.pop_back();
    c.pop_front();
    c.sort();

    for (auto i = c.begin(); i != c.end(); i++)
    {
        cout << *i << endl;
    }
}