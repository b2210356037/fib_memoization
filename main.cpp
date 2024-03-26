#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>

using namespace std;

int fib(int n, vector<int>& memo){
    if(n == 1 || n == 0) {
        memo[n] = 1;
        return 1;
    }
    if(memo[n] == 0){
        memo[n] = fib(n-1, memo) + fib(n-2, memo);
    }
    return memo[n];
}

int main(){
    int x = 6;
    vector<int> memo(x+1, 0);
    int res = fib(x, memo);
    cout << res;
    return 0;
}