#include <bits/stdc++.h>

using namespace std;

//time conversion from AM/PM format into 24h format
string timeConversion(string s) {
    //extract AM or PM in a string
    string t = s.substr(s.length() - 2, 2);
    //extract the hour in a string
    string h = s.substr(0, 2);

    if(t == "AM"){
        //erase the last two elements{AM}
        s.erase(s.length() - 2, 2);
        if(h == "12"){
            //replace the 12 to 00
            s.replace(0, 2, "00");
        }else{ cout<<s<<endl; }
    }else{
        //erase "PM"
        s.erase(s.length() - 2, 2);
        if(h =="12"){
        }else{
            //convert the hours from string to integer
            int h_num = stoi(h);
            //add 12 to hours
            h_num += 12;
            //convert num into string again
            h = to_string(h_num);
            //replace the hours
            s.replace(0, 2, h);
            
            
        }
    }
//return the new time format
return s;
}
int main()
{
    //example to test the function
    string s = "11:00:00PM";

    s = timeConversion(s);
    cout<<s<<endl;

    return 0;
}