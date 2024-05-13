#ifndef DOCTOR_DATA_HPP
#define DOCTOR_DATA_HPP
#include <string>

namespace star_map {
    enum class System{
        BetaHydri, Sol, EpsilonEridani, AlphaCentauri, DeltaEridani, Omicron2Eridani
    };
} // namespace star_map

namespace heaven {
    class Vessel{
        public:
            std::string fullName;
            int generation;
            star_map::System current_system;
            int busters;
            Vessel(std::string fullName, int number);
            Vessel(std::string fullName, int number, star_map::System star);
            Vessel replicate(std::string new_name);
            void make_buster();
            bool shoot_buster();
        private:

    };

    std::string get_older_bob(Vessel& ves1, Vessel& ves2);
    bool in_the_same_system(Vessel& ves1, Vessel& ves2);
} // namespace heaven



#endif