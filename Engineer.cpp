//
//作者: 明月清风我
//email: andy.kong@nuaa.edu.cn
//时间: 2022/5/21 20:48
//描述:
//

#include "Engineer.h"

//构造函数
Engineer::Engineer(Team team_, unsigned short index_)
{
    this->team_ = team_;
    this->index_ = index_;
}

//攻击
void Engineer::Fight(int attack)
{
    health_point_ -= attack;
    if(health_point_ <= 0)
    {
        cout << team_ << " " << index_ << "died" << endl;
        health_point_ = 0;
    }
    else if(health_point_ > total_health_)
    {
        health_point_ = total_health_;
    }

}

//发射
void Engineer::Hit(int heat)
{
    cout << "error" << endl;
}

//信息输出
void Engineer::Print()
{
    cout << " team_" << team_ << " type_engineer" << " index_" << index_ << " health_point_" << health_point_ << endl;
}