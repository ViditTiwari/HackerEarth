#include<iostream>
#include<math.h>

using namespace std;



int main()
 {

   int total,n;
   cin >>total;

  for(int i=0;i<total;i++)

  { cin>>n;
    int large =-n,a,b;
for(int i=-n;i<=n;i++)
{   for(int j=-n;j<=n;j++)
      { if(pow(i,j)+pow(j,i)==n)
          {  if((i-j)>=large)
             {a=i;
              b=j;
              large =i-j;
             }
          }
      }
}
cout<<a<<" "<<b<<endl;

  }
  return 0;

 }




