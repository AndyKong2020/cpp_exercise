//
//作者: 明月清风我
//email: andy.kong@nuaa.edu.cn
//时间: 2022/5/21 20:47
//描述:
//

#ifndef CODE_SENTRY_H
#define CODE_SENTRY_H

#include <iostream>
#include <string>
#include "Robot.h"

using namespace std;

class Sentry :public Robot{
public:

    //构造函数
    Sentry(Team team_, unsigned short index_);

    //攻击
    void Fight(int attack);

    //发射
    void Hit(int heat);

    //武器口径
    enum Caliber {kseventeen_mm, kfortytwo_mm} caliber_;

    //热量上限
    int ceiling_heat;

    //增加热量
    int heat_add;

    //目前热量
    int heat_point;

    //信息输出
    void Print();

};


#endif //CODE_SENTRY_H
