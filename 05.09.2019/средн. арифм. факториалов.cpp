#include <iostream>

using namespace std;

int main()
{
    int k, a, sum=0;
    cin >> k;
    int *n = new int[k];
    for (int i=0; i < k; i++) {
        cin >> n[i];
        for (a=1; n[i] > 0; n[i]--)
        {
            a=a*n[i];
        }
        sum=sum+a;
    }
    cout<<sum / k;
    return 0;
}


