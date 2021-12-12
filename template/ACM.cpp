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
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define LOWBIT1(x) ((x)&(-(x)))

template<typename T, typename S>
inline bool upmin(T &a, const S &b) { return a > b ? a = b, 1 : 0; }
template<typename T, typename S>
inline bool upmax(T &a, const S &b) { return a < b ? a = b, 1 : 0; }


#define LOCAL      //env key

void debug_out() { cerr << endl; }
template<typename Head, typename... Tail>
void debug_out(Head H,Tail... T) {
    cerr<<" "<<to_string(H); debug_out(T...); 
}   
#ifdef LOCAL
#define dbug(...) cerr<<"[" <<#__VA_ARGS__<<"]:",debug_out(__VA_ARGS__)
#else
#define dbug(...) { } 
#endif

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

    return 0;
}
