// 32. **Finding the Median of an Array**  
//     **Difficulty**: Medium  
//     **Topics**: Arrays, Sorting  
//     **Description**: Write a program to find the median of an array of numbers.  
//     **Example**:  
//     Input: `array = [3, 1, 2, 4, 5]`  
//     Output: `3`  
//     Explanation: The median of the sorted array [1, 2, 3, 4, 5] is 3.  

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {3,1,2,4,5};
    sort(v.begin(),v.end());//1 2 3 4 5 

    int length = v.size();
    
    //1 2 3 4 5 6  6/2 = 3 
    if (length % 2 ==0){
        int mid = length/2;
        float median = (v[mid] + v[mid-1])/2.0;
        cout<<median;
    }else{
        int mid = (length+1)/2;
        float median = v[mid-1];
        cout<<median;

    }
        

    } 
   



