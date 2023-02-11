#ifndef SLAE_COURSE_PROGONKA_H
#define SLAE_COURSE_PROGONKA_H

#endif //SLAE_COURSE_PROGONKA_H

#include <iostream>
#include "threediagonal_matrix.h"
#include "numbers_column.h"

struct AuxiliaryCoefficients {
    double p_coef;
    double q_coef;
};

NumbersColumn Progonka(const TriangleMatrix &matrix, const NumbersColumn &free_members);
vector<AuxiliaryCoefficients> FindAuxiliaryCoefficients(const TriangleMatrix &matrix, const NumbersColumn &unknown_column);