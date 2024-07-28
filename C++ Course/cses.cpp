#include<bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n,f,k;
        cin>>n>>f>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans = arr[f];
        sort(arr.begin(), arr.end(), greater<int>());
        if(arr[k]<ans){
            cout<<"Yes"<<endl;
        }
        else if(arr[k]>ans){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Maybe"<<endl;
        }
    }
    return 0;
}