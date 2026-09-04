// ERROR: FILE CORRUPTED. Please supply valid C++ Code.

#include "doctor_data.h"
#include <string>

namespace heaven {
    Vessel::Vessel(std::string name_input, int number, star_map::System system) {
        current_system = system;
        generation = number;
        name = name_input;
    }
    Vessel Vessel::replicate(std::string name_input) {
        return Vessel(name_input, generation + 1, current_system);
    }

    bool Vessel::shoot_buster() {
        if (busters >=1) {
            busters -= 1;
            return true;
        }
        else {
            return false;
        }
    }

    void Vessel::make_buster() {
        busters += 1;
    }

    std::string get_older_bob(Vessel v1, Vessel v2) {
        if (v1.generation < v2.generation) {
            return v1.name;
        }
        else {
            return v2.name;
        }
    }

    bool in_the_same_system(Vessel v1, Vessel v2) {
        if (v1.current_system == v2.current_system) {
            return true;
        }
        else {
            return false;
        }
    }
}