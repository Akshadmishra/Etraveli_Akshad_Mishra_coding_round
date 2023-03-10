#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int n; 
    cin>>n; 
    
    vector<int> num = {1, 3, 5}; 
    
    vector<int> dp(n+1);
    
    dp[0] = 1; 
    
    
    for(int i=1;i<=n;i++){
        for(int j=0;j<3;j++){
            if(i>=nums[j]){
                dp[i] += dp[i-nums[j]];
            }
        }
    }
    
    
    cout << "number of ways are " << dp[n];
    return 0;
}
