#include <iostream>
using namespace std;

int main() {
    double vmv, skd, co2, zashteda_sredstva, meseki_na_isplata, mesechen_prihod;
    int fuel, zashteda;

    // Input values
    cout << "Enter the value of the motor vehicle (in euros): ";
    cin >> vmv;
    cout << "Enter the CO2 emissions of the motor vehicle: ";
    cin >> co2;
    cout << "Enter the type of fuel (0 for gasoline, 1 for diesel): ";
    cin >> fuel;
    cout << "Do you have savings (1 for yes, 0 for no): ";
    cin >> zashteda;

    if (zashteda == 1) {
        cout << "Enter the amount of savings: ";
        cin >> zashteda_sredstva;
    }

    cout << "Enter the loan term in months: ";
    cin >> meseki_na_isplata;
    cout << "Enter your monthly income: ";
    cin >> mesechen_prihod;

    // Calculate pbb based on the value of the motor vehicle
    double pbb;
    if (vmv < 10000) {
        pbb = 0;
    } else if (vmv >= 10000 && vmv < 20000) {
        pbb = 0.05;
    } else if (vmv >= 20000 && vmv < 30000) {
        pbb = 0.10;
    } else {
        pbb = 0.15;
    }

    // Calculate KCO2 based on CO2 emissions and fuel type
    double kCO2;
    if (fuel == 0) {
        if (co2 > 0 && co2 < 75) {
            kCO2 = 5;
        } else {
            kCO2 = 0;
        }
    } else {
        kCO2 = 0;
    }

    // Calculate the customs duty (DMV)
    double DMV = (vmv * pbb) * 61.5 + co2 + kCO2;

    // Check savings and loan eligibility
    if (zashteda == 1) {
        if (zashteda_sredstva >= DMV) {
            cout << "You should not take a loan." << endl;
        } else {
            // Calculate the monthly installment with interest
            double interest_rate = 0.02;
            double monthly_installment = (DMV - zashteda_sredstva) * interest_rate / meseki_na_isplata;

            // Check if the income covers the monthly installment
            if (mesechen_prihod < monthly_installment) {
                cout << "You cannot take out a loan." << endl;
            } else {
                cout << "Monthly installment in Denars: " << monthly_installment << endl;
            }
        }
    } else {
        cout << "Customs duty (DMV) without savings: " << DMV << endl;
    }

    return 0;
}
