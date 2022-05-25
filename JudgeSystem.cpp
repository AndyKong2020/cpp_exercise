//
//作者: 明月清风我
//email: andy.kong@nuaa.edu.cn
//时间: 2022/5/21 20:49
//描述:
//

#include "JudgeSystem.h"
#include "Robot.h"
#include "Infantry.h"
#include "Sentry.h"
#include "Hero.h"
#include "Engineer.h"



//构造函数
JudgeSystem::JudgeSystem(){}

void JudgeSystem::Born()
{
    int addNum=0;
    cout << "输入要新建的机器人个数" << endl;
    cin >> addNum;
    if (addNum > 0)
    {
        int newSize = this->RoboNum + addNum;
        Robot** newSpace = new Robot* [newSize];

        if (this->RoboArry != NULL)
        {
            for (int i = 0; i < this->RoboNum; i++)
            {
                newSpace[i] = this->RoboArry[i];
            }
        }
        for (int i = 0; i < addNum; i++)
        {
            int id;
            char team;
            char type;
            int team_in;

            cout << "请输入第"<<i+1<<"个机器人所属队伍" << endl;
            cin >> team;
            cout << "请输入第"<<i+1<<"个机器人的编号" << endl;
            cin >> id;
            cout << "请输入第"<<i+1<<"个机器人的兵种" << endl;
            cin >> type;
            Robot* robot = NULL;

            //转换成枚举量
            if (team = 'R')
            {
                team_in = 0;
            }
            else
            {
                team_in = 1;
            }

            switch (type)
            {
                case 'B':
                    robot = new Infantry(team, id);
                    break;
                case 'S':
                    robot = new Sentry(team, id);
                    break;
                case 'Y':
                    robot = new Hero(team, id);
                    break;
                case 'G':
                    robot = new Engineer(team, id);
                    break;
                default:
                    break;
            }
            newSpace[this->RoboNum + i] = robot;


        }
        delete[] this->RoboArry;
        this->RoboArry = newSpace;

        this->RoboNum = newSize;
        cout << "成功添加" << addNum << "个机器人" << endl;


    }
    else
    {
        cout << "输入数据有误！" << endl;
    }

}

void JudgeSystem::Fight()
{
    int id;
    char team;
    int atk;
    enum Team {kred, kblue} team_in;

    cout << "请输入所属队伍" << endl;
    cin >> team;
    cout << "请输入编号" << endl;
    cin >> id;
    cout << "请输入伤害量" << endl;
    cin >> atk;

    //转换成枚举量
    if (team == 'R')
    {
        team_in = kred;
    }
    else
    {
        team_in = kblue;
    }

    //遍历查找
    for(int i = 0; i < RoboNum; i++)
    {
        if(RoboArry[i]->team_ == team_in && RoboArry[i]->index_ == id)
        {
            RoboArry[i]->Fight(atk);//扣血
        }
    }
}

void JudgeSystem::Hit()
{
    int id;
    char team;
    int ht;
    enum Team {kred, kblue} team_in;

    cout << "请输入所属队伍" << endl;
    cin >> team;
    cout << "请输入编号" << endl;
    cin >> id;
    cout << "请输入弹丸数量" << endl;
    cin >> ht;

    //转换成枚举量
    if (team == 'R')
    {
        team_in = kred;
    }
    else
    {
        team_in = kblue;
    }

    //遍历查找
    for(int i = 0; i < RoboNum; i++)
    {
        if(RoboArry[i]->team_ == team_in && RoboArry[i]->index_ == id)
        {
            RoboArry[i]->Hit(ht);//加热量值
        }
    }
}