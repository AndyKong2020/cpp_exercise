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
    if(health_point_ <= 0)
    {
        cout << team_ << " " << index_ << "died" << endl;
        health_point_ = 0;
    }

}