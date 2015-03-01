#include<iostream>
#include<math.h>

using namespace std;

int isPrime(int n){
    int i;

    if (n==2)
        return 1;

    if (n%2==0)
        return 0;

    for (i=3;i<=sqrt(n);i+=2)
        if (n%i==0)
            return 0;

    return 1;
}

int main()
 {

   int total,cas;
   cin >>total;

  for(int i=0;i<total;i++)

  { cin>>cas;
     if(isPrime(cas))
     {
         cout<<"YES\n";
     }
     else cout<<"NO\n";
  }
  return 0;

 }
