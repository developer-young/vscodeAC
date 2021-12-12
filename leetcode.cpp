#define LOCAL       //env key
#ifdef LOCAL
#include "template/funs.hpp"
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<ll> VLL;
typedef vector<int> VI;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<ll> VLL;
typedef vector<int> VI;
#define ALL(a) begin(a),end(a)
#define PII pair<int,int>
#define PLL pair<ll,ll>
#define LOWBIT1(x) ((x)&(-(x)))


class Solution {

};

#ifdef LOCAL
namespace SOLVE {
    void main() {
        Solution sln;

        cout << endl;
    }
}

int main() {
    initIO();
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) {
        cout<<"Case #"<<i<<": " << endl;
        SOLVE::main();
    }
    return 0;
}
#endif

