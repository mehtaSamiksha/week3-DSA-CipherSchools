#include <iostream>
#include <string>
using namespace std;

// int main()
// {
// char a,s,h,u;

// cin>>a>>s>>h>>u;

// char name[1000];

// cout << "Enter your name : (Note: Enter # after the end of your name: )";

// int i = 0; // Initial value of i is 0

// while (1)   // here i is the previous input
// {
//     cin >> name[i];

//     if(name[i]=='#') break;
//     i++; // when the name is begin entered , the value of i is increased
// }

// // for(i=0;i<4;i++)  // I used a for loop which ran for i in [0,4]
// // {
// //     cin>>name[i];

// // }
// i = 0; // again need to change the value of i to 0 before running the second while loop
// cout << "The name you have just entered is " << endl;

// // for(i=0;i<4;i++)
// // {
// //     cout<<name[i];

// // }

// while (name[i] != '#') // we have again used i
// {
//     cout << name[i];
//     i++;
// }

//     string name; //Over here string is a new datatype and not a name so string is similar to int , float , double ....

//     cin>>name;

//    int i;
//    for(i=0;i<5;i++)
//    {
//     cout<<name[i]<<endl;

//    }
// }

int main()
{
    string a;
    string b;
    string c;

    // int a;
    // int b;
    // int c;

    // cin>>a;
    // Instead of using cin, you use something called a getline

    getline(cin, a);

    // getline is a function which is why you can see(),(cin , variable where you want to store the value of the line which is being taken as input )

    cout << "Your full name is: " << a << endl;

    // c=a+b;  // This is called string concatenaion // Or in simple terms string addition

    // cout<<"The combined word is: "<<c;

    // cout<<"The length of the combined name is "<<c.length();

    return 0;
}