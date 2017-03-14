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
	cout<<"Введите кол-во окон: ";
	w:cin>>windows1;
	if (windows1<=0)
	{
		cout<<"Повторите ввод: ";
		goto w;
	}	
	
	cout<<"1.Вернуться в меню"<<endl<<"2.Перезаказать"<<endl;
	v:cin>>ch;
	switch (ch)
	{
		case 1: i=1;break;
		case 2: system("cls");
				cout<<"Введите заново:"<<endl;
				goto w;break;
		default: 
		{
			cout<<"Введите ещё раз: ";
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
	cout<<"Введите кол-во балконных дверей: ";
	w:cin>>doors1;
	if (doors1<0)
	{
		cout<<"Повторите ввод: ";
		goto w;
	}	
	
	cout<<"1.Выход в меню"<<endl<<"2.Перезаказать"<<endl;
	v:cin>>ch;
	switch (ch)
	{
		case 1: i=1;break;
		case 2: system("cls");
				cout<<"Введите заново:"<<endl;
				goto w;break;
		default: 
		cout<<"Введите ещё раз: ";
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
	cout<<"Введите этаж: "<<endl;
	w:cin>>floors1;
	if (floors1<=0 || floors1>24)
	{	system("cls");
		cout<<"Мы не устанавливаем окна выше 24 этажа: "<<endl<<"Повторите ввод "<<endl;
		goto w;
	}		
	
	cout<<"1.Выход в меню"<<endl<<"2.Изменить этаж "<<endl;
	v:cin>>ch;
	switch (ch)
	{
		case 1: i=1;break;
		case 2:	system("cls");
				cout<<"Введите этаж:"<<endl;
				goto w;break;
		default: 
		cout<<"Введите ещё раз: ";
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
	
	
	cout<<"1.Обшая площадь застекления: "<<square<<endl;
	cout<<"2.Стоимость застекления окон: "<<price_win<<"$"<<endl;
	cout<<"3.Стоимость установки балконной двери: "<<price_d<<"$"<<endl;
	cout<<"4.Процентная надбавка: "<<percent<<"%"<<endl;
	cout<<"Нажмите любую клавишу, чтобы вернуться в меню"<<endl;
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
	cout<<"Обшая стоимость проекта: "<<all_price1<<"$"<<endl;
	cout<<"Нажмите любую клавишу, чтобы вернуться в меню"<<endl;
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
	cout<<"Добро пожаловать на сайт компании Air Comfort"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"1.Ввод количества окон в квартире"<<endl;
	cout<<"2.Ввод количества балконов "<<endl;
	cout<<"3.Ввод этажа,на котором находится квартира "<<endl;
	cout<<"4.Расчёт и вывод параметров проекта"<<endl;
	cout<<"5.Общая стоимость проекта"<<endl;
	cout<<"6.Обнулить заказ"<<endl;
	cout<<"7.Выход"<<endl;
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
