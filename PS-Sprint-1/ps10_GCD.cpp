// 10. **Finding the Greatest Common Divisor (GCD)**
//     **Difficulty**: Easy
//     **Topics**: Basic Programming, Number Theory
//     **Description**: Write a program to find the GCD of two numbers.
//     **Example**:
//     Input: `a = 48, b = 18`
//     Output: `6`
//     Explanation: The GCD of 48 and 18 is 6.

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter The two num:";
    cin >> a >> b;

    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << a;
}
