#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n, m;
    cin >> n;
    if (n) 
	{
        int off(15);
        for (int i(n); !(i & (1 << 15)); --off, i <<= 1);
        for (int i(0); i < off + 1; ++i, n = ((n & ~(1ul << off)) << 1) | (n >> off)) m = max(m, n);
    }
    cout << m;
    return 0;
}
