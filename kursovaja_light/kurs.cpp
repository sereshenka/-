#include "kurs.h"


float maximum(vector<float> &massiv){
    float zero = 0.0;
    for (int i = 0; i < massiv.size(); i++) {
        if (zero < abs(massiv[i])) zero = abs(massiv[i]);
    }
    return zero;
}

int next_positive(vector<float> &massiv, int where_start) {
    where_start++;
    for (where_start; where_start < massiv.size(); where_start++) {
        if (massiv[where_start] > 0) 
            {
                return where_start;
            }
    }
}

float sum(vector<float> &massiv, int first_positive,int second_positive) {
    float sum_of_first_and_second = 0;
    first_positive++;
    for (first_positive; first_positive < second_positive; first_positive++) {
        sum_of_first_and_second += massiv[first_positive];
    }
    return sum_of_first_and_second;
}

