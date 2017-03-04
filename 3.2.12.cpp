#include <iostream>
#include <conio.h>
#include <clocale>
using namespace std;
int main()
{	
setlocale(LC_ALL,"rus");
cout<<"Латинский квадрат размером nxn: "<<endl;
int **mas, n, i, j;
cout<<"Введите n=";
cin>>n;
mas=new int*[n];
     for(i=0; i<n; i++)
     {
       mas[i]=new int[n];
     }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
	{
            mas[i][j]=(i+j)%n+1;
	}
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
	{
            cout<<mas[i][j]<<" ";
	}
        cout<<endl;
    }  
  	getch();
	return 0;
}
