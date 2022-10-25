#include <iostream>
#include "Entities/Rases/BaseRace.h"
#include "Entities/Rases/Human.h"
#include "Entities/Rases/Ork.h"

int main() {
    auto john = std::make_unique<Human>(PersonClassEnum::Warrior);
    auto lary = std::make_unique<Ork>(PersonClassEnum::Healer);
    std::cout<<"Larys sats before battle:" << std::endl;
    lary->PrintStats();
    std::cout<<"John sats before battle:"<< std::endl;
    john->PrintStats();
    john->FightToDeath(*lary.get());
    std::cout<<"Larys sats after battle:"<< std::endl;
    lary->PrintStats();
    std::cout<<"John sats after battle:"<< std::endl;
    john->PrintStats();
    std::cout<<"john is dead: "<< john.get()->IsDead() << std::endl;
    std::cout<<"lary is dead: "<< lary.get()->IsDead();
    return 0;
}
