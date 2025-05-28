#include <iostream>

int main() {
    double apple_price = 30.0;
    double raspberry_price = 50.0;
    double banana_price = 40.0;
    double discount_200g = 0.30;
    double discount_500g = 0.50;
    double total_cost = 0.0;

    for (int i = 1; i <= 3; ++i) {
        int grams;
        double price;
        
        std::cout << "Enter the quantity of fruit " << i << " (grams): ";
        std::cin >> grams;
        
        if (i == 1) {
            price = (grams / 100.0) * apple_price;
        } else if (i == 2) {
            price = (grams / 100.0) * raspberry_price;
        } else {
            price = (grams / 100.0) * banana_price;
        }

        if (grams >= 500) {
            price *= (1.0 - discount_500g);
        } else if (grams >= 200) {
            price *= (1.0 - discount_200g);
        }

        total_cost += price;
    }

    int use_student_card;
    std::cout << "Use your student meal card? (1 for YES, 0 for NO): ";
    std::cin >> use_student_card;

    if (use_student_card == 1) {
        total_cost -= 140.0;
    }

    std::cout << "Igor will pay " << total_cost << " denars." << std::endl;

    return 0;
}