#include <bits/stdc++.h>
using namespace std;
#define test              int T;cin>>T;while(T--)
#define int               long long
#define pb                push_back
#define all(x)            (x).begin(),(x).end()
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define minf              LONG_LONG_MIN
#define inf              LONG_LONG_MAX
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(x, arr)           memset((arr),x,sizeof((arr))
#define pVec(v)           for(auto e:v)cout<<e<<" ";cout<<"\n"
const int MOD = 1e9 + 7;
const int N = 1e5 + 7;
 
void init_code() {
#ifndef ONLINE_JUDGE
	freopen("inputf.txt", "r", stdin);
	freopen("outputf.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

void solve(){
    int n; cin>>n;
    int arr[n]; map<int,int> mpp;
    vector<int> a,b;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]+=1;
        if(mpp[arr[i]]>1&&arr[i]<=n) a.push_back(arr[i]);
        else if(arr[i]>n) a.push_back(arr[i]);
    }
    sort(a.begin(),a.end());
    int aa=a.size();
    reverse(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(mpp[i+1]==0){
            int z=a.back(); a.pop_back();
            int y=i+1;
            if(z%(z-y)==y) continue;
            else {cout<<-1<<endl; return;}
        }
    }
    cout<<aa;
    cout<<endl;
}

signed main(){
    test
    solve();
}