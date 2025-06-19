//
// Created by matth on 6/18/2025.
//

#include "MathOpr.h"

MathOpr parseToken(const std::string &str) {
    switch (str[0]) {
        case '+':
            return MathOpr::PLUS;
        case '-':
            return MathOpr::MINUS;
        case '*':
            return MathOpr::MULT;
        case '/':
            return MathOpr::DIV;
    }
    return MathOpr::NONE;
};