#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define pb push_back
#define pf push_front
#define loop(i, n) for (ll i = 0; i < (n); i++)
#define FOR(i, a, b) for (ll i = (a); i <= (b); i++)
#define FORD(i, a, b) for (ll i = (a); i >= (b); i--)
using namespace std;
ll FirstOccourence(ll *a, ll size, ll key)
{
    ll sp = 0;
    ll ep = size - 1;
    ll ans = -1;
    while (sp <= ep)
    {
        //**IMPORTANT**
        ll mid = (sp + ep) / 2;
        if (a[mid] == key)
        {
            ans = mid;
            ep = mid - 1;
        }
        else if (a[mid] > key)
        {
            ep = mid - 1;
        }
        else if (a[mid] < key)
        {
            sp = mid + 1;
        }
    }
    return ans;
}

ll LastOccourence(ll *a, ll size, ll key)
{
    ll sp = 0;
    ll ep = size - 1;
    ll ans = -1;
    while (sp <= ep)
    {
        //**IMPORTANT**
        ll mid = (sp + ep) / 2;
        if (a[mid] == key)
        {
            ans = mid;
            sp = mid + 1;
        }
        else if (a[mid] > key)
        {
            ep = mid - 1;
        }
        else if (a[mid] < key)
        {
            sp = mid + 1;
        }
    }
    return ans;
}

int main()
{
    //fastread();
    ll arr[8] = {1, 2, 3, 4, 4, 4, 4, 5};
    ll key;
    ll size = 8;
    cin >> key;
    if (binary_search(arr, arr + size, key))
    {
        ll last = LastOccourence(arr, size, key);
        ll first = FirstOccourence(arr, size, key);
        cout << "Freq of Occourence: " << last - first + 1 << endl;
    }
    else{
        cout<<"ELEMENT DNE !"<<endl;
    }
    return 0;
}
