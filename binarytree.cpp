#include<iostream>
#include<math.h>

using namespace std;




int main()
 {

   int total,n;
   cin >>total;

  for(int i=0;i<total;i++)
  {
     cin>>n;

     long factor,factor1;
     factor=factor1=1;

     for(int j=n;j>0;j--)
     {
       factor*=j;

     }

     for(int j=2*n;j>0;j--)
     {
       factor1*=j;

     }




     cout<<(factor1)/(factor*factor*(n+1))<<endl;

  }



  return 0;

 }








