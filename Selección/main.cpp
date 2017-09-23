#include <iostream>

using namespace std;
void impr(int *p,int n)
{
   for (int i=0; i<n; i++)
       cout<<*(p+i)<<endl;
}
void seleccion(int *p, int n)
{
	int pos_min,temp;
	for (int i=0; i < n-1; i++)
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
    int arr[] = {12, 11, 13, 5, 6};
    seleccion(arr, sizeof(arr)/sizeof(arr[0]));
    impr(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}
