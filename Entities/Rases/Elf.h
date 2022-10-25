#pragma once

#include "BaseRace.h"

class Elf: public BaseRace{
public:
    Elf(PersonClassEnum classEnum) : BaseRace(classEnum){
        Attack += 3;
        Defence += 10;
        Magic += 10;
    }
};