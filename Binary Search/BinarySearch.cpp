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
