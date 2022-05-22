//
//作者: 明月清风我
//email: andy.kong@nuaa.edu.cn
//时间: 2022/5/21 20:46
//描述:
//

#include "Infantry.h"

//构造函数
Infantry::Infantry(Team team_, unsigned short index_)
{
    this->team_ = team_;
    this->index_ = index_;
}

//攻击
void Infantry::Fight(int attack)
{
    health_point_ -= attack;
    if(health_point_ <= 0)
    {
        cout << team_ << " " << index_ << "died" << endl;
        health_point_ = 0;
    }
    else if(health_point_ > 100)
    {
        health_point_ = 100;
    }

}

//发射
void Infantry::Hit(int heat)
{
    heat_point += heat;
    if(heat_point < 0)
    {
        health_point_ = 0;
    }
    else if(heat_point >= 100)
    {
        cout << team_ << " " << index_ << "died" << endl;
        heat_point = 100;
    }

}

//信息输出
void Infantry::Print()
{
    cout << "team_" << team_ << "index_" << index_ << "health_point_" << health_point_ << "heat_point" << heat_point << endl;
}