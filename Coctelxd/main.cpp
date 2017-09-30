#include<iostream>
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
void EarthShaker(int a[], int n)
{
	int temp;
	for(int i = 0; i < n;)
	{
		for(int j = i+1; j < n; j++)
		{
			if(a[j] < a[j-1]){
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
		n--;
		for(int k = n-1; k > i; k--)
		{
			if(a[k] < a[k-1]){
				temp=a[k];
				a[k]=a[k-1];
				a[k-1]=temp;}
		}
		i++;
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
    EarthShaker(arr, sizeof(arr)/sizeof(arr[0]));
    impr(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}
