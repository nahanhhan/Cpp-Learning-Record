#include <string>
#include <vector>

namespace election {

// The election result struct is already created for you:

struct ElectionResult {
    // Name of the candidate
    std::string name{};
    // Number of votes the candidate has
    int votes{};
};

// TODO: Task 1
// vote_count takes a reference to an `ElectionResult` as an argument and will
// return the number of votes in the `ElectionResult.
int vote_count(ElectionResult& e1) {
    return e1.votes;
}

// TODO: Task 2
// increment_vote_count takes a reference to an `ElectionResult` as an argument
// and a number of votes (int), and will increment the `ElectionResult` by that
// number of votes.
void increment_vote_count(ElectionResult& e1, int number_of_votes) {
    int count = vote_count(e1) + number_of_votes;
    e1.votes = count;
}

// TODO: Task 3
// determine_result receives the reference to a final_count and returns a
// reference to the `ElectionResult` of the new president. It also changes the
// name of the winner by prefixing it with "President". The final count is given
// in the form of a `reference` to `std::vector<ElectionResult>`, a vector with
// `ElectionResults` of all the participating candidates.
ElectionResult& determine_result(std::vector<ElectionResult>& f_count) {
    int max_value = 0;
    std::string name;
    int temp;
    for (int i = 0; i < f_count.size(); i++) {
        if (f_count[i].votes > max_value) {
            max_value = f_count[i].votes;
            name = f_count[i].name;
            temp = i;
        }
    }

    f_count[temp].name = "President " + name;
    return f_count[temp];
}
}  // namespace election
