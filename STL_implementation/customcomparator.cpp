//This code snippet allows you to modify lowerbound function
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
bool compare(ll a,ll b){
    return a<=b; //number less than equal to my number
}
int main()
{
fastread();
//custom comparator
    ll a[10]={1,3,8,9,12,15,4,6,7,2};
    sort(a,a+10);
    ll size=sizeof(a)/sizeof(a[0]);
    // 1 2 3 4 6 7 8 9 12 15
    ll key;cin>>key;
    ll lb= lower_bound(a,a+size,key,compare)-a-1;
    cout<<"The index is: "<<lb<<" and the element is: "<<a[lb]<<endl;

return 0;
}
