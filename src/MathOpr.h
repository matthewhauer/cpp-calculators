//
// Created by matth on 6/18/2025.
//

#ifndef CPP_CALCS_MATHOPR_H
#define CPP_CALCS_MATHOPR_H

#include <string>

enum class MathOpr{
    NONE,
    PLUS,
    MINUS,
    MULT,
    DIV
};

MathOpr parseToken(const std::string &str);

#endif //CPP_CALCS_MATHOPR_H
