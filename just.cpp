#include<iostream>
#include<math.h>
#include<cstring>



using namespace std;

int max = 5000;

void display(int arr[]){
    int ctr = 0;
    for (int i=max-1; i>=0; i++){

    	if(!arr[i])
        cout<<arr[i]<<endl;
    }
}


void factorial(int arr[], int n){
    if (!n) return;
    int carry = 0;
    for (int i=max-1; i>=0; --i){
        arr[i] = (arr[i] * n) + carry;
        carry = arr[i]/10;
        arr[i] %= 10;
    }
    factorial(arr,n-1);
}

int main()

{
  int no,cas ;
  int *arr = new int[max];
  memset(arr,0,max*sizeof(int));
  arr[max-1] = 1;

  cin >>no;

  for(int i=0;i<no;i++)

  { cin>>cas;
    factorial(arr,cas);
    display(arr);

  }





    delete[] arr;
    return 0;

  return 0;
}
