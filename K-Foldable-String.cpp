
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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int l=n/k;
        int a=count(s.begin(),s.end(),'1');
        int b=count(s.begin(),s.end(),'0');
        if(a%l!=0 && b%l!=0)
          cout<<"IMPOSSIBLE"<<endl;
        else
        {
            int l1=a/l;
            int l2=b/l;
            string s1="",s2;
            for(int i=0;i<l2;i++)
            {
                s1.push_back('0');
            }
            for(int i=0;i<l1;i++)
            {
                s1.push_back('1');
            }
            s2=s1;
            reverse(s2.begin(),s2.end());
            s="";
            for(int i=0;i<l;i++)
            {
               if(i%2==0)
                 s=s+s1;
               else
                 s=s+s2;
            }
            cout<<s<<endl;
            
        }
    }   

    return 0;
}
