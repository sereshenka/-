#include "kurs.h"


double maximum(vector<double> &massiv){
    double zero = 0.0;
    for (int i = 0; i < massiv.size(); i++) {
        if (zero < abs(massiv[i])) zero = abs(massiv[i]);
    }
    return zero;
}

int next_positive(vector<double> &massiv, int where_start) {
    where_start++;
    for (where_start; where_start < massiv.size(); where_start++) {
        if (massiv[where_start] > 0) 
            {
                return where_start;
            }
    }
}

double sum(vector<double> &massiv, int first_positive,int second_positive) {
    double sum_of_first_and_second = 0;
    first_positive++;
    for (first_positive; first_positive < second_positive; first_positive++) {
        sum_of_first_and_second += massiv[first_positive];
    }
    return sum_of_first_and_second;
}

double compare_and_print(vector<double> &massive) {
    for (int i=0; i<massive.size();i++) {
        if (massive[i] == 0) {
            bring_zero_to_end(massive, i);
        }
    }
    print_sort_massive(massive);    
}

void  bring_zero_to_end(vector<double> &massive, int tmp) {
    for (tmp; tmp< massive.size(); tmp++) {
        massive[tmp] = massive[tmp+1];
        massive[tmp+1] = 0;
    }

}

void print_sort_massive(vector<double> &massive) {
    cout << "Sortirovanii massiv(0 v konze): ";
    for (int i=0; i < massive.size(); i++) {
        cout << " " << massive[i];
    }
    cout << endl;
}