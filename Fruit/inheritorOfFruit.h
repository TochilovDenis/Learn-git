#include "fruit.h"

// Создаем класс наследник
class Apple : public Fruit {
    	string mName; // Свойство для хранения имени яблока
public:
    	Apple(string n) : mName(n) {}; // Ctor параметризованный
	// Метод для печати информации о яблоке
    	void Print() { cout << "Apple: " << mName << "\n"; }
};	

// тот же
class Banana : public Fruit {
   	 string mName;  // Свойство для хранения имени банана
public:
    	Banana(string n) : mName(n) {};  // Ctor параметризованный
   	// Метод для печати информации о банане
    	void Print() { cout << "Banana: " << mName << "\n"; }
};
