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

    if(heat_point == ceiling_heat)//判断热量值是否满
    {
        cout << team_ << " " << index_ << " died" << endl;
    }
    else
    {
        health_point_ -= attack;
        if(health_point_ <= 0)
        {
            cout << team_ << " " << index_ << " died" << endl;
            health_point_ = 0;
        }
        else if(health_point_ > total_health_)
        {
            health_point_ = total_health_;
        }
    }


}

//发射
void Infantry::Hit(int heat)
{
    if(health_point_ == 0)//判断生命值是否零
    {
        cout << team_ << " " << index_ << " died" << endl;
    }
    else
    {
        heat_point += heat*caliber_;
        if(heat_point < 0)
        {
            heat_point = 0;
        }
        else if(heat_point >= ceiling_heat)
        {
            cout << team_ << " " << index_ << " died" << endl;
            heat_point = ceiling_heat;
            health_point_ = 0;
        }
    }
}

//信息输出
void Infantry::Print()
{
    cout << " team_" << team_ << " type_infantry" << " index_" << index_ << " health_point_" << health_point_ << " heat_point_" << heat_point << endl;
}