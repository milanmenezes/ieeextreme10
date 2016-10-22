#include <iostream>
#include <new>
using namespace std;

int main()
{
   int q,f,c;
   long long int n,a,b,sum;
   long long int *x;
   cin>>q;
   for(int l=0;l<q;l++){
    cin>>n>>a>>b;
    sum=0;
    c=0;
    x= new long long int[n];
    for(long long int i=1;i<=n;i++){
            f=1;
        for(long long int j=2;j<=i;j++)
        if(i%j==0 && n%j==0){
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
    delete []x;
   }
    return 0;
}