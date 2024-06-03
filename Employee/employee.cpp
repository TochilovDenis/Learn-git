/*
Задача 2024.05.31.06

[+] Создайте интерфейс Работника, у которого есть метод Работать.
[+] Создайте классы Бухгалтер, Менеджер и Кассир, реализующие интерфейс класса Работник.

[+] Создайте вектор класс СписокРаботников, в котором будет лежать веткор объектов класса Работник.
   [+] У этого класса есть метод Add, который добавляет работника в список и метод РаботатьВсем, который вызывает метод Работать у каждого из работников.

[+] Создайте класс ЛенивыйПрограммист, у которого есть метод ТипаРабота, который реализует следующую логику:

[+] Программист работает если выпадает рандомное чётное число, и не работает если не четное.

[+] Адаптируйте Ленивого программиста, чтобы он реализовал интерфейс Работника и добавьте его в СписокРаботников.
*/
#include <iostream>
#include <vector>
#include <ctime>
#include <string>
using namespace std;


#define CASHIER 0
#define MANAGER 1
#define ACCOUNTANT 2
#define LAZYDEVELOPER 3
#define TOTALWORKERS 4

// Работник
class Employee {
public:
	virtual void toWork() = 0;
};
// Бухгалтер
class Accountant : public Employee {
	string mName;
public:
	Accountant(string n) : mName(n) {}
	// выводит на экран
	void toWork() {
		cout << "Бухгалтер " << mName << " работает\n";
	}
};
// Менеджер
class Manager : public Employee {
	string mName;
public:
	Manager(string n) : mName(n) {}
	// выводит на экран
	void toWork() {
		cout << "Менеджер " << mName << " работает\n";
	}
};
// Кассир
class Cashier : public Employee {
	string mName;
public:
	Cashier(string n) : mName(n) {}
	// выводит на экран
	void toWork() {
		cout << "Кассир " << mName << " работает\n";
	}
};


// ЛенивыйПрограммист - Адаптер
class LazyProgrammer {
	string mName;
public:
	LazyProgrammer(string n) : mName(n) {}
	void KindatoWork() {
		string result = (rand() % 100) % 2 == 0 ?
			"Ленивый " + mName + " программист работает" :
			"Ленивый " + mName + " программист не работает";
		cout << result << endl;
	}
};

//
class LazyProgrammerAdapter : public Employee {
	LazyProgrammer* programmer;
public:
	LazyProgrammerAdapter(LazyProgrammer* p) : programmer(p) {}
	void toWork() {
		programmer->KindatoWork();
	}

};

string getRandomName() {
	const int namesCount = 5; // Количество имен
	string names[] = { "Паша", "Вася", "Денис", "Иван", "Николай" };
	return names[rand() % namesCount] + "#" + to_string(rand() % 100);
}


Employee* getRandonEmployee() {
	int randomChoice = rand() % TOTALWORKERS;
	string name = getRandomName();
	switch (randomChoice)
	{
	case CASHIER:
		return new Cashier(name);
	case MANAGER:
		return new Manager(name);
	case ACCOUNTANT:
		return new Accountant(name);
	case LAZYDEVELOPER:
		return new LazyProgrammerAdapter(new LazyProgrammer(name));
	default:
		return nullptr;
		break;
	}
}

// Список Работников
class ListEmployees {
	vector<Employee*> employees;
	int TotalOfEmployees;
public:
	ListEmployees(int t) :TotalOfEmployees(t) {}
	void Add(Employee* e) {
		employees.push_back(e);
	}
	// выводит на экран
	void WorkAll() {
		for (Employee* e : employees) {
			e->toWork();
		}
	}
	void FillRandomEmployee() {
		for (size_t i = 0; i < TotalOfEmployees; i++)
			employees.push_back(getRandonEmployee());
	}
};
int main() {
	setlocale(LC_ALL, "");
	srand(time(0));
	
	int amountOfEmployees = 10;
	ListEmployees l(amountOfEmployees);

	l.FillRandomEmployee();
	
	l.WorkAll();

	return 0;
}
