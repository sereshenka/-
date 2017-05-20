#include "kurs.h"

int main()
{
    vector<float> arr;
    char input_stream[255];
    while ( fgets(input_stream, 254, stdin) != NULL) {
    	float digit;
    	if (sscanf(input_stream, "%f", &digit) == 1) {
    		arr.push_back(digit);
    	}
    	else {
    		cout << "Vvedeno ne chislo" << endl;
    		return 0;
    	}
    }
    cout << "Maximalnoe po modulu chislo: " << maximum(arr) << endl;
    cout << "Summa elementov meshdu dvumja pervimi elementami: " << sum(arr, next_positive(arr, -1), next_positive(arr, next_positive(arr, -1))) << endl;
    return 0;
}

// Изменить float на double(оказывается он больше)