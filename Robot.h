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
    virtual void Fight(int attack) = 0;

    //发射
    virtual void Hit(int heat) = 0;

    //所属队伍
    enum Team {kred, kblue} team_;

    //编号
    unsigned short index_;

    //血量上限
    int total_health_;

    //剩余血量
    int health_point_;

    //武器口径
    enum Caliber {kseventeen_mm = 15, kfortytwo_mm = 30} caliber_;

    //热量上限
    int ceiling_heat;

    //增加热量
    int heat_add;

    //目前热量
    int heat_point;


    //信息输出
    virtual void Print() = 0;

};


#endif //CODE_ROBOT_H
