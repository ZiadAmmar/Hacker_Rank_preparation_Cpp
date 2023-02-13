/*
Hacker rank - Lonely Integer
Input: array of integers with only one unique integer
Output: return the unique intger
*/
#include <bits/stdc++.h>

using namespace std;

int lonelyinteger(vector<int> a){
    int result;
     // iterate through the vector
    for(int i : a){
    //using count method to find if the element has a duplicate
    int c = count(a.begin(),a.end(), i);
    // return the element if c is bigger than i
    if (c == 1) result = i;
    }
    return result;
}

int main(){
   //test 
    vector<int> test{1,2,3,4,1,2,3};
   cout<<lonelyinteger(test)<<endl;

    return 0;
}