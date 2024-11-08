#include <iostream>
#include "Coffee.h"
#include "Tea.h"

using namespace std;

int main()
{
    DrinkTemplate* coffee = new Coffee;
    coffee->Make();
    coffee->Work();

    cout << "---------------------------------------------" << endl;

    DrinkTemplate* tea = new Tea;
    tea->Make();
    tea->Work();

    cout << "*********************************************" << endl;

    delete coffee;
    coffee = nullptr; // 防止悬空指针
    delete tea;
    tea = nullptr; // 防止悬空指针

    return 0;
}
