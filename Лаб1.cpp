
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
	cout<<Rus("������� ����� �� 1 �� 100: ");
	cin>>n;
	if (n>0 && n<=100)
	{
	
	if (n>10 && n<20)
	{
		switch(n)
		{
			case 11: strcpy(str, Rus("�����������"));break;
			case 12: strcpy(str,Rus("����������"));break;
			case 13: strcpy(str,Rus("����������"));break;
			case 14: strcpy(str,Rus("������������"));break;
			case 15: strcpy(str,Rus("����������"));break;
			case 16: strcpy(str,Rus("�����������"));break;
			case 17: strcpy(str,Rus("����������"));break;
			case 18: strcpy(str,Rus("������������"));break;
			case 19: strcpy(str,Rus("������������"));break;
		}
	}
	else 
	{
		switch(n/10)
		{
			case 1: strcpy(str,Rus("������"));break;
			case 2: strcpy(str,Rus("��������"));break;
			case 3: strcpy(str,Rus("��������"));break;
			case 4: strcpy(str,Rus("�����"));break;
			case 5: strcpy(str,Rus("���������"));break;
			case 6: strcpy(str,Rus("����������"));break;
			case 7: strcpy(str,Rus("���������"));break;
			case 8: strcpy(str,Rus("�����������"));break;
			case 9: strcpy(str,Rus("���������"));break;
			case 10: strcpy(str,Rus("���"));break;
		}
	
	switch(n%10)
		{
			case 1: strcpy(str1,Rus("����"));break;
			case 2: strcpy(str1,Rus("���"));break;
			case 3: strcpy(str1,Rus("���"));break;
			case 4: strcpy(str1,Rus("������"));break;
			case 5: strcpy(str1,Rus("����"));break;
			case 6: strcpy(str1,Rus("�����"));break;
			case 7: strcpy(str1,Rus("����"));break;
			case 8: strcpy(str1,Rus("������"));break;
			case 9: strcpy(str1,Rus("������"));break;
			case 10: strcpy(str1,Rus("������"));break;
		}
		cout<<str<<" "<<str1<<endl;
	 	getch();
	 	return 0;
	 }
}
else cout<<Rus("�� ����� ����� �� �� ��������� ����������");
}


	

