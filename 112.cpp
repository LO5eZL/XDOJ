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
    float x;
    cin >> x;
    if (x >= 0)
        printf("%.2f", sqrt(x));
    else
        printf("%.2f", (x + 1) * (x + 1) + 2.0 * x + 1.0 / x);
    return 0;
}