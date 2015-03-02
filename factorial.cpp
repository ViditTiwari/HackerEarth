#include<cstring>
#include<iostream>

int max = 5000;

void display(int arr[]){
    int ctr = 0;
    for (int i=0; i<max; i++){
    	if (!ctr && arr[i])			ctr = 1;
    	if(ctr)
            std::cout<<arr[i];
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

int main(){
    int *arr = new int[max];
    std::memset(arr,0,max*sizeof(int));
    arr[max-1] = 1;
    int no,cas ;

    std::cin >>no;

  for(int i=0;i<no;i++)

  { std::cin>>cas;
    factorial(arr,cas);
    display(arr);

  }

    delete[] arr;
    return 0;
}
