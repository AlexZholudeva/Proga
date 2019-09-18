#include <iostream>
using namespace std;

int fr(int m){
    int t = 1;
    if(m == 0 || m ==1)
        return 1;
    else if(m < 0)
        return 0;
    for(int i = 1; i <= m; i++){
        t *= i;
    }
    return t;
}


int main() {
    int n;
    cin >> n;
    int *array = new int[n];
    double sum = 0;
    for(int i = 0; i < n; i++){
        cin >> array[i];
        array[i] = fr(array[i]);
        cout << array[i] << endl;
        sum += (double)array[i];
    }
    cout << sum/n;
    return 0;
}