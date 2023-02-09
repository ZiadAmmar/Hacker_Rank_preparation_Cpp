#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(vector<int> arr) {
    // number of positives, negatives, and zeros
    int nPos = 0;
    int nNeg = 0;
    int nZero = 0;
    // iterate through the vector and sum the new numbers
    for (int i : arr){
        if(i > 0){
            nPos++;
        } else if (i < 0) {
            nNeg++;
        } else {
            nZero++;
        }
   
    
    }
    //calculate the ratios
    float pos = float(nPos) / arr.size();
    float neg = float(nNeg) / arr.size();
    float zer = float(nZero) / arr.size();
    //print the ratios with a fixed percision of 6 decimal
    cout<<fixed<<setprecision(6);
    cout<<pos<<endl<<neg<<endl<<zer<<endl;

}

int main()
{
    vector <int> arr{0, -2, -4, 6,8, 10};
    plusMinus(arr);
    return 0;
}