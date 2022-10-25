#pragma once

#include "BaseRace.h"

class Dwarf: public BaseRace{
public:
    Dwarf(PersonClassEnum classEnum) : BaseRace(classEnum){
        Health += 50;
        Defence += 15;
    }
};