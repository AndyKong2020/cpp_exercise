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
        cin >> order;
        switch (order)
        {
            case 'A':
                Js.Born();
                break;
            case 'F':
                Js.Fight();
                break;
            case 'H':
                Js.Hit();
                break;
            case 'E':
                Js.ShowInfo();
                break;


        }
    }

    return 0;
}
