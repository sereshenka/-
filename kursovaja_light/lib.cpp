#include "lib.h"
double min(vector<double> &mass) {
    double i = mass[0];
    for (double m : mass) {
        if (m < i)
            i = m;
    }
    return i;
}

double max(vector<double> &mass) {
    double i = mass[0];
    for (double m : mass) {
        if (m > i)
            i = m;
    }
    return i;
}
int last_positiv(vector<double> &mass) {
    for (int i = mass.size() - 1; i >= 0; i--)
        if (mass[i] >= 0.0)
            return i;
    return mass.size() - 1;
}

double sum(vector<double> &mass) {
    double s = 0;
    for (int i = 0; i < mass.size(); i++)
        s += mass[i];
    return s;
}

double sum_until(vector<double> &mass, int last) {
    vector<double> tmp(mass.begin(), mass.end() - mass.size() + last);
    return sum(tmp);
}

void move(vector<double> &mass, int pos, int size) {
    for (int i = pos; i < mass.size() - size; i++)
        mass[i] = mass[i + 1];
}

void compr(vector<double> &mass, double a, double b) {
    int del = 0;
    for (int i = 0; i < mass.size() - del; i++) {
        if (abs(mass[i]) >= a && abs(mass[i]) <= b) {
            del++;
            move(mass, i, del);
            mass[mass.size() - del] = 0.0;
            i--;
        }
    }
}
