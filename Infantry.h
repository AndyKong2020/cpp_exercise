//
//作者: 明月清风我
//email: andy.kong@nuaa.edu.cn
//时间: 2022/5/21 20:46
//描述:
//

#ifndef CODE_INFANTRY_H
#define CODE_INFANTRY_H

#include <iostream>
#include <string>
#include "Robot.h"


using namespace std;

class Infantry :public Robot{
public:

    //构造函数
    Infantry(Team team_, unsigned short index_);

    //攻击
    void Fight(int attack);

    //发射
    void Hit(int heat);

    //武器口径
    enum Caliber {kseventeen_mm, kfortytwo_mm} ;
    Caliber caliber_ = kseventeen_mm;

    //血量上限
    int total_health_ = 100;

    //剩余血量
    int health_point_ = 100;

    //热量上限
    int ceiling_heat = 200;

    //目前热量
    int heat_point = 0;


    //信息输出
    void Print();


};


#endif //CODE_INFANTRY_H
