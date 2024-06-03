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
using namespace std;

const int namesCount = 5; // Количество имен
string names[] = { "Паша", "Вася", "Денис", "Иван", "Николай" };


// Работник
class Employee {
public:
	virtual void toWork() = 0;
};
// Бухгалтер
class Accountant : public Employee {
	string mName;
public:
	Accountant() {}
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
	Manager() {}
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
	Cashier() {}
	Cashier(string n) : mName(n) {}
	// выводит на экран
	void toWork() {
		cout << "Кассир " << mName << " работает\n";
	}
};

// Список Работников
class ListEmployees{
	vector<Employee*> employees;
public:
	void Add(Employee* e) {
		employees.push_back(e);
	}
	string RandomName() {
		return names[rand() % namesCount];
	}
	// выводит на экран
	void WorkAll() {
		for (Employee* e : employees) {
			e->toWork();
		}
	}
};

// ЛенивыйПрограммист - Адаптер
class LazyProgrammer : public Employee {
	string mName;
	bool mustWork() {
		return rand() % 2 == 0;
	}
public:
	LazyProgrammer() {}
	LazyProgrammer(string n) : mName(n) {}
	void toWork() {
		mustWork() ? cout << "Ленивый " << mName << " программист работает\n" :
			cout << "Ленивый " << mName << " программист не работает\n";
	}
};

int main() {
	setlocale(LC_ALL, "");
	srand(time(0));
	ListEmployees l;

	// Добавляем работников
	l.Add(new Accountant(l.RandomName()));
	l.Add(new Manager(l.RandomName()));
	l.Add(new Cashier(l.RandomName()));

	// Добавляем ленивого программиста
	l.Add(new LazyProgrammer(l.RandomName()));

	// Вызываем метод РаботатьВсем()
	l.WorkAll();

	return 0;
}
