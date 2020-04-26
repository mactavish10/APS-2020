#include <bits/stdc++.h>
#include<cmath>
using namespace std;

// Complete the utopianTree function below.
int utopianTree(int n)
{
    int h=1, r=1;
    while(n>=h)
    {
        if(h%2==0)
        {
            r=r+1;
        }
        else
        {
            r=r*2;
        }
        h++;
    }
    return r;

}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = utopianTree(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

