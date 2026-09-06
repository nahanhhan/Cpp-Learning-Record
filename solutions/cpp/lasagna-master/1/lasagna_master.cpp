#include "lasagna_master.h"
#include <vector>
#include <string>

namespace lasagna_master {

// TODO: add your solution here
    int preparationTime(std::vector<std::string> layers_input, int avg_time_plm_input) {
        int layer_number = layers_input.size();
        int prep_time = avg_time_plm_input * layer_number;
        return prep_time;
    }

    amount quantities(std::vector<std::string> layers_input) {
        int noodle_num = 0;
        int sauce_num = 0;
        for (size_t i = 0; i < layers_input.size(); i++) {
            if (layers_input[i] == "noodles") {
                noodle_num += 1;
            }
            else if (layers_input[i] == "sauce") {
                sauce_num += 1;
            }
        }
        amount needed{noodle_num * 50, sauce_num * 0.2};
        return needed;
    }

    void addSecretIngredient(std::vector<std::string>& ref_ing, std::vector<std::string> ing_friend) {
        std::string temp;
        for (size_t i = 0; i < ing_friend.size(); i++) {
            temp = ing_friend[ing_friend.size() - 1];
        }
        for (size_t i = 0; i < ref_ing.size(); i++) {
            if (ref_ing[i] == "?") {
                ref_ing[i] = temp;
            }
        }
    }

    void addSecretIngredient(std::vector<std::string>& ref_ing, std::string secretIng) {
        for (size_t i = 0; i < ref_ing.size(); i++) {
            if (ref_ing[i] == "?") {
                ref_ing[i] = secretIng;
            }
        }
    }

    std::vector<double> scaleRecipe(std::vector<double> amounts_input, int number_wanted_input) {
        double temp = number_wanted_input / 2.0;
        std::vector<double> amounts_temp = amounts_input;
        for (size_t i = 0; i < amounts_input.size(); i++) {
            amounts_temp[i] *= temp;
        }
        return amounts_temp;
    }
}  // namespace lasagna_master
