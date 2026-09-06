#pragma once
#include <vector>
#include <string>

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};

    int preparationTime(std::vector<std::string> layers_input, int avg_time_plm_input = 2);
    amount quantities(std::vector<std::string> layers_input);
    void addSecretIngredient(std::vector<std::string>& ref_ing, std::vector<std::string> ing_friend);
    void addSecretIngredient(std::vector<std::string>& ref_ing, std::string secretIng);
    std::vector<double> scaleRecipe(std::vector<double> amounts_input, int number_wanted_input);

}  // namespace lasagna_master
