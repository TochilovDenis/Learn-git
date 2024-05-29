#include <iostream>
using namespace std;

// Создаем класс 
class OnlyOneHuman {
private:
	// создаем статическую переменную
    	static OnlyOneHuman* instance;
	// Ctor по умолчанию, который вызывается при создании объектов класса.
    	OnlyOneHuman() {} 
public:
	// Создаем метод возвращает единственный экземпляр класса OnlyOneHuman.
    	static OnlyOneHuman* getInstance() {
		 // Если экземпляр еще не создан (instance),
		 // то он создается с помощью оператора new.
        	if (!instance) {
			instance = new OnlyOneHuman();
        	}
        	return instance;
    	}
	// Метод printAddress() выводит адрес текущего объекта
    	void printAddress() {
        	cout << "Адрес объекта: " << this << endl;
    	}
};
// Инициализация статического указателя instance нулевым значением.
OnlyOneHuman* OnlyOneHuman::instance = nullptr;

int main() {
	// Создание трех объектов типа OnlyOneHuman через метод getInstance().
    	OnlyOneHuman* obj1 = OnlyOneHuman::getInstance();
	OnlyOneHuman* obj2 = OnlyOneHuman::getInstance();
	OnlyOneHuman* obj3 = OnlyOneHuman::getInstance();
        
	// Вызов метода printAddress() для каждого из трех объекто        
	// // Вызов метода printAddress() для каждого из трех объектов.в.
    	obj1->printAddress();
    	obj2->printAddress();
	obj3->printAddress();

     	return 0;
}
