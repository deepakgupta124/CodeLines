#include<iostream>
#include<math.h>
using namespace std;



const int Max=100000001;
      bool a[Max];
int main()
{
    
        a[0]=1;
       a[1]=1;
       long long int k=sqrt(Max);
        for(int i=2;i<=k;i++)
        {
                if(a[i]==0)
                {
                        for(int j=i*i;j<=Max;j+=i)
                                a[j]=1;
                }
        }
        long long int left,right,ans=0;
        cin>>left>>right;
        for(int i=left;i<=right;i++)
        {
                if(a[i]==0)
                        ans++;
        }
        cout<<ans;
}

