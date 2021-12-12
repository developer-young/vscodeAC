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
typedef long double ld;
typedef vector<ll> VLL;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define LOWBIT1(x) ((x)&(-(x)))


inline void initIO() {
#ifdef LOCAL
    freopen("./fileIO/input.txt","r",stdin);
    freopen("./fileIO/output.txt","w",stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

template<typename T, typename S>
inline bool upmin(T &a, const S &b) { return a > b ? a = b, 1 : 0; }

template<typename T, typename S>
inline bool upmax(T &a, const S &b) { return a < b ? a = b, 1 : 0; }


ull twop(ll x) { return 1ULL << x; }

ll MOD(ll a, ll m) {
    a %= m;
    if(a < 0)a += m;
    return a;
}

ll inverse(ll a, ll m) {
    a = MOD(a, m);
    if(a <= 1) return a;
    return MOD((1 - inverse(m, a) * m) / a, m);
}

template<typename T>
T sqr(T x) { return x * x; }

ll gcd(ll a, ll b) {
    a = abs(a), b = abs(b);
    while(b != 0) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll fastPow(ll a, ll b, ll mod) {
    a %= mod;
    if(b < 0)a = inverse(a, mod), b = -b;
    ll ans = 1;
    while(b) {
        if(b & 1)ans = ans * a % mod;
        a = a * a % mod;
        b /= 2;
    }
    return ans % mod;
}

vector<ll> str2vec(string& s,bool __tail=false) {
    vector<ll> res;
    int head = 1,tail = s.size()-2;
    if(__tail == true) {
        tail += 1;
        if(!s.empty() && s[0]!='[') {
            head += 1;
        }
    }
    s = s.substr(head,tail);
    stringstream ssm(s);
    string item;
    while(getline(ssm,item,',')) {
        res.emplace_back(stoll(item));
    }
    return res;
}

vector<vector<ll>> str2vec2(string& s) {
    vector<vector<ll>> res;
    s = s.substr(1,s.size()-2);
    stringstream ssm(s);
    string item;
    while(getline(ssm,item,']')) {
        if(item.empty())    continue;
        res.emplace_back(str2vec(item,true));
    }
    return res;
}

vector<ll> cin2vec() {
    string line;
    getline(cin,line);
    return str2vec(line);
}

vector<vector<ll>> cin2vec2() {
    string line;
    getline(cin,line);
    return str2vec2(line);
}

string to_string(string s) { return '"' + s + '"'; }

string to_string(const char *s) { return to_string((string) s); }

string to_string(bool b) { return (b ? "true" : "false"); }

template<typename A, typename B>
string to_string(pair<A, B> p) { return "(" + to_string(p.first) + ", " + to_string(p.second) + ")"; }

template<typename A>
string to_string(A v) {
    bool first = true;
    string res = "{";
    for(const auto &x : v) {
        if(!first) { res += ", "; }
        first = false;
        res += to_string(x);
    }
    res += "}";
    return res;
}

void debug_out() { cerr << endl; }

template<typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
    cerr << " " << to_string(H);
    debug_out(T...);
}


#define LOCAL
#ifdef LOCAL
#define dbug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define dbug(...) { } 
#endif