/*
Counting Sort 1 - Hacker Rank
Input: int array of size n
Output: int frequancy array of size 100
NOTE: The problem on Hacker Rank restricted the size to be 100 
BUT in this code I made a more general solution for any size or max element
*/

#include <bits/stdc++.h>

using namespace std;

//Counting sort function
vector<int> countingSort(vector<int> arr){
    //create frequancy array of zeros with the (maximum value + 1) as the size
    vector<int> freq(*max_element(arr.begin(),arr.end()) + 1, 0);
    //loop through the arr and generate the actual frequancy array
    for(int i =0; i < arr.size(); i++){
        freq[arr[i]]++;
    }

    return freq;
}
int main(){

    //test arr
    vector<int> arr{1,1,3,2,1};

    vector<int> freq = countingSort(arr);
    
    //print the final frequancy array
    for(int i : freq){
        cout<<i<<" ";
    }



    return 0;
}