#include <iostream>
using namespace std;
void impr(int *p,int n)
{
   for (int i=0; i<n; i++)
       cout<<*(p+i)<<endl;
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
    int arr[] = {12, 11, 13, 5, 6};
    burbuja(arr, sizeof(arr)/sizeof(arr[0]));
    impr(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}
