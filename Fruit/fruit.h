#include <iostream>
using namespace std;

// Создаем абстрактный клас
class Fruit {
public:
	// создаем виртуальную абстракную функцию
	virtual void Print() = 0;
};
