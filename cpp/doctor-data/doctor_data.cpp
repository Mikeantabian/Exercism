#include "doctor_data.h"


namespace heaven{
    
    Vessel::Vessel(std::string fullName, int generation): fullName(fullName), generation(generation), current_system(star_map::System::Sol), busters(0){}

    Vessel::Vessel(std::string fullName, int generation, star_map::System current_system): fullName(fullName), generation(generation), current_system(current_system), busters(0){}

    Vessel Vessel::replicate(std::string new_name){
        generation++;
        return Vessel(new_name,generation,current_system); 
    }

    void Vessel::make_buster(){
        busters++;
    }

    bool Vessel::shoot_buster(){
        if(busters>0){
            busters--;
            return true;
        }
        return false;
    }

    std::string get_older_bob(Vessel& ves1, Vessel& ves2){
        return ves1.generation > ves2.generation ? ves2.fullName : ves1.fullName;
    }

    bool in_the_same_system(Vessel& ves1, Vessel& ves2){
        return (ves1.current_system == ves2.current_system);
    }
};

