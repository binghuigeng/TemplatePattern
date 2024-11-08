#include "Coffee.h"

Coffee::Coffee()
{
    std::cout << "Coffee 构造" << std::endl;
}

Coffee::~Coffee()
{
    std::cout << "Coffee 析构" << std::endl;
}

void Coffee::BoildWater()
{
    std::cout << "煮山泉水" << std::endl;
}

void Coffee::Brew()
{
    std::cout << "冲泡咖啡" << std::endl;
}

void Coffee::PourInCup()
{
    std::cout << "咖啡倒入杯中" << std::endl;
}

void Coffee::AddSomething()
{
    std::cout << "加糖，加牛奶" << std::endl;
}

void Coffee::Make()
{
    std::cout << "Coffee Make" << std::endl;
}

void Coffee::Work()
{
    std::cout << "Coffee Work" << std::endl;
}
