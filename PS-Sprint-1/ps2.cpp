
// 2. **Checking for Prime Numbers**
//    **Difficulty**: Easy
//    **Topics**: Basic Programming, Number Theory
//    **Description**: Write a program to determine if a number is prime.
//    **Example**:
//    Input: `number = 7`
//    Output: `Prime`
//    Explanation: 7 has no divisors other than 1 and itself, so it is a prime number.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    int flag = false;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = true;
        }
    }
    if (flag)
    {
        cout << num <<" " << "is not prime" << endl;
    }
    else
    {
        cout << num <<" "<< "is prime " << endl;
    }
}