//
//作者: 明月清风我
//email: andy.kong@nuaa.edu.cn
//时间: 2022/5/21 20:49
//描述:
//

#ifndef CODE_JUDGESYSTEM_H
#define CODE_JUDGESYSTEM_H

#include <iostream>
#include <string>
#include "Robot.h"
#include "Infantry.h"
#include "Hero.h"
#include "Engineer.h"
#include "Sentry.h"

using namespace std;

class JudgeSystem {
public:

    //构造函数
    JudgeSystem();

    //生成
    void Born();

    //攻击
    void Fight();

    //发射
    void Hit();

    //输出
    void ShowInfo();

    int RoboNum;

    Robot** RoboArry;

};


#endif //CODE_JUDGESYSTEM_H
