#include <iostream>

using namespace std;

int main()
{
    cout << "Lista de numeros primos hasta el 1000: " << endl;
    int x=1000;
    bool a;
    for(int y=2;y<=x;y=y++)
        {
            a=false;
            for(int z=2;z<y;z++)
            {
                if(y%z==0)
                    {
                    a=true;
                    }
            }
        if(a==false)
            {
                cout<<y<<endl;
            }
        }
    return 0;

    }
