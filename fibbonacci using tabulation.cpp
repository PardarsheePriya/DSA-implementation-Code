
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int dp[n+1];
    
    dp[1] = 1;
    dp[0] = 0;
    
    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    cout << dp[n - 1];

    return 0;
    
    //with space complexity O(1)
    
//    int n;
//    cin >> n;
//    int prev1 = 1;
//    int prev2 = 0;
//    
//    for(int i = 2; i <n; i++){
//        int current = prev1 + prev2;
//        prev2 = prev1;
//        prev1 = current;
//    }
//    
//    cout << prev1;
//    
//    return 0;
}
