#include <bits/stdc++.h>
using namespace std ;
int dp[100];
int fib (int n){
{
    memset(dp,-1,sizeof (dp));
    if(n<=1)return n;
    if(dp[n]!=-1)return dp[n];
    dp[n] = fib (n-1)+ fib (n-2);
    return dp[n];
 }
}
int main(){
int n;
cin>> n;
memset (dp, -1, sizeof(dp));
for (int i=0; i<n; i++){
    cout<< fib(i)<< " ";
}

return 0;
}
