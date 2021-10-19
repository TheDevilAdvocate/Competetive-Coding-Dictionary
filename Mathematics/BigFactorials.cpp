#include <bits/stdc++.h>
//code->Akshay Pratap Singh
#define ll long long int
#define ull unsigned long long int
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define pb push_back
#define pf push_front
#define loop(i, n) for (ll i = 0; i < (n); i++)
#define FOR(i, a, b) for (ll i = (a); i <= (b); i++)
#define FORD(i, a, b) for (ll i = (a); i >= (b); i--)
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
using namespace std;

void multiplier(ll *arr, ll &n, ll no)
{
    ll carry = 0;
    for (ll i = 0; i < n; i++)
    {
        ll product = arr[i] * no + carry;
        arr[i]=product%10;
        carry = product / 10;
    }
    while (carry)
    {
        arr[n] = carry % 10;
        carry = carry / 10;
        n++;
    }
}
//code->Akshay Pratap Singh
void solve(ll number)
{
    ll *arr = new ll[1000];
    loop(i, 1000) { arr[i] = 0; }

    arr[0] = 1;
    ll n = 1; //only one place is occupied in array
    for (ll i = 2; i <=number; i++)
    {
        multiplier(arr, n, i);
    }
    //cout << "SIZE: " << n << endl;
    for (ll i = n - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
    delete[] arr;
    return;
}
//code->Akshay Pratap Singh
int main()
{
    fastread();
    ll n;
    cin >> n;
    solve(n);
    return 0;
}
