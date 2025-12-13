// 11. **Finding the Least Common Multiple (LCM)**
//     **Difficulty**: Easy
//     **Topics**: Basic Programming, Number Theory
//     **Description**: Write a program to find the LCM of two numbers.
//     **Example**:
//     Input: `a = 12, b = 15`
//     Output: `60`
//     Explanation: The LCM of 12 and 15 is 60.

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int a, b;
    cout << "Enter two number:";
    cin >> a >> b;

    int lcm = (a * b) / gcd(a, b);
    cout << lcm;
    // while (b != 0)
    // {
    //     int temp = b;
    //     b = a%b;
    //     a = temp;
    // }
}