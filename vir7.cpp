    // (ASCII) a=97 A=65

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

    void solve(){
        int n, q, b; cin>>n>>q;
        int mx=-1;
        vector<int> nums(n), arr(n);
        nums[0]=-1; cin>>mx; arr[0]=mx;
        for(int i=1;i<n;i++){
            cin>>b;
            mx=max(b,mx), nums[i]=mx;
            arr[i]=b;
        }
        while(q--){
            int pos, k, b; cin>>pos>>k;
            pos--;
            if(arr[pos]==nums[n-1]){
                if(pos!=0 && pos!=1){
                    if(k<pos) cout<<0<<endl;
                    else{
                        cout<<k-pos+1<<endl;
                    }
                }
                else cout<<k<<endl;
            }
            else{
                if(binary_search(nums.begin(),nums.end(),arr[pos])){
                    if(k<pos) cout<<0<<endl;
                    else{
                        int l=lower_bound(nums.begin(),nums.end(),arr[pos])-nums.begin();
                        int h=upper_bound(nums.begin(),nums.end(),arr[pos])-nums.begin();
                        int d=h-l;
                        if(pos==0 || pos==1) cout<<min(k,d)<<endl;
                        else cout<<min(k-pos+1,d)<<endl;
                    }
                }
                else cout<<0<<endl;
            }
        }
    }

    signed main(){
        test
        solve();
    }