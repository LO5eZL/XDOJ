#include <bits/stdc++.h>
#define mian main

using namespace std;

int mian()
{
    int n;
    int a, b = 114514;
    int cnt = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        if (a != b)
            ++cnt;
        b = a;
    }
    cout << cnt;
    return 0;
}
