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
void seleccion(int *p, int n)
{
	int pos_min,temp;
	for (int i=0; i < n; i++)
	{
	    pos_min = i;

		for (int j=i+1; j < n; j++)
		{

		if (*(p+j) < *(p+pos_min))
                   pos_min=j;
		}
            if (pos_min != i)
            {
                 temp = *(p+i);
                 *(p+i)= *(p+pos_min);
                 *(p+pos_min)= temp;
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
    seleccion(arr, sizeof(arr)/sizeof(arr[0]));
    impr(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}
