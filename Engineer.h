//
//作者: 明月清风我
//email: andy.kong@nuaa.edu.cn
//时间: 2022/5/21 20:48
//描述:
//

#ifndef CODE_ENGINEER_H
#define CODE_ENGINEER_H

#include <iostream>
#include <string>
#include "Robot.h"

using namespace std;

class Engineer :public Robot{
public:

    //构造函数
    Engineer(Team team_, unsigned short index_);

    //攻击
    void Fight(int attack) override;

    //发射
    void Hit(int heat) override;

    //血量上限
    int total_health_ = 200;

    //剩余血量
    int health_point_ = 200;

    //信息输出
    void Print() override;

};


#endif //CODE_ENGINEER_H
