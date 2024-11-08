#include "Tea.h"

Tea::Tea()
{
    std::cout << "Tea 构造" << std::endl;
}

Tea::~Tea()
{
    std::cout << "Tea 析构" << std::endl;
}

void Tea::BoildWater()
{
    std::cout << "煮自来水" << std::endl;
}

void Tea::Brew()
{
    std::cout << "冲泡铁观音" << std::endl;
}

void Tea::PourInCup()
{
    std::cout << "茶水倒入杯中" << std::endl;
}

void Tea::AddSomething() {
    std::cout << "加糖,加大蒜" << std::endl;
}

void Tea::Make()
{
    std::cout << "Tea Make" << std::endl;
}

void Tea::Work()
{
    std::cout << "Tea Work" << std::endl;
}
