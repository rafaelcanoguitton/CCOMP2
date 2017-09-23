#include<iostream>

using namespace std;
void impr(int *p,int n)
{
   for (int i=0; i<n; i++)
       cout<<*(p+i)<<endl;
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
	int arr[] = {12, 11, 13, 5, 6};
    EarthShaker(arr, sizeof(arr)/sizeof(arr[0]));
    impr(arr,sizeof(arr)/sizeof(arr[0]));
	return 0;
}
