#include <iostream>

int main() {
    int days;
    
    // Read the number of days from standard input
    std::cout << "Enter the number of days: ";
    std::cin >> days;
    
    if (days < 0) {
        std::cout << "Invalid input. Please enter a non-negative number of days." << std::endl;
        return 1;
    }

    // Calculate years, months, and days
    int years = days / 365;
    int remainingDays = days % 365;
    int months = remainingDays / 30;
    int remainingDaysInMonths = remainingDays % 30;

    // Display the result
    std::cout << "Years: " << years << " Months: " << months << " Days: " << remainingDaysInMonths << std::endl;

    return 0;
}
