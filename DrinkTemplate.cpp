#include "DrinkTemplate.h"

DrinkTemplate::DrinkTemplate()
{
    std::cout << "DrinkTemplate 构造" << std::endl;
}

DrinkTemplate::~DrinkTemplate()
{
    std::cout << "DrinkTemplate 析构" << std::endl;
}

#if 0
void DrinkTemplate::BoildWater()
{
    std::cout << "煮水" << std::endl;
}

void DrinkTemplate::Brew()
{
    std::cout << "冲泡" << std::endl;
}

void DrinkTemplate::PourInCup()
{
    std::cout << "倒入杯中" << std::endl;
}

void DrinkTemplate::AddSomething()
{
    std::cout << "加辅助材料" << std::endl;
}
#endif

void DrinkTemplate::Make()
{
    BoildWater();
    Brew();
    PourInCup();
    AddSomething();
}

void DrinkTemplate::Work()
{
    std::cout << "DrinkTemplate Work" << std::endl;
}
