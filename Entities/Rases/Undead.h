#pragma once

#include "BaseRace.h"

class Undead: public BaseRace{
public:
    Undead(PersonClassEnum classEnum) : BaseRace(classEnum){
        Health += 100;
        Magic += 5;
    }
};