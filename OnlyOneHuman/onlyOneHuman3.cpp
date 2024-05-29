#include <iostream>

class OnlyOneHuman {
    static OnlyOneHuman* instance;

public:
    static OnlyOneHuman* getHuman() {
        if (!instance)
        {
            instance = new OnlyOneHuman();
        }
        return instance;
    }
};

OnlyOneHuman* OnlyOneHuman::instance = nullptr;

int main()
{
    OnlyOneHuman* h1 = OnlyOneHuman::getHuman();
    OnlyOneHuman* h2 = OnlyOneHuman::getHuman();
    OnlyOneHuman* h3 = new OnlyOneHuman();
    OnlyOneHuman* h4 = new OnlyOneHuman();

    std::cout << "h1: " << h1 << "\n" << "h2: " << h2 << "\n\n" << "h3: " << h3 << "\n" << "h4: " << h4 << "\n";
}

//Почему значения h1 и  h2 одинаковые, а h3 и h4 отличаются?
