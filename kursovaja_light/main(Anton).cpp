#include "lib.h"

int main()
{
    vector<double> arr;
    double a;
    while (scanf("%lf", &a) == 1) {
        arr.push_back(a);
    }

        //srand(clock());
        //for(int i = 0; i < 15; i++){
        //    double f = (double)rand() / RAND_MAX;
        //    arr.push_back(rand() % 100 - 50 + f);
        //    cout << arr[i] << " ";
        //}
    cout << endl;
    cout << "Максимальный элемент вектора: " << max(arr) << endl;
    cout << "Последний положительный элемент вектора: " << last_positiv(arr) << endl;
    cout << "Сумма: " << sum_until(arr, last_positiv(arr)) << endl;
    compr(arr, 0, 10);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
