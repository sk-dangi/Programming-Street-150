
// 4. **Calculating Armstrong Numbers**  
//    **Difficulty**: Easy  
//    **Topics**: Basic Programming, Number Theory  
//    **Description**: Write a program to check if a number is an Armstrong number.  
//    **Example**:  
//    Input: `number = 153`  
//    Output: `Armstrong Number`  
//    Explanation: 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.  

#include <iostream>

using namespace std;

// this function give power of the num
int pow(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int main(){
    int num, digit =0 , OriginalNum, sum =0;
    cout<<"Enter the num:";
    cin>>num;

    OriginalNum = num;

    //digit count
    while( OriginalNum> 0){
        OriginalNum /= 10;
        digit++;

    }

    OriginalNum = num;
    
// sum of the power of the digit ** digit
    while (OriginalNum !=0){
        int r = OriginalNum % 10;
        sum += (int)pow(r,digit);
        OriginalNum /= 10;

    }
    if (sum == num) {
        cout<< num <<" "<< "is Armstrong number"<<endl;
    }
    else{
        cout<< num <<" "<<"is NOT Armstrong number"<<endl;
    }



}