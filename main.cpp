#include <iostream>
#include "Coffee.h"
#include "Tea.h"

using namespace std;

void Func(DrinkTemplate& d)
{
    d.Make();
    d.Work();
}

/// @brief 通过将基类的析构函数声明为虚函数，可以确保通过基类指针或引用删除派生类对象时，会首先调用派生类的析构函数，然后再调用基类的析构函数。
int main()
{
    // 通过基类指针删除派生类对象
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

#if 0
    // 通过基类引用删除派生类对象
    Coffee coffee;
    Func(coffee);

    cout << "---------------------------------------------" << endl;

    Tea tea;
    Func(tea);

    cout << "*********************************************" << endl;
#endif

    return 0;
}
