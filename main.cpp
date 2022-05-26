//作者:明月清风我

#include <iostream>
#include <string>
#include "JudgeSystem.h"


using namespace std;
int main() {
    JudgeSystem Js;
    char order;
    while (1)
    {
        cout <<"A:SPAWN F:FIGHT H:HIT E:END"<< endl;
        cin >> order;
        if (order == 'A')
        {
            Js.Born();
        }
        else if (order == 'F')
        {
            Js.Fight();
        }
        else if (order == 'H')
        {
            Js.Hit();
        }
        else if (order == 'E')
        {
            Js.ShowInfo();
            break;
        }
    }

    return 0;
}
