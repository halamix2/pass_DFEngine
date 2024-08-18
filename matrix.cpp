#include "pch.h"
#include "matrix.h"

std::wstring getMaxtrixString(float matrix[4][4]) {
    std::wstringstream matrixString;
    for (int x = 0; x < 4; x++) {
        matrixString << "[";
        for (int y = 0; y < 4; y++) {
            matrixString << matrix[x][y];
            if (y != 3) {
                matrixString << ",";
            };
        }
        matrixString << "]";
        if (x != 3) {
            matrixString << ", ";
        };
    }
    return matrixString.str();
}