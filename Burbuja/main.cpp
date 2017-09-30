#include <iostream>
#include <stdlib.h>
#include <time.h>
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
void burbuja(int *p,int n)
{
    int temp;
     for(int i=0; i<=n; i++)
   {
     for(int j=0; j<n; j++)
     {
           if(*(p+j)>*(p+j+1))
       {
        temp=*(p+j);
        *(p+j)=*(p+j+1);
        *(p+j+1)=temp;
       }
     }
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
    burbuja(arr, sizeof(arr)/sizeof(arr[0]));
    impr(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}
