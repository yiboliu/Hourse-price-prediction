#include "tuple.hpp"

int to_int(const std::string& s)
{
    try {
        return std::stoi(s);
    } catch (std::invalid_argument) {
        return 0;
    }
}
