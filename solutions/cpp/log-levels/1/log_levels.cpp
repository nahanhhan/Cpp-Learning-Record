#include <string>
#include <algorithm>
#include <iostream>

namespace log_line {
std::string message(std::string line) {
    // return the message
    size_t closing_bracket  = line.find(']');
    if (closing_bracket != std::string:: npos) {
        std::string msg = line.substr(closing_bracket + 3);
        return msg;
    }
    return line;
}

std::string log_level(std::string line) {
    // return the log level
    size_t start_bracket = line.find('[');
    size_t closing_bracket = line.find(']');
    if (start_bracket != std::string::npos and closing_bracket != std::string::npos) {
        size_t start_pos = start_bracket + 1;
        size_t length = closing_bracket - start_bracket - 1;
        return line.substr(start_pos, length);
    }
    return line;
}

std::string reformat(std::string line) {
    // return the reformatted message
    std::string l_level = log_level(line);
    std::string msg = message(line);
    std::string ref = msg + " (" + l_level + ")";
    return ref;
}
}  // namespace log_line
