#pragma once

#include "BaseRace.h"

class Ork: public BaseRace{
public:
     explicit Ork(PersonClassEnum classEnum) : BaseRace(classEnum){
        Health += 50;
        Attack += 5;
        Defence += 5;
    }

    void CriticalHit(BaseRace& enemy){
        enemy.Health -= static_cast<int>(Attack) * ((rand() % 50) / 100 + 1);
    }
};