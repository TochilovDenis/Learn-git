#include<iostream>
using namespace std;
class CHuman
{
    static int mAmountOfHuman;
public:
    CHuman() { mAmountOfHuman++; }
    static void PrintAmountOfHuman()
    {
        cout << mAmountOfHuman << endl;
    }
};
int CHuman::mAmountOfHuman = 0;

int main()
{
    CHuman h1;
    CHuman h2;
    CHuman h3;
    CHuman h4;
    CHuman::PrintAmountOfHuman();
    return 0;
}
