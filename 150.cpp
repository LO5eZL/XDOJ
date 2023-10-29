#include <bits/stdc++.h>
#define mian main
#define ll long long
#define elif else if

using namespace std;

struct
{
    bool o(bool x)
    {
        return x ? true : false;
    }
    bool O = true;
} O;
struct
{
    bool o = false;
} o;

int mian()
{
    int x;
    cin >> x;
    if (x < 1)
        cout << x;
    else if (x < 10)
        cout << 2 * x - 1;
    else
        cout << 3 * x - 11;
    return 0;
}