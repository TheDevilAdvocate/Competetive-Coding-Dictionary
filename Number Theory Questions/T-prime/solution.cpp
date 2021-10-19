#include <bits/stdc++.h>
#define ll unsigned long long int
#define ull unsigned long long int
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define pb push_back
#define pf push_front
#define loop(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
using namespace std;
//Code given by-> Akshay Pratap Singh
void prime_sieve(ll* sieve,ll* maxrange){
    //mark all numbers as prime (odd numbers as prime)
    for(ll i=3 ;i< *maxrange ;i=i+2){
        sieve[i]=1;
    }
    //now we know all even numbers are not prime
    //jumping over all odd numbers->
    for(ll i=3;i< *maxrange ;i=i+2){
        //if current number is not marked(therefore prime)
        if(sieve[i]==1){
            //mark all the multiples of i as not prime
            //optimising the approach by starting from i*i and not 2*i
            for(ll j=i*i ; j< *maxrange ; j=j+i){
                sieve[j]=0;
            }
        }
    }
    //handling special cases
    sieve[0]=sieve[1]=0;
    sieve[2]=1;
    //TC->o(nloglogn) which is roughly linear
}
//Code given by-> Akshay Pratap Singh

int main(){
    fastread();
    ll mr=1000000;
    //Very Important to avoid stack overflow
    //use static
    static ll sieve[1000000]={0}; 
    prime_sieve(sieve,&mr);
    ll t;
    cin>>t;
    loop(i,t){
    //cout<<"CALLED"<<endl;
    ll x;
    cin>>x;
    ll temp=sqrt(x);
    if(temp*temp == x){
        if(sieve[temp] == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
}

return 0;
}
//Code given by-> Akshay Pratap Singh
