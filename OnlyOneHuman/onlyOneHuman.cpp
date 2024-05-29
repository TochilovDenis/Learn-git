#include <iostream>
using namespace std;

class OnlyOneHuman {
    	static OnlyOneHuman* instance;

public:
    	static OnlyOneHuman* getHuman() {
        	if (!instance) {
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
    OnlyOneHuman* h3 = OnlyOneHuman::getHuman();
    cout << h1 << "\n" << h2 << "\n" << h3 << endl;
}
