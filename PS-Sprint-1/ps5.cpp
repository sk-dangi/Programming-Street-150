// 5. **Generating the Fibonacci Series**
//    **Difficulty**: Easy
//    **Topics**: Basic Programming, Sequences
//    **Description**: Write a program to generate the Fibonacci series up to a given number.
//    **Example**:
//    Input: `limit = 10`
//    Output: `[0, 1, 1, 2, 3, 5, 8]`
//    Explanation: The Fibonacci series up to 10 is generated as [0, 1, 1, 2, 3, 5, 8].

#include <iostream>
using namespace std;
int main()
{
    int num, first = 0, second = 1, next;
    cout << "Enter the number:";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
}