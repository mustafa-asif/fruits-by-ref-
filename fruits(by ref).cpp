#include <iostream>
#include <string>
using namespace std;

void cal(int x, int kg, int& total)
{
	total = x * kg;
}
int main()
{
	int total;
	int arr[5] = { 120, 130, 140, 150, 160 };
	string arrFRuits[5] = { "apple", "banana", "mango", "straw", "peach" };
	while (true)
	{

		for (int i = 0; i < 5; i++)
		{
			cout << "we have  " << arrFRuits[i] << endl;
		}
		string choose;
		cin >> choose;
		bool doexists = false;
		for (int i = 0; i < 5; i++)
		{
			if (choose == arrFRuits[i])
			{
				int kg;
				cout << "enter kg" << endl;
				cin >> kg;
				cal(arr[i], kg, total);
				doexists = true;

			}
		}

		if (!doexists)
		{
			cout << "no fruits found" << endl;
			total = 0;
			break;
		}
		cout << "the total is " << total << endl;
	}

}
