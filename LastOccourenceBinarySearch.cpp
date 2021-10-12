//Array Must be sorted
ll LastOccourence(ll *a, ll size, ll key)
{
    ll sp = 0;
    ll ep = size - 1;
    ll ans = -1;
    while (sp <= ep)
    {
        //**IMPORTANT**
        ll mid=(sp+ep)/2; 
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
