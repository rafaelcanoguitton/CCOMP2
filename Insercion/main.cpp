#include <iostream>
using namespace std;
void impr(int *p,int n)
{
   for (int i=0; i<n; i++)
       cout<<*(p+i)<<endl;
}
void insertionSort(int *p, int n)
{
   int key, j;
   for (int i=1;i<n;i++)
   {
       key = *(p+i);
       j=i-1;
       while (j >= 0 && *(p+j)>key)
       {
           *(p+j+1) = *(p+j);
           j = j-1;
       }
       *(p+j+1) = key;
   }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    insertionSort(arr, sizeof(arr)/sizeof(arr[0]));
    impr(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}
