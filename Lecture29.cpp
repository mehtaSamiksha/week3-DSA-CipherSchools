#include <iostream>
using namespace std;

class Student
{
public:
    string name;

private:
    int attendence;
    float total_marks;

    void calculate_percentage()
    {
        cout << total_marks << "%";
    }
};

// your are making a software for a bank

class Bank_Client
{
private:
    int credit_number;
    int cvv;
    string user_name;
    string password;

public:
    string name;

    void set_credit_card_number(int credit_number)
    {
        this->credit_number = credit_number;
        cout << "The credit card number is " << this;
    }

    int get_creditcardnumber()
    {
        cout << "The credit card number is" << credit_number;
    }
    void set_allthestuffatonce(int credit_number, int name, int password)
    {
        this->credit_number = credit_number;
        this->name = name;
        this->password = password;
    }
};
int main()
{
    //     Student a, b, c;

    // // Student is the class
    // //and a,b,c are the object of that templete / class
    //     a.name = "Ashish";
    //     a.attendence = 90;
    //     a.total_marks = 69;

    //     a.calculate_percentage();

    Bank_Client a, b, c;

    a.name = "ashish";
    a.password = "Enjoyc++";
    a.cvv = 788;
    a.credit_number = 123456789;

    a.set_credit_card_number(123456789);
    a.get_creditcardnumber();
    // cout << "The password of ashish is " << a.password;
    // cout << a.cvv;
    // cout << a.credit_number;
    cout << "The address of this number is " << &a << endl;
    return 0;
}