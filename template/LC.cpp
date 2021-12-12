#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> VI;
#define PII pair<int,int>
#define For(i,a,b) for(auto i=(a);i<(b);++i)
#define Rep(i,n) For(i,0,(n))

#define ALL(a) begin(a),end(a)
template<typename T, typename S>
inline bool upmin(T &a, const S &b) { return a > b ? a = b, 1 : 0; }
template<typename T, typename S>
inline bool upmax(T &a, const S &b) { return a < b ? a = b, 1 : 0; }

void debug_out() { cerr << endl; }
template<typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
    cerr << " " << to_string(H);
    debug_out(T...);
}

#define LOCAL       //env key
#ifdef LOCAL
#include "template/funs.hpp"
#endif

/*************start**************/
class Solution {
public:
    void example(vector<vector<int>>& nums) {
        for(auto&& vec : nums) {
            for(int v : vec) {
                cout << v << " ";
            }
            cout << endl;
        }
    }
};

#ifdef LOCAL
namespace SOLVE {
    void main() {
        Solution sln;
        string line;
        getline(cin,line);
        vector<vector<int>> nums = cin2vec(line,&stoi);
        sln.example(nums);
    }
}

inline void initIO() {
#ifdef LOCAL
    freopen("./fileIO/input.txt","r",stdin);
    freopen("./fileIO/output.txt","w",stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    initIO();
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) {
        cout<<"Case #"<<i<<": ";
        SOLVE::main();
        
    }

    return 0;
}
#endif