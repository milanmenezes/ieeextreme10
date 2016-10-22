#include <iostream>
#include <new>
using namespace std;

int main()
{
   int q,f,c;
   long long int n,a,b,sum;
   cin>>q;
   for(int l=0;l<q;l++){
    cin>>n>>a>>b;
    sum=0;
    c=0;
    long long int x[n+1];
    for(long long int i=1;i<=n;i++){
            f=1;
        for(long long int j=2;j<=i;j++)
        if(i%j==0 && n%j==0 &&i!=n){
            f=0;
            break;
        }
        if(f)
        {
            x[c]=i;
            c++;
        }
    }
    for(int j=0;x[j]<=b && j<c;j++)
    {
        if(x[j]>=a)
            sum+=x[j];
    }

    sum=sum%1000000007;
    cout<<sum<<endl;
   }
    return 0;
}
