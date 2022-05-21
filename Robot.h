//
//作者: 明月清风我
//email: andy.kong@nuaa.edu.cn
//时间: 2022/5/21 20:45
//描述:
//

#ifndef CODE_ROBOT_H
#define CODE_ROBOT_H

#include <iostream>
#include <string>

using namespace std;

class Robot {
public:

    //攻击
    virtual void Fight() = 0;

    //发射
    virtual void Hit() = 0;

    //所属队伍
    enum Team {kred, kblue};

    //编号
    unsigned short index_;

    //血量上限
    int total_health_;

    //扣除血量
    int health_minus;

    //剩余血量
    int health_point;

    //武器口径
    enum Caliber {kseventeen_mm, kfortytwo_mm};

    //热量上限
    int ceiling_heat;

    //增加热量
    int heat_add;

    //目前热量
    int heat_point;


};


#endif //CODE_ROBOT_H
