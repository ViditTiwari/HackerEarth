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



     int arr[n];

     for(int j=0;j<n;j++)
     {
       cin>>arr[j];

     }
     int first;
     for(int k=0;k<n;k++)
     { first=arr[k];
         {for(int l=k+1;l<n;l++)

            {   if(first==arr[l])
                 break;
                if(l==(n-1))
                 goto y;

            }
         }
     }
     y:
         {
             cout<<first<<endl;
         }
     cout<<first<<endl;
  }




  return 0;

 }








