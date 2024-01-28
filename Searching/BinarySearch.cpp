#include<bits/stdc++.h>
#define ll long long
#define vec vector<ll>
using namespace std;
void print(vec &v)
{
    for(auto it:v)
    {
        cout<<it<<endl;
    }
}
bool BinarySearch(vec arr , ll key){
    ll s=0;
    ll e= arr.size()-1;
    ll mid = (s+e)/2;
    while(s<=e){
        if(arr[mid]==key){
            return true;
        }
        if(key>arr[mid]){
            s = mid+1;
        }
        else if(key<arr[mid]){
            e = mid-1;
        }
        mid = (s+e)/2;
    }

return false;
}

void solve()
{
    ll n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n; //size of the array
    vec arr(n);
    cout<<"Enter the array Elements"<<endl;
    for(ll i=0;i<n;i++){
        cin>>arr[i]; //Enter the array elements
    }
    ll key;
    cout<<"Enter the key :";
    cin>>key;
    if(BinarySearch(arr,key)){
        cout<<"Found"<<endl;
    }
    else cout<<"Not Found"<<endl;
}
int main()
{
    ll t=1;//No. of testcases
    cin>>t;
    while(t--)
    {
        solve();
    }
}
