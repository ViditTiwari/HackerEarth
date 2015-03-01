#include<iostream>
#include<math.h>
#include<cstring>



using namespace std;

int main()

{
  int no,cas,count=0;


  cin >>no;

  for(int i=0;i<no;i++)

  { cin>>cas;
    for(int j=2;j<cas;j++)

         {
            if(cas%i==0)       // checks if the number is fully divisible or not
             {
               count++;
             }
         }
            if(count==0)
             {
               cout<<"YES\n";
             }
            else
             {
              cout<<"NO\n";
             }

  }





  return 0;
}


