#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define pb push_back
#define pf push_front
#define eb emplace_back
#define loop(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
using namespace std;
int main()
{
fastread();
    char s[100] = "Akshay Pratap Singh";
    char* ptr=strtok(s," ");
    cout<<ptr<<"\n";

    while(ptr != NULL){
        ptr=strtok(NULL," ");
        cout<<ptr<<"\n";
    }
//OUTPUT
/*
Akshay
Pratap
Singh
*/
return 0;
}
