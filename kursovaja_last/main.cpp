#include "kurs.h"

int main()
{
    vector<double> arr;
    double n = 0;
    int end_of_input = 1;
    while (end_of_input == 1) {
    	cin >> n;
    	if (cin.eof()) {
    		++end_of_input;
    	}
    	else if (cin.fail() && !cin.eof()) {
    		cout << "Nevernii format vhodnih dannih"; 
    		return 0;
    	}
    	else if (end_of_input == 1) {
    		arr.push_back(n);
    	}
    }
    cout << "Maximacatlnoe po modulu chislo: " << maximum(arr) << endl;
    cout << "Summa elementov meshdu dvumja pervimi elementami: " << sum(arr, next_positive(arr, -1), next_positive(arr, next_positive(arr, -1))) << endl;
    compare_and_print(arr);
    return 0;
}
