#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a;
        map<int,int> parth;
        int pos=0;
        while(n--){
            cin>>a;
              pos+=a%3;
            parth[a%3]++;
        }
        if(pos%3==0)
            cout<<0<<endl;
        
        else if(pos%3==1){
            if(parth[1]>0)
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
        else
           cout<<1<<endl;
    }
 
return 0;
}