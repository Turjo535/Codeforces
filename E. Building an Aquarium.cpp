#include <bits/stdc++.h>

using namespace std;
#define ll long long
long long sumfunc(ll n,ll x,ll arr[]){
    ll s=0;
    for(ll i=0;i<n;i++){
            
            
        if(x>arr[i]){
                s+=x-arr[i];
                
            }
    }
    return s;

}
void solve(ll n,ll k,ll arr[]){
    long long l=1,r=9e9;
    while(l<=r){
        ll mid=l+((r-l)/2);
        long long sum=sumfunc(n,mid,arr);
        if(sum==k){
            r=mid;
            break;
        }
        else if(sum<k)l=mid+1;
        else r=mid-1;


    }
    cout<<r<<endl;
    /*if(sumfunc(n,l+1,arr)<=k)cout<<l+1<<endl;
    else if(sumfunc(n,l,arr)<=k)
    else*/
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        /*if(n==1){
            cout<<k+arr[0]<<endl;
            continue;
        }*/
        solve(n,k,arr);
        
    }
return 0;
}