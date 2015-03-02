#include<iostream>
#include<math.h>
#include<cstring>



using namespace std;

int getOrder(int &n, int d)
{
     int count = 0;
     while ( (n % d) == 0  )
     {
          count += 1;
          n /= d;
     }
     return count;
}

int lastNonzeroDigit(int n)
{
     int twoOrderCount = 0; // we only need count the order of 2, think it why?
     int lastDigit = 1;

     for( int i = 1; i <= n; i++ )
     {
          int remain = i;
          int fiveOrder = getOrder(remain, 5);
          int twoOrder = getOrder(remain, 2);
          twoOrderCount += (twoOrder - fiveOrder);
          lastDigit = (lastDigit * remain % 10);
     }

     for (int i = 0; i < twoOrderCount; i++)
     {
          lastDigit = ( lastDigit * 2 ) % 10;
     }
     cout<<lastDigit<<endl;
}


int main()

{
  int no,cas ;


  cin >>no;

  for(int i=0;i<no;i++)

  { cin>>cas;
    lastNonzeroDigit(cas);


  }





  return 0;
}
