#include <iostream>

using namespace std;



int main()
{
   int q,n,a,b,f=1,c=0;
   int *x;
   cin>>q;
   for(int l=0;l<q;l++){
    cin>>n>>a>>b;
    x= new int[n];
    for(int i=1;i<=n;i++){
            f=1;
        for(int j=2;j<=i;j++)
        if(i%j==0 && n%j==0){
            f=0;
            break;
        }
        if(f)
        {
            x[c]=i;
            c++;
            cout<<i<<" ";
        }
    }
    for()

    delete []x;
   }
    return 0;
}
