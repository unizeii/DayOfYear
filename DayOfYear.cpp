#include <iostream>
#include <string>

using namespace std;

class DayOfYear {
private:
    int day;
    static const int daysPerMonth[];
    static const string nameOfMonths[];

public:
    DayOfYear(int d) : day(d) {}

    void print() {
        int month = 0;
        while (day > daysPerMonth[month]) {
            day -= daysPerMonth
    [month];
            month++;
        }
        cout << nameOfMonths[month] << " " << day << endl;
    }
};

const int DayOfYear::daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

const string DayOfYear::nameOfMonths[12] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

int main() {
    
    int inputDay;
    cout << "Enter the day of the year: ";
    cin >> inputDay;

    DayOfYear day(inputDay);
    cout << "The corresponding date is: ";
    day.print();

    system("pause>0");
}
