#include <queue>
#include <conio.h>
#include <iostream>
#include <stack>
#include <clocale>
using namespace std;

struct Mystruct {
	int stack_number;
	char choise;
	int data;
};

int main()
{
	setlocale(LC_ALL,"rus");
	int number, stack_number, stack_data;
	char stack_choise;
	queue <Mystruct> Myqueue;
	do 
	{
		cout << "¬вод n - кол-во стеков : ";
		cin >> number;
	} while (number <= 0);
	stack <int> *Mystack = new stack <int>[number];
	do
	{
		do 
		{
			printf("\n¬вод номер стека(0 если хотите выйти): ");
			cin >> stack_number;
		} while (stack_number<0 || stack_number>number);
		if (!stack_number)
			break;
		do 
		{
			printf("\n¬вод что вы хотите сделать со стеком ('A' or 'D'): ");
			cin >> stack_choise;
		} while (stack_choise != 'A' && stack_choise != 'D');
		printf("\n¬вод элемента который вы хотите добавить: ");
		cin >> stack_data;
		Myqueue.push({stack_number, stack_choise, stack_data});
	} while (stack_number);

	while (!Myqueue.empty())
	{
		stack_number = Myqueue.front().stack_number;
		stack_choise = Myqueue.front().choise;
		stack_data = Myqueue.front().data;
		
		if (stack_choise == 'D')
		{
			if (!Mystack[stack_number - 1].empty())
				Mystack[stack_number - 1].pop();
		}
		else
			Mystack[stack_number - 1].push(stack_data);
		Myqueue.pop();
	}
	printf("—теки: \n");
	for (int i = 0; i < number; i++)
	{
		printf("%d: ", i + 1);
		while (!Mystack[i].empty())
		{
			printf("%d ", Mystack[i].top());
			Mystack[i].pop();
		}
		printf("\n");
	}
	_getch();
    return 0;
}

