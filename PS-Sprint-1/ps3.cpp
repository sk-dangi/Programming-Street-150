// 3. **Validating Leap Years**
//    **Difficulty**: Easy
//    **Topics**: Basic Programming, Date Handling
//    **Description**: Write a program to check if a given year is a leap year.
//    **Example**:
//    Input: `year = 2020`
//    Output: `Leap Year`
//    Explanation: 2020 is divisible by 4 but not by 100, or it is divisible by 400, so it is a leap year.

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter the year:";
    cin >> year;
    if (year % 4 == 0 || year % 400 == 0 && year % 100 != 0)
    {
        cout << year << " " << "is leap year." << endl;
    }
    else
    {
        cout << year << " " << "is not leap year." << endl;
    }
}