#include<iostream>
#include<math.h>

using namespace std;

int length(int n){

	   if(!n)
       { long   l=n, index;
        double sum;



            /* log(1) + ... + log(N-1) + log(N) */
            for (sum = 0, index = 1; index <= l; index++)
                sum += log10((double) index);

            /* CEILING[(log(1) + ... + log(N-1) + log(N))] */
            sum = ceil(sum);
            cout<<sum<<'\n';

       }
       else
       cout<<0<<'\n';

}

int main()
 {

   int total,cas;
   cin >>total;

  for(int i=0;i<total;i++)

  { cin>>cas;
    length(cas);

  }
  return 0;

 }




