#include <iostream>
#include <string>

using namespace std;

class DayOfYear {
private:
    int day;
    static const int daysPerMonth[]; // Static array to hold the number of days in each month
    static const string nameOfMonths[]; // Static array to hold the names of each month

public:
    // Constructor to initialize the day
    DayOfYear(int d) : day(d) {}

    // Function to print the corresponding date
    void print() {
        int month = 0;
        // Subtracting the days of each month from the total until we find the corresponding month
        while (day > daysPerMonth[month]) {
            day -= daysPerMonth
    [month];
            month++;
        }
        cout << nameOfMonths[month] << " " << day << endl;
    }
};

// Definition of the static arrays holding days per month and month names
const int DayOfYear::daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

const string DayOfYear::nameOfMonths[12] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

int main() {
    
    int inputDay;
    cout << "Enter the day of the year: ";
    cin >> inputDay;

    // Creating an instance of DayOfYear class with the user input
    DayOfYear day(inputDay);
    cout << "The corresponding date is: ";
    day.print();

    system("pause>0");
}
