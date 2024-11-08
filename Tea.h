#ifndef TEA_H
#define TEA_H

#include "DrinkTemplate.h"

/// @brief 做茶：实现做饮料模板
class Tea : public DrinkTemplate
{
public:
    Tea();
    ~Tea();

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

#endif // TEA_H
