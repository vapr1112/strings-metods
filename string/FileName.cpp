#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	string str_1, str_2;

	char symbol;

	str_1 = "Hello, Ivan";

	cout << "\n¬ведите строку\n";

	getline(cin, str_2);

	if (str_1 == str_2)
	{
		str_1 += str_2;
	}
	else
	{
		str_1 = str_2;
	}

	//вывод первого и последнгегьо символа
	cout << str_1.front() << str_1.back();

	//вывод строки посимвольно 
	for (int i = 0; i < str_1.size(); i++)
	{
		cout << str_1[i];
	}

	//вывод строки посимвольно 
	for (int i = 0; i < str_1.size(); i++)
	{
		cout << str_1.at(i);
	}

	//очищение строки 
	str_1.clear();

	cout << "\n¬ведите строку\n";

	getline(cin, str_1);

	cout << "\n¬ведите подстроку\n";

	getline(cin, str_2);

	if (str_1.find(str_2) == string::npos)
	{
		cout << "\nподстрока не найдена\n";
	}
	else
	{
		cout << str_1.find(str_2);
	}

	cout << "\nвведите символ\n";

	cin >> symbol;

	//в конец строки
	str_1.append(1, symbol);

	//по индексу
	str_1.insert(4, 1, symbol);

	for (int i = 0; i < str_1.size(); i++)
	{
		cout << str_1[i];
	}

	str_1.erase(5, 3);

	str_1.replace(2, 5, str_2);

	puts(str_1.c_str());

	return 0;
}