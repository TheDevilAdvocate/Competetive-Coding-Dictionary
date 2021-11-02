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
bool length_compare(string a,string b){
    if(a.length() == b.length()){
        return a<b;
    }
    return a.length() < b.length();
}
int main()
{
fastread();
    //Implementing array of strings
    ll n;
    cin>>n;
    cin.ignore();
    string a[n];
    loop(i,n){
        getline(cin,a[i]);
    }
    cout<<"THE INPUT IS:\n";
    for(string s:a){
        cout<<s<<" , ";
    }
    cout<<endl;

    //sorting the strings lexicographically
    sort(a,a+n);
    cout<<"After sorting lexicographically:\n";
    for(string s:a){
        cout<<s<<" , ";
    }
    cout<<endl;
    cout<<"In decreasing order of string length:\n";
    //sorting according to string length
    //using custom comparator
    sort(a,a+n,length_compare);
    for(string s:a){
        cout<<s<<" , ";
    }
return 0;
}
//INPUT
/*
3
pineapple
apple
banana
*/
//OUTPUT
/*
THE INPUT IS:
pineapple , apple , banana , 
After sorting lexicographically:
apple , banana , pineapple , 
In decreasing order of string length:
apple , banana , pineapple ,
*/
