
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,a;
        cin>>n>>k;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        int c=0,s=0;
        int m=*max_element(v.begin(),v.end());
        if(m>k)
          cout<<"-1"<<endl;
        else
        {
        for(int i=0;i<n;i++)
        {
            s=s+v[i];
            if(s>k)
            {
                s=v[i];
                c++;
            }
            if(s==k)
            {
                s=0;
                c++;
            }
        }
         if(s!=0)
            cout<<c+1<<endl;
         else
           cout<<c<<endl; 
        }
    }

    return 0;
}
