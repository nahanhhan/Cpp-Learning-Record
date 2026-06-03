#include "vehicle_purchase.h"

namespace vehicle_purchase {

// needs_license determines whether a license is needed to drive a type of
// vehicle. Only "car" and "truck" require a license.
bool needs_license(std::string kind) {
    // TODO: Return true if you need a license for that kind of vehicle.
    if (kind == "car" or kind == "truck") {
        return true;
    }
    return false;
}

// choose_vehicle recommends a vehicle for selection. It always recommends the
// vehicle that comes first in lexicographical order.
std::string choose_vehicle(std::string option1, std::string option2) {
    // TODO: Return the final decision in a sentence.
    std::string best_option = (option1 < option2) ? option1 : option2;
    return best_option + " is clearly the better choice.";
}

// calculate_resell_price calculates how much a vehicle can resell for at a
// certain age.
double calculate_resell_price(double original_price, double age) {
    // TODO: Return the age-corrected resell price.
    if (age < 3) {
        double resell_price = original_price * 0.8;
        return resell_price;
    }
    if (age >= 10) {
        double resell_price = original_price * 0.5;
        return resell_price;
    }
    if ((3 <= age) and (age < 10)) {
        double resell_price = original_price * 0.7;
        return resell_price;
    }

    return 0.0;
}

}  // namespace vehicle_purchase
