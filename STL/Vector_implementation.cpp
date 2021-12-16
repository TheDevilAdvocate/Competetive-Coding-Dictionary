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
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;
template <typename... T>
void read(T &...args) {
((cin >> args), ...);
}
/*****READ CONTAINER****/
template <typename T>
void readContainer(T &t) {
for (auto &e : t) {
read(e);
}
}
/******PRINT CONTAINER******/
template <typename... T>
void write(string delimiter, T &&...args) {
((cout << args << delimiter), ...);
}
template <typename T>
void writeContainer(string delimiter, T &t) {
for (const auto &e : t) {
write(delimiter, e);
}
write("\n");
}
/******DEBUGGER******/
#define deb(...) logger(#__VA_ARGS__,__VA_ARGS__)
template<typename ...Args>
void logger(string vars, Args&&... values) {
cout << vars << " = ";
string delim = "";
(..., (cout << delim << values, delim= ", "));
}
/*--------------------------------------------------*/
bool compare(pair<string,pair<ll,ll>> c1,pair<string,pair<ll,ll>> c2){
    ll d1 = c1.second.first*c1.second.first + c1.second.second*c1.second.second;
    ll d2 = c2.second.first*c2.second.first + c2.second.second*c2.second.second;
    
    if(d1 ==  d2){
        return c1.first < c2.first;
    }
    return d1 < d2;
}
int main()
{
fastread();
    ll n;
    cin>>n;
    vector<pair<string,pair<ll,ll>>> v;
    loop(i,n){
        ll x,y;
        string s;
        cin>>s;
        cin.ignore();
        cin>>x>>y;
        v.pb(make_pair(s,make_pair(x,y)));
    }

    for(auto p : v){
        cout<<p.first<<" "<<p.second.first<<","<<p.second.second<<endl;
    }

return 0;
}
