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

class JudgeSystem {
public:

    //构造函数
    JudgeSystem();

    //生成
    void Born(char born_team, char born_type, char born_index);

    //攻击
    void Fight(char fight_team, char fight_index, char fight_attack);

    //发射
    void Hit(char hit_team, char hit_index, char hit_heat);

    //输出
    void ShowInfo(char show_team, char show_index);

};


#endif //CODE_JUDGESYSTEM_H
