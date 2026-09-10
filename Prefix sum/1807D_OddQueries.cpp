// https://codeforces.com/problemset/problem/1807/D


#include <bits/stdc++.h>
using namespace std;
const int N=2e6+10;
int pf[N];
int v[N];


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        for(int i=1;i<n+1;i++)
        {
            cin>>v[i];
            pf[i]=pf[i-1]+v[i];
        }
        while(q--)
        {
            int l,r,k;
            cin>>l>>r>>k;
            int z=pf[n];
            z+=-(pf[r]-pf[l-1])+(r-l+1)*k;
            if(z%2==0)
            {
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
}
