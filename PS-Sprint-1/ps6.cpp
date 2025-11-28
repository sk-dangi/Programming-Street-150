// 6. **Identifying Palindromes**  
//    **Difficulty**: Easy  
//    **Topics**: Basic Programming, String Manipulation  
//    **Description**: Write a program to check if a string or number is a palindrome.  
//    **Example**:  
//    Input: `string = "radar"`  
//    Output: `Palindrome`  
//    Explanation: "radar" reads the same backward as forward.  


#include <bits/stdc++.h>
using namespace std;

int main(){
    string str, rev_str;
    cout <<"Enter your String:";
    cin>>str;

    rev_str = str;
    reverse(rev_str.begin(),rev_str.end());
    if (rev_str == str){
        cout<<"Palindrom string";
    }
    else{
        cout<<"NOT Palidrom";
    }
    

    



}