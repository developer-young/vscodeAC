#define LOCAL       //env key
#ifdef LOCAL
#include "template/funs.hpp"
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> VI;
#define PII pair<int,int>
#define For(i,a,b) for(auto i=(a);i<(b);++i)
#define Rep(i,n) For(i,0,(n))

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

