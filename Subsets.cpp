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

void subsets(vec arr , ll index , vec output , vector<vec> &ans){

    if(index >= arr.size()){
        ans.push_back(output);
        return;
    }
    subsets(arr, index + 1 , output , ans);

    ll ele = arr[index];
    output.push_back(ele);
    subsets(arr, index + 1, output, ans);

}

void solve()
{
    ll n;
    cin>>n;
    vec arr(n);
    for(ll i=0; i<n; i++) cin>>arr[i];
    vector<vec> ans;
    ll index = 0;
    vec output;
    subsets(arr, index, output, ans);

    for(ll i = 0; i < ans.size(); i++){
        for(ll j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    ll t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
