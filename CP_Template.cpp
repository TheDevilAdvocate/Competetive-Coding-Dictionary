#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define pb push_back
#define pf push_front
#define loop(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)
using namespace std;
int main()
{
fastread();
int t;
cin>>t;
while(t--){


}
return 0;
}


/*ll BinarySearch(ll *a,ll size,ll key){
//Works only for sorted array //TC-> o(logn)
ll sp = 0;
ll ep = size-1;
while(sp<=ep){
ll mid =(sp+ep)/2;
if(a[mid] == key){return mid;}
else if(a[mid] < key){sp = mid+1;}
else if(a[mid] > key){ep = mid-1;}
}
return -1;
}

ll firstoccour(ll* a, ll size , ll key){
ll sp=0;
ll ans=-1;
ll ep=size-1;
while(sp<=ep){
ll mid=(sp+ep)/2;
if(a[mid] == key){
ans=mid;
ep=mid-1;
}
else if(a[mid]>key){ep=mid-1;}
else{sp=mid+1;}
}
return ans;
}

ll lastoccour(ll *a, ll size , ll key){
ll sp=0;
ll ans=-1;
ll ep=size-1;
while(sp<=ep){
ll mid=(sp+ep)/2;
if(a[mid] == key){
ans=mid;
sp=mid+1;
}
else if(a[mid]>key){ep=mid-1;}
else{sp=mid+1;}
}
return ans;
}*/
