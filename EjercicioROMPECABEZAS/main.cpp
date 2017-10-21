#include <iostream>
using namespace std;
void impr(int (*p)[4])
{
    for (int i=0;i<4;i++)
    {
        cout<<**p;
    }
cout<<endl;
}
int main()
{
    int m[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int *p=m[0];
    int (*a)[4]=m;
    impr(a);
    a++;
    impr(a);
    return 0;
}







//*(b[i]+j)




//cout<<(sizeof(m)/sizeof(m[0]))<<endl;
