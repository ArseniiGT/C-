#include <iostream>

int main() {

    int per_weekDay = 3500;
    int per_weekendDay = 4000;
    int stayedDays = 6;

    int weekdays = 0;
    int weekendDays = 0;


    for (int day = 1; day <= stayedDays; day++) { 
        if (day >= 1 && day <=4) {
            weekdays = weekdays + 1;
        } else {
            weekendDays++;
        }
    }
    int totalCost = (weekdays * per_weekDay) + (weekendDays * per_weekendDay);

    std::cout <<totalCost;
}
