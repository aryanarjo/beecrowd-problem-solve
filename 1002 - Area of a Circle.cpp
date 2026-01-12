#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    double R,A;
    const double n = 3.14159;
    cin >> R;
    A = n* R * R;
    cout << fixed << setprecision(4);
    cout << "A=" << A << endl;
    return 0;
}
