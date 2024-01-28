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

void insertionSort(vec &arr,ll n){
   for(ll i=1;i<n;i++){
     ll temp = arr[i];
     for(ll j=i-1;j>=0;j--){
        if(temp<arr[j]){
            swap(arr[j+1],arr[j]);
        }
        else{
            break;
        }
     }
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
    insertionSort(arr,n);
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
