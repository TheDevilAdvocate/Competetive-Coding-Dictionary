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
    ll a[6]={1,2,3,4,5,6};
    ll n=sizeof(a)/sizeof(a[0]);
    rotate(a,a+2,a+n);
    //rotation in the manner of taking first 
    //element and putting at the end upto middle(here a+2)
    //rotate(start,specific point,end)
    //->initially-> 1 2 3 4 5 6
    //->2 3 4 5 6 1
    //->3 4 5 6 1 2 
    for(ll x:a){
        cout<<x<<" ";
    }
    cout<<"\n";
    //o/p->3 4 5 6 1 2
return 0;
}
