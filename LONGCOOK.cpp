#include <bits/stdc++.h>
#define lli long long int
#define MP make_pair
#define PB push_back
#define rep(i, a, b) for (lli i=a; i<b; i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	vector<lli> years{3,9,14,15,20,25,26,31,37,42,43,48,53,54,59,65,70,71,76,81,82,87,93,98,99,105,110,111,116,121,122,127,133,138,139,144,149,150,155,161,166,167,172,177,178,183,189,194,195,200,201,206,207,212,217,218,223,229,234,235,240,245,246,251,257,262,263,268,273,274,279,285,290,291,296,302,303,308,313,314,319,325,330,331,336,341,342,347,353,358,359,364,369,370,375,381,386,387,392,397,398} ;

	lli prefix_years[401] ;
	memset(prefix_years,0,sizeof(prefix_years)) ;
	int a = 0 ;
	vector<lli>::iterator it;
	rep(i,1,401)
	{
	    prefix_years[i] = a ;
	    it = find(years.begin(), years.end(), i);
        if(it!=years.end())
        {
            prefix_years[i] = prefix_years[i-1] + 1 ;
            a = prefix_years[i] ;
        }
	}
// 	cout<<prefix_years[400]<<endl ;
	lli t , m1 , m2 , y1 , y2 , intersections , upto_y1 , upto_y2 , div1 , div2;
	cin>>t ;
	lli prefix[] = {0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5,
    5, 6, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 10, 11, 11, 11, 11, 11, 12,
    12, 12, 12, 12, 13, 14, 14, 14, 14, 14, 15, 15, 15, 15, 15, 15, 16, 16, 16, 16,
    16, 17, 18, 18, 18, 18, 18, 19, 19, 19, 19, 19, 20, 21, 21, 21, 21, 21, 22, 22,
    22, 22, 22, 22, 23, 23, 23, 23, 23, 24, 25, 25, 25, 25, 25, 25, 26, 26, 26, 26,
    26, 27, 28, 28, 28, 28, 28, 29, 29, 29, 29, 29, 30, 31, 31, 31, 31, 31, 32, 32, 32,
    32, 32, 32, 33, 33, 33, 33, 33, 34, 35, 35, 35, 35, 35, 36, 36, 36, 36, 36, 37, 38,
    38, 38, 38, 38, 39, 39, 39, 39, 39, 39, 40, 40, 40, 40, 40, 41, 42, 42, 42, 42, 42,
    43, 43, 43, 43, 43, 44, 45, 45, 45, 45, 45, 46, 46, 46, 46, 46, 46, 47, 47, 47, 47,
    47, 48, 49, 49, 49, 49, 49, 50, 51, 51, 51, 51, 51, 52, 53, 53, 53, 53, 53, 54, 54,
    54, 54, 54, 55, 56, 56, 56, 56, 56, 57, 57, 57, 57, 57, 57, 58, 58, 58, 58, 58, 59,
    60, 60, 60, 60, 60, 61, 61, 61, 61, 61, 62, 63, 63, 63, 63, 63, 64, 64, 64, 64, 64,
    64, 65, 65, 65, 65, 65, 66, 67, 67, 67, 67, 67, 68, 68, 68, 68, 68, 69, 70, 70, 70,
    70, 70, 71, 71, 71, 71, 71, 71, 72, 72, 72, 72, 72, 73, 74, 74, 74, 74, 74, 75, 75,
    75, 75, 75, 75, 76, 77, 77, 77, 77, 77, 78, 78, 78, 78, 78, 79, 80, 80, 80, 80, 80,
    81, 81, 81, 81, 81, 81, 82, 82, 82, 82, 82, 83, 84, 84, 84, 84, 84, 85, 85, 85, 85,
    85, 86, 87, 87, 87, 87, 87, 88, 88, 88, 88, 88, 88, 89, 89, 89, 89, 89, 90, 91, 91,
    91, 91, 91, 92, 92, 92, 92, 92, 93, 94, 94, 94, 94, 94, 95, 95, 95, 95, 95, 95, 96,
    96, 96, 96, 96, 97, 98, 98, 98, 98, 98, 99, 99, 99, 99, 99, 100, 101, 101, 101} ;
	while(t--)
	{
	    cin>>m1>>y1 ;
	    cin>>m2>>y2 ;
	    if(m1>2)
	        y1+=1 ;
	    if(m2<2)
	        y2-=1 ;
	    div1 = y1/400 ;
	    div2 = y2/400 ;
	   // cout<<years.size()<<endl ;
	    upto_y1 = (years.size() * div1) + prefix[(y1%400)-1] ;
	    upto_y2 = (years.size() * div2) + prefix[(y2%400)] ;
	    intersections = upto_y2 - upto_y1 ;
	    cout<<intersections<<endl ;
	}
	
	return 0;
}