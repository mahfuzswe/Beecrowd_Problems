#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int sum = 0;
        for(int i=1; i<n; i++){
            if(n%i == 0){
                sum += i;
            } 
        }

        if(n == sum) cout << n << " eh perfeito\n";
        else cout << n << " nao eh perfeito\n";
    }

    return 0;
}