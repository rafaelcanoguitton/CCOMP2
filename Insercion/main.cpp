#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void impr(int *p,int n)
{
    cout<<"Array: {";
   for (int i=0; i<n; i++){
       if (i==n-1)
        cout<<*(p+i)<<"}"<<endl;
       else
        cout<<*(p+i)<<",";}
}
void insercion(int *p, int n)
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
    srand((unsigned)time(0));
    int arr[rand()%20];
    for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
        {
            arr[i]=rand()%100;
        }
    impr(arr,sizeof(arr)/sizeof(arr[0]));
    insercion(arr, sizeof(arr)/sizeof(arr[0]));
    impr(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}
