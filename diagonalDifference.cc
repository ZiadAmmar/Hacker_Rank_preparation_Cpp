/*
Diagonal difference - Hacker rank
Input: a square matrix (vector<vector<int>>)
output: the abolute value of the diagonal difference (int)*/
#include <bits/stdc++.h>

using namespace std;
//diagonalDifference function
int diagonalDiff(vector<vector<int>> arr){
    //find the sum of the primary diagonal [i][i]
    int sumPrimary = 0;
    //find the sum of the secondary diagonal 
    //[n-1][0]+[n-2][1]+[n-3][2]+.... -> [i][n-1-i]
    int sumSecondary = 0;
    for(int i = 0; i < arr.size(); i++){
        //find sum of secondary diagonal elements
        sumSecondary += arr[i][arr.size()-1-i];
        for(int j=0; j < arr[0].size(); j++){
            //find sum of primary diagonal elements
            if(j==i) sumPrimary += arr[i][j];
            
        }
    }
    //return absolute difference
    return abs(sumPrimary - sumSecondary);

}
int main(){
    //test (3x3) matrix
    vector<vector<int>> test{{1,2,3},
                             {4,5,6},
                             {9,8,9}};
    //print matrix
    for(vector<int> i: test){
        for(int j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    //test    
    cout<<"Absolute Difference = "<<diagonalDiff(test)<<endl;


    return 0;
}