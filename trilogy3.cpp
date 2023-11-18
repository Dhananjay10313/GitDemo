#include<bits/stdc++.h>

using namespace std;

int solve(string a, string b){
    int ans=0;
    if(a.size()<2 && b.size()<2) return 0;
    int x=max(10,stoi(a));
    int y=stoi(b);
    for(int i=x;i<=y;i++){
        string sb=to_string(i);
        int mx=-1, mn=10;
        int g=int(sb[0])-48; int h=int(sb[1])-48;
        int xr=g^h; mx=max(h,g), mn=min(g,h);
        for(int j=2;j<sb.size();j++){
            g=int(sb[i])-48; xr^=g;
            mx=max(mx,g); mn=min(g,mn);
        }
        if(xr>double(mn+mx)/2) ans+=1;
    }
    return ans;
}

int main(){
    cout<<solve("32","35");
}