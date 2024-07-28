
#include<bits/stdc++.h>
using namespace std;

int main() {
    char parth;
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        long long k = ((long long)a*b)/__gcd(a,b);
        if(k==b){
            int temp = (b/a);
            cout<<k*temp<<endl;
        }
        else{
            cout<<k<<endl;
        }
    }
    return 0;
}