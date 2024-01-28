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


void bubbleSort(vec &arr){
 for(ll i=0;i<arr.size();i++){
    for(ll j=0;j<arr.size()-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
            //print(arr);
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
    bubbleSort(arr);
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
