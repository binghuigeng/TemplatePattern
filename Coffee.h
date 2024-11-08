#ifndef COFFEE_H
#define COFFEE_H

#include "DrinkTemplate.h"

/// @brief 做咖啡：实现做饮料模板
class Coffee : public DrinkTemplate
{
public:
    Coffee();
    ~Coffee();

    /// @brief 煮水
    void BoildWater();

    /// @brief 冲泡
    void Brew();

    /// @brief 倒入杯中
    void PourInCup();

    /// @brief 加辅助材料
    void AddSomething();

    /// @brief 模板方法
    void Make();

    /// @brief 工作
    void Work();
};

#endif // COFFEE_H
