#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cout << "Hello leo";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int minx = INT_MAX;
    const int N = 1e6 + 2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]] != -1)
        {
            minx = min(idx[a[i]], minx);
        }
        else
        {
            idx[a[i]] = i;
        }
    }

    if (minx == INT_MAX)
    {
        cout << "-1";
    }
    else
    {
        cout << minx + 1;
    }
    return 0;
}