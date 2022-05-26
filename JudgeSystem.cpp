//
//作者: 明月清风我
//email: andy.kong@nuaa.edu.cn
//时间: 2022/5/21 20:49
//描述:
//

#include <vector>
#include "JudgeSystem.h"
#include "Robot.h"
#include "Infantry.h"
#include "Sentry.h"
#include "Hero.h"
#include "Engineer.h"



//构造函数
JudgeSystem::JudgeSystem()= default;

/*void JudgeSystem::Born()
{
    vector<Infantry> vec_infantry;
    vector<Sentry> vec_sentry;
    vector<Hero> vec_hero;
    vector<Engineer> vec_engineer;


    int id;
    char team;
    char type;
    enum TeamIn {kred, kblue} team_in;

    cout << "请输入机器人所属队伍" << endl;
    cin >> team;
    cout << "请输入机器人的编号" << endl;
    cin >> id;
    cout << "请输入机器人的兵种" << endl;
    cin >> type;


    //转换成枚举量
    if (team == 'R')
    {
        team_in = kred;
    }
    else
    {
        team_in = kblue;
    }

    if (type == 'B')
    {



}*/

void JudgeSystem::Born()
{
    int addNum=0;
    cout << "Please input how many robots you want to create." << endl;
    cin >> addNum;
    if (addNum > 0)
    {
        int newSize = this->RoboNum + addNum;
        auto** newSpace = new Robot* [newSize];

        if (this->RoboArry != nullptr)
        {
            for (int i = 0; i < this->RoboNum; i++)
            {
                newSpace[i] = this->RoboArry[i];
            }
        }
        for (int i = 0; i < addNum; i++)
        {
            unsigned short id;
            char team;
            char type;
            enum TeamIn {kred, kblue} team_in;

            cout << "Please input the team of robot NO."<<i+1<<"(R/B)" << endl;
            cin >> team;
            cout << "Please input the ID of robot NO."<<i+1<< endl;
            cin >> id;
            cout << "Please input the type of robot NO."<<i+1<<"(B/S/Y/G)" << endl;
            cin >> type;
            Robot* robot = nullptr;


            //转换成枚举量
            if (team == 'R')
            {
                team_in = kred;
            }
            else
            {
                team_in = kblue;
            }

            switch (type)
            {
                case 'B':
                    robot = new Infantry(static_cast<Robot::Team>(team_in), id);
                    break;
                case 'S':
                    robot = new Sentry(static_cast<Robot::Team>(team_in), id);
                    break;
                case 'Y':
                    robot = new Hero(static_cast<Robot::Team>(team_in), id);
                    break;
                case 'G':
                    robot = new Engineer(static_cast<Robot::Team>(team_in), id);
                    break;
                default:
                    break;
            }
            newSpace[this->RoboNum + i] = robot;


        }
        delete[] this->RoboArry;
        this->RoboArry = newSpace;

        this->RoboNum = newSize;
        cout << "Successfully created" << addNum << "robot" << endl;


    }
    else
    {
        cout << "input error" << endl;
    }

}



void JudgeSystem::Fight() const
{
    int id;
    char team;
    int atk;
    enum TeamIn {kred, kblue} team_in;

    cout << "Please input the team(R/B)" << endl;
    cin >> team;
    cout << "Please input the ID" << endl;
    cin >> id;
    cout << "Please input ATK point" << endl;
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



void JudgeSystem::Hit() const
{
    int id;
    char team;
    int ht;
    enum Team {kred, kblue} team_in;

    cout << "Please input the team(R/B)" << endl;
    cin >> team;
    cout << "Please input the ID" << endl;
    cin >> id;
    cout << "Please input hit point" << endl;
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



void JudgeSystem::ShowInfo() const
{
    //打印红队数据
    for(int i = 0; i < RoboNum; i++)
    {
        if(RoboArry[i]->team_ == 0)
        {
            RoboArry[i]->Print();
        }
    }
    //打印蓝队数据
    for(int i = 0; i < RoboNum; i++)
    {
        if(RoboArry[i]->team_ == 1)
        {
            RoboArry[i]->Print();
        }
    }
}