#include <iostream>
#include <math.h>
#include <stack>
#include <algorithm>

using namespace std;


int main()
{
    long long l, r, m; cin >> l >> r;
    m = l ^ r;
    long long count = 1;
    while(count <= m)
    count = count << 1;
    cout << (count - 1) << endl;
    return 0;
}
