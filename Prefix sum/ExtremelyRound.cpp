https://codeforces.com/problemset/problem/1766/A


#include <bits/stdc++.h>

using namespace std;
const int N = 1e6 + 10;
int pf[N];

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= N; i++)
    {
        int j = i, rev = 0;
        while (j != 0)
        {
            int d = j % 10;
            rev = rev * 10 + d;
            j /= 10;
        }
        if (rev < 10)
            pf[i]=pf[i-1]+1;
        else{
            pf[i]=pf[i-1];
        }
    }

    while (t--)
    {
        int n;
        cin >> n;
        cout << pf[n] << endl;
    }
}
