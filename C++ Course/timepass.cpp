
#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t; 

    while (t-- > 0) {
        int n;
        cin >> n;
        string s;
        cin >> s; 

        int sum[26] = {0}; 
        for (int i = 0; i < n; i++) {
            sum[s[i] - 'a']++;
        }
        int ans = 1; 

        for (int j = 0; j < 26; j++) {
            ans = (ans * (sum[j] + 1)) % MOD;
        }
        int temp = ans-1;
        cout<<temp<<endl;
    }

    return 0;
    }
