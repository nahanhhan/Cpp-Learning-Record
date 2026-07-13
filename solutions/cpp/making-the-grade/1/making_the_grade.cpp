#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> integer_student_scores;
    for (int i = 0; i < student_scores.size(); i++) {
        int temp = static_cast<int>(student_scores[i]);
        integer_student_scores.emplace_back(temp);
    }
    return integer_student_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int count = 0;
    for (int i = 0; i < student_scores.size(); i++) {
        if (student_scores[i] <= 40) {
            count += 1;
        }
    }
    return count;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    int rate = (highest_score-40) / 4;
    int D = 41;
    int C = D + rate;
    int B = C + rate;
    int A = B + rate;
    return {D, C, B, A};
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> ranking_list;
    for (int i = 0; i < student_scores.size(); i++) {
        std::string rank = std::to_string(i+1);
        std::string name = student_names[i];
        std::string score = std::to_string(student_scores[i]);
        std::string s = rank + "." + " " + name + ": " + score;

        ranking_list.emplace_back(s);
    }
    return ranking_list;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    for (int i = 0; i< student_scores.size(); i++) {
        if (student_scores[i] == 100) {
            std::string name = student_names[i];
            return name;
        }
    }
    return "";
}
