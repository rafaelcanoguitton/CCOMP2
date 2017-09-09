#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <fstream>
#include <cstdlib>
using namespace std;
int multi(int a,int b,int c)
{
    int x = (a*b)%c;
    while(x > c){
        x = x%c;
    }
    if(x < 0){
        x = x + c;
    }
    return x;
}
void encriptar()
{

    string line;
    ifstream myfile ("texto.txt");
    int j=0;
    int i=0;
    int cont=0;
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
    {
      j++;
    }}myfile.close();
    string lines[j];
    ifstream mifile ("texto.txt");
    if (mifile.is_open()){
    while ( getline (mifile,line) )
    {
      lines[i]=line;i++;
    }}
    mifile.close();
    ofstream thisfile ("textoe.txt");
    for (int i=0;i<j;i++)
        {
            for (int h=0;h<lines[i].size();h++){
            string temp;
            char test;
            test=(int)lines[i][h];
            temp.push_back(multi(45,test,256));
            thisfile<<temp;}
        thisfile<<endl;
        }
    thisfile.close();
}
void desencriptar()
{
    string line;
    ifstream myfile ("textoe.txt");
    int j=0;
    int i=0;
    int cont=0;
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
    {
      j++;
    }}myfile.close();
    string lines[j];
    ifstream mifile ("textoe.txt");
    if (mifile.is_open()){
    while ( getline (mifile,line) )
    {
      lines[i]=line;i++;
    }}
    mifile.close();
    ofstream thisfile ("textode.txt");
    for (int i=0;i<j;i++)
        {
            for (int h=0;h<lines[i].size();h++){
            string temp;
            char test;
            test=(int)lines[i][h];
            temp.push_back(multi(165,test,256));
            thisfile<<temp;}
        thisfile<<endl;
        }
    thisfile.close();
}
int main()
{
    int a,b,c;
    char tecla;
        system("cls");
        cout << "                             Encriptadora c2.012 BETA" << endl;
        cout << "                             -----------------------" << endl << endl;
        cout << "                          \t1 .- Encriptar" << endl;
        cout << "                          \t2 .- Desencriptar" << endl;
        cout << "                          Elije una opcion: ";
        cin >> tecla;
		switch(tecla)
		{
			case '1':
				encriptar();
				break;
			case '2':
				desencriptar();
				break;
			default:
				system("cls");
				break;
    return 0;
}}
