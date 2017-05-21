#include "kurs.h"

int main()
{
    vector<double> arr;
    double a;
    while (scanf("%lf", &a) == 1) {
        arr.push_back(a);
    }
    cout << endl;
	for(double m:arr){
    	cout << m;
	}
    //cout << "Maximalnoe po modulu chislo: " << maximum(arr) << endl;
    //cout << "Summa elementov meshdu dvumja pervimi elementami: " << sum(arr, next_positive(arr, 0), next_positive(arr, next_positive(arr, 0))) << endl;
    return 0;
}