#include<bits/stdc++.h>
#define ll long long
#define vec vector<ll>
using namespace std;
void print(vec &v)
{
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}

void selectionSort(vec &arr,ll n){
    for(ll i=0;i<n-1;i++){
        ll minIndex = i;
        for(ll j=i+1;j<n;j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }


}
void solve()
{
    ll n;
    cin>>n;
    vec arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);
    print(arr);
}
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
