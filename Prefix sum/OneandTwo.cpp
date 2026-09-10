// https://codeforces.com/problemset/problem/1788/A


#include <bits/stdc++.h>
using namespace std;
const int N=1e3+7;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long pf[N];
        long long pf2[N];
        int v[N];
        
        for(int i=0;i<n+2;i++)
        {
            pf[i]=pf2[i]=v[i]=0;
        }
        
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
            if(v[i]%2==0)
            {
                pf[i]=pf[i-1]+1;
            }
            else{
                pf[i]=pf[i-1];
            }
        }
        for(int i=n;i>0;i--)
        {
            if(v[i]%2==0)
            {
                pf2[i]=pf2[i+1]+1;
            }
            else{
                pf2[i]=pf2[i+1];
            }
        }
        
        int k=-1;
        for(int i=1;i<n;i++)
        {
            if(pf[i]==pf2[i+1])
            {
                k=i;
                break;
            }
        }
        cout<<k<<endl;
        
    }
}
