#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 int employee_number,worked_hours;
 double amount_per_hour,salary;
 cin>>employee_number>>worked_hours>>amount_per_hour;
 salary = worked_hours*amount_per_hour;
 cout << "NUMBER = " << employee_number << endl;
 cout << fixed << setprecision(2);
 cout << "SALARY = U$ " << salary << endl;
    return 0;
}
