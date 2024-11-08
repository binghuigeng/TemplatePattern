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
    void BoildWater() override;

    /// @brief 冲泡
    void Brew() override;

    /// @brief 倒入杯中
    void PourInCup() override;

    /// @brief 加辅助材料
    void AddSomething() override;

    /// @brief 模板方法
    void Make();

    /// @brief 工作
    void Work() override;
};

#endif // COFFEE_H
