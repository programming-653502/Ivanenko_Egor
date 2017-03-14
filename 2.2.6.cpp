#include <iostream>
#include <conio.h>
#include <cmath>
#include <clocale>

using namespace std;

double factorial(double n) 
{ 
	double fact; 
	if (n == 1 || n==0) fact = 1.0; 
	else fact = factorial (n - 1) * n; 
	return fact;
} 

double func(double x,double n)
{
	float res = 0;
	for (int i = 1; i <= n; i++)
	{
		res += pow(-1, i - 1) * pow(x, 2 * i - 1) / factorial(2 * i - 1);
	}
	return res;
}

int main()
{
	setlocale(LC_ALL,"rus");
	int n;
	double x,e,res=0;
	double left,right;
	
	cout<<"Введите x: ";
	cin>>x;
	cout<<"Введите e: ";
	cin>>e;
	
	left = sin(x);
	for (int i=1; i<1000; i++)
	{
		right = func(x,i);
		if (abs(left-right)<e)
		{
			n=i;
			break;
		}
	}
	cout<<"Точность достигается при n="<<n<<endl;
	cout<<"sin(x)="<<left<<endl;
	cout<<"Правая часть sin(x)="<<right<<endl;
	getch();
	return 0;
}
