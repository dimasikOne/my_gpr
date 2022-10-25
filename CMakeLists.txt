cmake_minimum_required(VERSION 3.23)
project(MY_RPG)

set(CMAKE_CXX_STANDARD 20)

add_executable(MY_RPG main.cpp Entities/Classes/BasePersonClass.h Entities/Rases/BaseRace.h Entities/RaceEnum.h Entities/PersonClassEnum.h Entities/Rases/Human.h Entities/Classes/Warrior.h MessageException.h Entities/Classes/Healer.h Entities/Classes/Mage.h Entities/Rases/Ork.h Entities/Rases/Elf.h Entities/Rases/Dwarf.h Entities/Rases/Undead.h)
