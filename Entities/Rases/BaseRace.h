#pragma once

#include <string>
#include <iostream>
#include "../Classes/BasePersonClass.h"
#include "../Classes/Warrior.h"
#include "../Classes/Mage.h"
#include "../Classes/Healer.h"
#include "../../MessageException.h"

typedef class Warrior WarriorClass;
typedef class Mage MageClass;
typedef class Healer HealerClass;

class BaseRace {
public:
    int Health = 1;
    unsigned int Attack = 0;
    unsigned int Defence = 0;
    unsigned int Magic = 0;
    std::string Name;
    std::unique_ptr<BasePersonClass> personClass;

    explicit BaseRace(PersonClassEnum personClass) : personClass(){
        switch (personClass) {
            case PersonClassEnum::Warrior:
                this->personClass = std::make_unique<WarriorClass>();
                Health += 149;
                Attack += 10;
                Defence += 10;
                break;
            case PersonClassEnum::Healer:
                this->personClass = std::make_unique<HealerClass>();
                Health += 99;
                Attack += 15;
                Defence += 8;
                Magic += 10;
                break;
            case PersonClassEnum::Mage:
                this->personClass = std::make_unique<MageClass>();
                Health += 79;
                Attack += 15;
                Defence += 6;
                Magic += 20;
                break;
            default:
                throw MessageException("Go not implemented class");
        }
    }

    void Hit(BaseRace& enemy){
        Health -= static_cast<int>(enemy.Attack);
        enemy.Health -= static_cast<int>(Attack);
    }

    [[nodiscard]] bool IsDead() const {
        return Health <= 0;
    }

    void FightToDeath(BaseRace& enemy){
        while (!IsDead() && !enemy.IsDead())
            Hit(enemy);
    }

    void PrintStats() const{
        std::cout<<"Attack: " << Attack << std::endl;
        std::cout<<"Defence: " << Defence << std::endl;
        std::cout<<"Health: " << Health << std::endl;
        std::cout<<"Magic: " << Magic << std::endl;
    }
};
