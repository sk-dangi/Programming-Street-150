// 9. **Summing Digits of a Number**  
//    **Difficulty**: Easy  
//    **Topics**: Basic Programming, Mathematical Computations  
//    **Description**: Write a program to calculate the sum of digits of a number.  
//    **Example**:  
//    Input: `number = 1234`  
//    Output: `10`  
//    Explanation: The sum of the digits 1 + 2 + 3 + 4 = 10. 

#include <iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter the num:";
    cin>>num;
    while (num>0)
    {
        int r= num %10;
        sum +=r;
        num /=10;
    }
    cout<<sum;
    
}