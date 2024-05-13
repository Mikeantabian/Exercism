#include "robot_name.h"
#include <cstdlib>
#include <random>

namespace robot_name {
    
    robot::robot() {
        reset();
     }

    const std::string robot::name() const {
        return RoboName;
    }

    /* Declare and seed mersenne_twister_engine */
    std::random_device rd;
    std::mt19937 gen(rd());

    void robot::reset() {
        RoboName = "XX000";
        for(int i = 0; i <6; i++){
            if(i < 2){
                //RoboName[i] = 'A' + rand() % 26;
                std::uniform_int_distribution<> distrib(0, 'Z' - 'A');
                RoboName[i]  = 'A' + distrib(gen);
            } else {
                //RoboName[i] = '0' + rand() % 10;
                std::uniform_int_distribution<> distrib(0, '9' - '0');
                RoboName[i] =  '0' + distrib(gen);
            }
        }
    }

}  // namespace robot_name
