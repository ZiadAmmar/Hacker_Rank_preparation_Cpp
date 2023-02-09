/*
Hacker rank day 1 - one weak preperation
Mock test 1 
find the median of an odd element array
time to complete: 10 min
time completed in 6 min
*/
#include <bits/stdc++.h>

using namespace std;

// find median function
int findMedian(vector<int> arr){
    //sort the vector
    sort(arr.begin(), arr.end());
    //index num of the median 
    int index = (arr.size() - 1) / 2;
    //median
    int median = arr[index];
    return median;
}

int main(){

    //test arr
    vector<int> arr{5,9,1,3,7};
    cout<<findMedian(arr)<<endl;
    return 0;
}