// file:Interest Earned 
// Programmer name: Ebram Azer
// Requirments: write a program that asks for principal,the interest rate,and number of time 
// the interest of compounded,It shoud display a report 

#include <iostream>
#include <iomanip>  // For formatting output
#include <cmath>    // For pow() function
using namespace std;

int main() {
    double principal, rate, amount, interest;
    int timesCompounded;

    // Get input from the user
    cout << "Enter the principal amount: $";
    cin >> principal;
    cout << "Enter the interest rate (as a percentage): ";
    cin >> rate;
    cout << "Enter the number of times the interest is compounded per year: ";
    cin >> timesCompounded;

    // Convert interest rate from percentage to decimal
    rate = rate / 100;

    // Calculate the amount in savings after one year
    amount = principal * pow(1 + (rate / timesCompounded), timesCompounded);

    // Calculate the interest earned
    interest = amount - principal;

    // Display the report
    cout << fixed << setprecision(2);  // Set decimal precision to 2 places
    cout << "\nInterest Rate:      " << (rate * 100) << "%" << endl;
    cout << "Times Compounded:   " << timesCompounded << endl;
    cout << "Principal:          $" << principal << endl;
    cout << "Interest:           $" << interest << endl;
    cout << "Amount in Savings:  $" << amount << endl;

    return 0;
}
