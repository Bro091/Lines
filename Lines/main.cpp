#include <iostream>
#include <string> //���������� ����������� �������� �� �������� � �++
 

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// C��������� ������ �� ����� �
	/*char c_ctr[]{'H', 'i', '!', '\0'};
	for (int i = 0; i < 3; i++)
		std::cout << c_ctr[i];
	std::cout << std::endl;

	std::cout << c_ctr << std::endl;

	char c_ctr2[]{ "Hello world!" }; //� ������� �������� ������������� ���� \0. ������ ��� �� �����
	std::cout << c_ctr2 << std::endl;*/

	//������-������ ������ string

	/*std::string str; // ��������� ����������, ���� �� �� ���������� ���������� str  ����� ���������� ������ ������
	std::cout << str << std::endl;
	str = "Hello World!";
	std::cout << str << std::endl;
	str = "Bye World!"; // str �� �������� ����������, ����� ������ �� ���� ��������� ��������
	std::cout << str << std::endl;
	str += "!!!!! :("; // ���������� ������ � ����� ������
	std::cout << str << std::endl; // Bye World!!!!!! :(
	std::cout << str + "..." << std::endl; // Bye World!!!!!! :( ...*/

	// ���� ������ 
	/*std::cout << "������! ��� ���� �����?\n���� -> ";
	std::string name;
	std::cin >> name; //���� ������ �����
	std::cout << "������, " << name << "!\n";

	std::cin.ignore();  // ������� ����� cin � getline, �������� ������ ���� ������� ������������ cin, � ����� getline

	std::cout << "� ��� �� ���������?\n���� -> ";
	std::string job;
	std::getline(std::cin, job);       // getline - �������� �����(������)
	std::cout << "���, " << job << "? �����!";

	std::cout << "� ������� ���� ���?\n���� -> ";
	int age;
	std::cin >> age;
	std::cout << "����� �� � ��� ���� " << age << " ��� ...\n";*/

	// ������ �����
	/*std::string my_str = "Hello World!";

	// ������  length b size
	// std::cout << my_str.length() << std::endl; // �� ������ 12. �� ���� ����� length ���������� ����� ������. ������ �����
	// std::cout << my_str.size() << std::endl; // �� ������ 12. �� ���� ����� size ���������� ����� ������. ������ �����
	// �� ���� ������� ������� ���, �� ������ � �++ �������� ����� size ��� ���������� ���������. 
	// �� ����� size ���� �� ��� ���� ������, � �� ����� ��� length ���� �� ���� ������

	// ����� insert, ����������� ��������� � ������ 
	// my_str.insert(3, "WWW");
	// std::cout << my_str << std::endl; // �� ������ helWWWlo world

	// ����� replace, ���������� ����� ������ �� �����
	// my_str.replace(3, 5, "WWW"); // (�������, ���-�� ���������� ��������, �� ��� ����� �����������)
	// std::cout << my_str << std::endl;

	// ����� find, ������������ ������� ������� ��������� ��������� � ������

	// std::cout << my_str.find("l") << std::endl; // �� ������ 2
	// std::cout << my_str.find("l", 5) << std::endl; // �� ������ 9

	// ����� rfind, ������������ ������� ��������� ��������� � ������
	// std::cout << my_str.rfind("o") << std::endl; // �� ������ 7
	// std::cout << my_str.find("o", 6) << std::endl; // �� ������ 4

	// ����� substr, ������������ ��������� �� ������
	// std::cout << my_str.substr(4) << std::endl; // �� ������ o world!
	// std::cout << my_str.substr(4, 5) << std::endl; // �� ������  o wor*/

	// ������� ��� ������ �� ��������
	// ������� to_string, ������������ ��������� ����������� ����� � ������
	int num = 123;
	std::string num_str = std::to_string(num); // ����� �������� ������ "123"
	num_str += '!'; // �� ������ "123!"
	std::cout << "num_str = " << num_str << std::endl;

	// ������� stoy, ������������ ����� int, ������ �� ������ 
	num_str = "1234";
	num = std::stoi(num_str);
	num++;
	std::cout << "num = " << num << std::endl;




	return 0;

}