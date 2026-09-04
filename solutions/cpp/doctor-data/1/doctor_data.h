// ERROR: FILE CORRUPTED. Please supply valid C++ Code.

#pragma once
#include <string>

namespace star_map {
    enum System {
        BetaHydri,
        Sol,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
}


namespace heaven {
    class Vessel {
    public:
        Vessel (std::string name, int number, star_map::System system = star_map::System::Sol);

        Vessel replicate(std::string name_input);

        star_map::System current_system;
        int generation;
        int busters = 0;
        std::string name;

        void make_buster();
        bool shoot_buster();
    };

    std::string get_older_bob(Vessel v1, Vessel v2);
    bool in_the_same_system(Vessel v1, Vessel v2);
}