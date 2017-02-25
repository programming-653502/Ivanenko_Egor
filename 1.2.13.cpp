
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <clocale>
using namespace std;

char bufRus[500];
char* Rus(const char* text) 
{
	CharToOemA (text, bufRus);
	return bufRus;
}	


int main()
{
	int n;
	char str[500]="",str1[500]="";
	cout<<Rus("Введите число от 1 до 100: ");
	cin>>n;
	if (n>0 && n<=100)
	{
	
	if (n>10 && n<20)
	{
		switch(n)
		{
			case 11: strcpy(str, Rus("Одиннадцать"));break;
			case 12: strcpy(str,Rus("Двенадцать"));break;
			case 13: strcpy(str,Rus("Тринадцать"));break;
			case 14: strcpy(str,Rus("Четырнадцать"));break;
			case 15: strcpy(str,Rus("Пятнадцать"));break;
			case 16: strcpy(str,Rus("Шестнадцать"));break;
			case 17: strcpy(str,Rus("Семнадцать"));break;
			case 18: strcpy(str,Rus("Восемнадцать"));break;
			case 19: strcpy(str,Rus("Девятнадцать"));break;
		}
	}
	else 
	{
		switch(n/10)
		{
			case 1: strcpy(str,Rus("Десять"));break;
			case 2: strcpy(str,Rus("Двадцать"));break;
			case 3: strcpy(str,Rus("Тридцать"));break;
			case 4: strcpy(str,Rus("Сорок"));break;
			case 5: strcpy(str,Rus("Пятьдесят"));break;
			case 6: strcpy(str,Rus("Шестьдесят"));break;
			case 7: strcpy(str,Rus("Семьдесят"));break;
			case 8: strcpy(str,Rus("Восемьдесят"));break;
			case 9: strcpy(str,Rus("Девяносто"));break;
			case 10: strcpy(str,Rus("Сто"));break;
		}
	
	switch(n%10)
		{
			case 1: strcpy(str1,Rus("один"));break;
			case 2: strcpy(str1,Rus("два"));break;
			case 3: strcpy(str1,Rus("три"));break;
			case 4: strcpy(str1,Rus("четыре"));break;
			case 5: strcpy(str1,Rus("пять"));break;
			case 6: strcpy(str1,Rus("шесть"));break;
			case 7: strcpy(str1,Rus("семь"));break;
			case 8: strcpy(str1,Rus("восемь"));break;
			case 9: strcpy(str1,Rus("девять"));break;
			case 10: strcpy(str1,Rus("десять"));break;
		}
		cout<<str<<" "<<str1<<endl;
	 	getch();
	 	return 0;
	 }
}
else cout<<Rus("Вы ввели число не из заданного промежутка");
}


	

