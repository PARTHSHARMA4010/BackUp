#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        long long n,q;
        cin>>n>>q;
        long long arr[n];
        long long que[q];
        long long ans =0;
        
        for(long long i=0;i<n;i++){
            cin>>arr[i];
            long long done = 2*arr[i];
            ans = ans + done;
        }
        
        for(long long i=0;i<q;i++){
            long long parth;
            cin>>parth;
            
            long long deepak = ans - parth;
            
            int check =0;
            
            for(long long i=0;i<n;i++){
                for(long long j=i+1;j<n;j++){
                    
                    if(arr[i] + arr[j] == deepak){
                        cout<<arr[i]<<" ";
                        for(int k=0;k<n;k++){
                            if(k!=j && k!=i)
                            cout<<arr[k]<<" ";
                        }
                        cout<<arr[j]<<" "<<endl;
                        check = 1;
                        break;
                    }
                    
                    
                    
                }
                if(check==1)
                break;
            }
            
            if(check == 0)
            cout<<"-1"<<endl;
        }
    }
    return 0;
}