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
    next_permutation(a,a+n);
    //this will give lexicographically next big permutation
    for(ll x:a){
        cout<<x<<" ";
    }
    cout<<"\n";
    //o/p->1 2 3 4 6 5
return 0;
}
