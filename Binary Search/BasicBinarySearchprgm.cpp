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
ll BinarySearch(ll *a, ll size, ll key){
    //sp->starting point
    ll sp=0; 
    //ep->ending point
    ll ep=size-1; 
    //mid element
    ll mid=(sp+ep)/2; 
    while(sp<=ep){
        if(key == a[mid]){
            return mid;
        }
        else if(key > a[mid]){
            sp=mid+1;
        }
        else if(key < a[mid]){
            ep=mid-1;
        }
    }
    return -1; //in case element is absent
}
int main()
{
//fastread();
    ll n;
    cin>>n;
    ll arr[n];
    cout<<"Enter the elements of array-\n";
    loop(i,n){cin>>arr[i];}
    cout<<"Enter the element you want to search for\n";
    ll key;
    cin>>key;
    ll index=BinarySearch(arr,n,key);
    if(index != -1){
        cout<<"The key is present at index: "<<index<<"\n";
    }
    else{
        cout<<"The element does not exist.\n";
    }

return 0;
}
