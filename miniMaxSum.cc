#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> arr{256741038, 623958417, 467905213, 714532089, 938071625};
    vector <long int> sum;
    long int sumNum = 0;
    //iterate through the vector
    for(int i : arr){
        //Summing all elements of the vector - NOTE: accumulate has a small pitfall that is the initial value that you pass.
        //To solve this, initialize with 0L for long, 0LL for long long
        sumNum = accumulate(arr.begin(), arr.end(), 0L);
        //substracting one element of the vector from the sum number
        sumNum -= i;
        //pushing the sum into a new vector called sum
        sum.push_back(sumNum);
        //resetting the sum num to 0
        sumNum = 0;
    }
    /*NOTE: use * with max_element and min_element
    max_element and min_element return an iterator pointing to the element
    To access the actual value of the element, you need to derefrence the iterator with *
    */
    auto maxNum =  *max_element(sum.begin(),sum.end());
    auto minNum = *min_element(sum.begin(),sum.end());
    cout << minNum << " " <<maxNum <<endl;
    return 0;
}