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
#define inf               LONG_LONG_MAX
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(x, arr)           memset((arr),x,sizeof((arr)))
#define pVec(v)           for(auto e:v)cout<<e<<" ";cout<<"\n"
const int MOD = 1e9 + 7;
const int N = 1e5 + 7;
 
void init_code() {
#ifndef ONLINE_JUDGE
	freopen("inputf.txt", "r", stdin);
	freopen("outputf.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
bool isPerfectSquare(int x)
{
    if (x >= 0)
    {
        int sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}
 
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}


int solve(){
    int d,n; cin>>d>>n;
    vector<int> nums(n); map<int,int> freq;
    vector<int> nums1;
    for(int i=0;i<n;i++){
        cin>>nums[i];
        freq[nums[i]]+=1;
        if(freq[nums[i]==1]) nums1.push_back(nums[i]);
    }
    sort(nums1.begin(),nums1.end());
    if(d>=nums[n-1]){
        return nums[n-1]-nums[0];
    }
    else {
        int nn=nums1.size();
        int mn=INT_MIN; int ans=0;
        for(int i=nn-1;i>=0;i--){
            auto j=lower_bound(nums1.begin(),nums1.end(),nums1[i]-d);
            if(*j==nums1[i]){
                if(freq[nums1[i]]>1){
                    if(nums[i]-d==*j){
                        mn=0, ans=2*nums1[i];
                    }
                    else{
                        if(j!=nums1.begin()){
                            int cmp=*j; j-=1;
                            if(abs(*j-nums1[i])<abs(nums1[i]-cmp)){
                                if(abs(d-abs(*j-nums1[i]))<mn){
                                    mn=abs(d-abs(*j-nums1[i])); ans=*j + nums1[i];
                                }
                            }
                            else{
                                if(abs(d-abs(cmp-nums1[i]))<mn){
                                    mn=abs(d-abs(cmp-nums1[i])); ans=cmp + nums1[i];
                                }
                            }
                        }
                    }
                }
            }
            else{
                if(j!=nums1.begin()){
                    if(*j==nums1[i]-d){
                        mn=0, ans=*j+nums1[i];
                    }
                    else{
                        int cmp=*j; j-=1;
                            if(abs(*j-nums1[i])<abs(nums1[i]-cmp)){
                                if(abs(d-abs(*j-nums1[i]))<mn){
                                    mn=abs(d-abs(*j-nums1[i])); ans=*j + nums1[i];
                                }
                            }
                            else{
                                if(abs(d-abs(cmp-nums1[i]))<mn){
                                    mn=abs(d-abs(cmp-nums1[i])); ans=cmp + nums1[i];
                                }
                            }
                    }
                }
                else{
                    if(abs(d-abs(*j-nums1[i]))<mn){
                        mn=abs(d-abs(*j-nums1[i])); ans=*j + nums1[i];
                    }
                }
                }
            }
        return ans;
    }
}

signed main(){
    // test
    solve();
}