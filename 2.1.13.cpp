#include <iostream>
#include <conio.h>
#include <clocale>
#include <cstdlib>
using namespace std;

int windows1=0,doors1=0,floors1=0;

int input_windows(int windows)
{
	system("cls");
	int windows1,ch,i=0;
	while (i!=1)
{
	cout<<"������� ���-�� ����: ";
	w:cin>>windows1;
	if (windows1<=0)
	{
		cout<<"��������� ����: ";
		goto w;
	}	
	
	cout<<"1.��������� � ����"<<endl<<"2.������������"<<endl;
	v:cin>>ch;
	switch (ch)
	{
		case 1: i=1;break;
		case 2: system("cls");
				cout<<"������� ������:"<<endl;
				goto w;break;
		default: 
		{
			cout<<"������� ��� ���: ";
			goto v;
		}
	}
	return windows1;
}
	
}



int input_doors(int doors)
{
	system("cls");
	int doors1,ch,i=0;
	while (i!=1)
{
	cout<<"������� ���-�� ��������� ������: ";
	w:cin>>doors1;
	if (doors1<0)
	{
		cout<<"��������� ����: ";
		goto w;
	}	
	
	cout<<"1.����� � ����"<<endl<<"2.������������"<<endl;
	v:cin>>ch;
	switch (ch)
	{
		case 1: i=1;break;
		case 2: system("cls");
				cout<<"������� ������:"<<endl;
				goto w;break;
		default: 
		cout<<"������� ��� ���: ";
		goto v;
	}
	return doors1;
}
	
}
int input_floors(int floors)
{
	system("cls");
	int floors1,ch,i=0;
	while (i!=1)
{
	cout<<"������� ����: "<<endl;
	w:cin>>floors1;
	if (floors1<=0 || floors1>24)
	{	system("cls");
		cout<<"�� �� ������������� ���� ���� 24 �����: "<<endl<<"��������� ���� "<<endl;
		goto w;
	}		
	
	cout<<"1.����� � ����"<<endl<<"2.�������� ���� "<<endl;
	v:cin>>ch;
	switch (ch)
	{
		case 1: i=1;break;
		case 2:	system("cls");
				cout<<"������� ����:"<<endl;
				goto w;break;
		default: 
		cout<<"������� ��� ���: ";
		goto v;
	}
	return floors1;
}
	
}

void calculation(float w,float d,float f)
{
	system("cls");
	float square=2.15*1.5*w;
	float price_d=150*d;
	float price_win;
	float percent;
	
	if(f>1) price_win=100*w+100*w*0.15;
	else price_win=100*w;
	
	if (f>1) percent=15*w;
	else percent=0;
	
	
	cout<<"1.����� ������� �����������: "<<square<<endl;
	cout<<"2.��������� ����������� ����: "<<price_win<<"$"<<endl;
	cout<<"3.��������� ��������� ��������� �����: "<<price_d<<"$"<<endl;
	cout<<"4.���������� ��������: "<<percent<<"%"<<endl;
	cout<<"������� ����� �������, ����� ��������� � ����"<<endl;
	getch();
}
void all_price(float w,float d,float f)
{
	system("cls");
	float price_d=150*d;
	float price_win;
	float all_price;
	
	if(f>1) price_win=100*w+100*w*0.15;
	else price_win=100*w;

	float all_price1=price_win+price_d;
	cout<<"����� ��������� �������: "<<all_price1<<"$"<<endl;
	cout<<"������� ����� �������, ����� ��������� � ����"<<endl;
	getch();
}
 
int main()
{	
setlocale(LC_ALL, "rus");

	int w=0,d=0,f=0,i=0;
	int choice;
	while (i!=1)
{	
	system("cls");
	cout<<"����� ���������� �� ���� �������� Air Comfort"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"1.���� ���������� ���� � ��������"<<endl;
	cout<<"2.���� ���������� �������� "<<endl;
	cout<<"3.���� �����,�� ������� ��������� �������� "<<endl;
	cout<<"4.������ � ����� ���������� �������"<<endl;
	cout<<"5.����� ��������� �������"<<endl;
	cout<<"6.�������� �����"<<endl;
	cout<<"7.�����"<<endl;
	cin>>choice;
	switch (choice)
	{
		case 1: w=input_windows(windows1);break;
		case 2: d=input_doors(doors1);break;
		case 3: f=input_floors(floors1);break;
		case 4: calculation(w,d,f);break;
		case 5: all_price(w,d,f);break;
		case 6: w=0;d=0;f=0;break;
		case 7: exit(0);break;
	}
}
	return 0;

}
