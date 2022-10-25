#include "BaseRace.h"
#include "../PersonClassEnum.h"

class Human : public BaseRace{
public:
    Human(PersonClassEnum classEnum) : BaseRace(classEnum){}
};