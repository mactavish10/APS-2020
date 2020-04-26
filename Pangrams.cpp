#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
    int i , arr[26] , flag = 1;

    for( i = 0 ; i < s.size() ; i++ )
    {
        if(s[i]>=97 && s[i]<=122)
            s[i]-=32 ;
        arr[s[i]-65]+=1 ;
    }
    for(i=0;i<26;i++)
    {
        if(arr[i]<1){
            flag = 0 ;
            break ;
        }
    }
    if(flag)
        return "pangram" ;
    else
        return "not pangram" ;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
