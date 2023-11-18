#include<bits/stdc++.h>

using namespace std;


vector<int> solve(int n){
    if(n==1) return {0};
    if(n==2) return {0,1};
    else{
        auto fib=solve(n-1);
        fib.push_back(fib[n-2]+fib[n-3]);
        return fib;
    }
}

int main(){
    auto fib=solve(20);
    for(auto i:fib){
        cout<<i<<" ";
    }
}