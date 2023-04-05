#include <iostream>
#include <string> //Библиотека позволяющая работать со строками в С++
 

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Cимвольный массив из языка С
	/*char c_ctr[]{'H', 'i', '!', '\0'};
	for (int i = 0; i < 3; i++)
		std::cout << c_ctr[i];
	std::cout << std::endl;

	std::cout << c_ctr << std::endl;

	char c_ctr2[]{ "Hello world!" }; //в двойных ковычках автоматичсски идет \0. Писать его не нужно
	std::cout << c_ctr2 << std::endl;*/

	//Строка-Объект класса string

	/*std::string str; // строковая переменная, пока мы не обозначили переменную str  будет выводиться пустая строка
	std::cout << str << std::endl;
	str = "Hello World!";
	std::cout << str << std::endl;
	str = "Bye World!"; // str не является постоянной, можно менять по ходу написания програмы
	std::cout << str << std::endl;
	str += "!!!!! :("; // добавление текста в конце строки
	std::cout << str << std::endl; // Bye World!!!!!! :(
	std::cout << str + "..." << std::endl; // Bye World!!!!!! :( ...*/

	// Ввод строки 
	/*std::cout << "Привет! Как тебя зовут?\nВвод -> ";
	std::string name;
	std::cin >> name; //Ввод одного слова
	std::cout << "Привет, " << name << "!\n";

	std::cin.ignore();  // вводите между cin и getline, вводится ТОЛЬКО если вначеле использовали cin, а потом getline

	std::cout << "А кем ты работаешь?\nВвод -> ";
	std::string job;
	std::getline(std::cin, job);       // getline - получить линию(строку)
	std::cout << "Ого, " << job << "? Круто!";

	std::cout << "А сколько тебе лет?\nВвод -> ";
	int age;
	std::cin >> age;
	std::cout << "Когда то и мне было " << age << " лет ...\n";*/

	// Методы строк
	/*std::string my_str = "Hello World!";

	// Методы  length b size
	// std::cout << my_str.length() << std::endl; // на экране 12. то есть метод length возвращает длину строки. именно длину
	// std::cout << my_str.size() << std::endl; // на экране 12. то есть метод size возвращает длину строки. именно длину
	// то есть разницы никакой нет, но именно в С++ добавили метод size для облегчения написания. 
	// Но метод size есть не вов всех языках, в то время как length есть во всех языках

	// Метод insert, вставляющий подстроку в строку 
	// my_str.insert(3, "WWW");
	// std::cout << my_str << std::endl; // на экране helWWWlo world

	// Метод replace, заменяющий часть строки на новую
	// my_str.replace(3, 5, "WWW"); // (позиция, кол-во удаляепмых символов, то что будет вставляться)
	// std::cout << my_str << std::endl;

	// Метод find, возвращающий позицию первого вхождения подстроки в строку

	// std::cout << my_str.find("l") << std::endl; // на экране 2
	// std::cout << my_str.find("l", 5) << std::endl; // на экране 9

	// Метод rfind, возвращающий позицию вхождения подстроки в строку
	// std::cout << my_str.rfind("o") << std::endl; // на экране 7
	// std::cout << my_str.find("o", 6) << std::endl; // на экране 4

	// Метод substr, возвращающий подстроку из строки
	// std::cout << my_str.substr(4) << std::endl; // на экране o world!
	// std::cout << my_str.substr(4, 5) << std::endl; // на экране  o wor*/

	// Функции для работы со строками
	// Функция to_string, возвращающая результат превращения числа в строку
	int num = 123;
	std::string num_str = std::to_string(num); // будет записана строка "123"
	num_str += '!'; // на экране "123!"
	std::cout << "num_str = " << num_str << std::endl;

	// Функция stoy, возвращающая число int, взятое из строки 
	num_str = "1234";
	num = std::stoi(num_str);
	num++;
	std::cout << "num = " << num << std::endl;




	return 0;

}