#ifndef DRINKTEMPLATE_H
#define DRINKTEMPLATE_H

/// @brief 模板方法模式
/// 在父类中定义一个方法的抽象，由它的子类来实现细节的处理，在子类实现详细的处理算法时并不会改变算法中的执行次序

#include <iostream>

/// @brief 做饮料模板
class DrinkTemplate
{
public:
    DrinkTemplate();
    virtual ~DrinkTemplate();

    /// @brief 煮水
    virtual void BoildWater() = 0;

    /// @brief 冲泡
    virtual void Brew() = 0;

    /// @brief 倒入杯中
    virtual void PourInCup() = 0;

    /// @brief 加辅助材料
    virtual void AddSomething() = 0;

#if 0
    /// @brief 煮水
    virtual void BoildWater();

    /// @brief 冲泡
    virtual void Brew();

    /// @brief 倒入杯中
    virtual void PourInCup();

    /// @brief 加辅助材料
    virtual void AddSomething();
#endif

    /// @brief 模板方法
    void Make();

    /// @brief 工作
    virtual void Work();

};

#endif // DRINKTEMPLATE_H
