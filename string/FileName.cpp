#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	string str_1, str_2;

	char symbol;

	str_1 = "Hello, Ivan";

	cout << "\n������� ������\n";

	getline(cin, str_2);

	if (str_1 == str_2)
	{
		str_1 += str_2;
	}
	else
	{
		str_1 = str_2;
	}

	//����� ������� � ������������ �������
	cout << str_1.front() << str_1.back();

	//����� ������ ����������� 
	for (int i = 0; i < str_1.size(); i++)
	{
		cout << str_1[i];
	}

	//����� ������ ����������� 
	for (int i = 0; i < str_1.size(); i++)
	{
		cout << str_1.at(i);
	}

	//�������� ������ 
	str_1.clear();

	cout << "\n������� ������\n";

	getline(cin, str_1);

	cout << "\n������� ���������\n";

	getline(cin, str_2);

	if (str_1.find(str_2) == string::npos)
	{
		cout << "\n��������� �� �������\n";
	}
	else
	{
		cout << str_1.find(str_2);
	}

	cout << "\n������� ������\n";

	cin >> symbol;

	//� ����� ������
	str_1.append(1, symbol);

	//�� �������
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