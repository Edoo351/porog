#include <iostream>
#include <cstring>
#include <ostream>
using namespace std;

enum Size {
    SMALL,
    LARGE,
    FAMILY
};

class Pizza {
protected:
    char name[20];
    char ingredients[100];
    double price;

public:
    Pizza(const char* ime = "", const char* sostojki = "", double cena = 0) {
        strcpy(this->name, ime);
        strcpy(this->ingredients, sostojki);
        this->price = cena;
    }

    virtual double calculatePrice() const = 0;

    virtual bool operator<(const Pizza& obj) const {
        return calculatePrice() < obj.calculatePrice();
    }

    friend ostream& operator<<(ostream& os, const Pizza& pizza) {
        os << pizza.name << ": " << pizza.ingredients << ", " << pizza.calculatePrice() << endl;
        return os;
    }
};

class FlatPizza : public Pizza {
private:
    Size size;

public:
    FlatPizza(const char* name = "", const char* ingredients = "", const double price = 0, const Size size = SMALL)
        : Pizza(name, ingredients, price), size(size) {}

    double calculatePrice() const override {
        switch (size) {
            case SMALL:
                return price * 1.1;
            case LARGE:
                return price * 1.2;
            case FAMILY:
                return price * 1.3;
        }
        return 0    ; // Added to suppress warning, should never execute
    }

    friend ostream& operator<<(ostream& os, const FlatPizza& pizza) {
        os << pizza.name << ": " << pizza.ingredients << ", ";
        switch (pizza.size) {
            case SMALL:
                os << "small";
                break;
            case LARGE:
                os << "large";
                break;
            case FAMILY:
                os << "family";
                break;
        }
        os << " - " << pizza.calculatePrice() << endl;
        return os;
    }
};

class FoldedPizza : public Pizza {
private:
    bool isWhiteFlour;

public:
    FoldedPizza(const char* name = "", const char* ingredients = "", const double price = 0, const bool is_white_flour = true)
        : Pizza(name, ingredients, price), isWhiteFlour(is_white_flour) {}

    double calculatePrice() const override {
        return isWhiteFlour ? price * 1.1 : price * 1.3;
    }

    friend ostream& operator<<(ostream& os, const FoldedPizza& pizza) {
        os << pizza.name << ": " << pizza.ingredients << ", " << (pizza.isWhiteFlour ? "wf" : "nwf") << " - " << pizza.calculatePrice() << endl;
        return os;
    }

    void setWhiteFlour(bool is_white_flour) {
        isWhiteFlour = is_white_flour;
    }
};

Pizza* expensivePizza(Pizza** pizzas, int numPizzas) {
    if (numPizzas <= 0) {
        cout << "No pizzas provided." << endl;
        return nullptr;
    }

    // Assuming the first pizza is the most expensive initially
    Pizza* mostExpensivePizza = pizzas[0];

    // Finding the pizza with the highest price
    for (int i = 1; i < numPizzas; ++i) {
        if (*mostExpensivePizza < *pizzas[i]) {
            mostExpensivePizza = pizzas[i];
        }
    }

    // Print the most expensive pizza
    cout << *mostExpensivePizza;

    return mostExpensivePizza;
}

int main() {
    int test_case;
    char name[20];
    char ingredients[100];
    float inPrice;
    Size size;
    bool whiteFlour;

    cin >> test_case;
    if (test_case == 1) {
        // Test Case FlatPizza - Constructor, operator <<, price
        cin.get();
        cin.getline(name, 20);
        cin.getline(ingredients, 100);
        cin >> inPrice;
        FlatPizza fp(name, ingredients, inPrice);
        cout << fp;
    } else if (test_case == 2) {
        // Test Case FlatPizza - Constructor, operator <<, price
        cin.get();
        cin.getline(name, 20);
        cin.getline(ingredients, 100);
        cin >> inPrice;
        int s;
        cin >> s;
        FlatPizza fp(name, ingredients, inPrice, (Size)s);
        cout << fp;

    } else if (test_case == 3) {
        // Test Case FoldedPizza - Constructor, operator <<, price
        cin.get();
        cin.getline(name, 20);
        cin.getline(ingredients, 100);
        cin >> inPrice;
        FoldedPizza fp(name, ingredients, inPrice);
        cout << fp;
    } else if (test_case == 4) {
        // Test Case FoldedPizza - Constructor, operator <<, price
        cin.get();
        cin.getline(name, 20);
        cin.getline(ingredients, 100);
        cin >> inPrice;
        FoldedPizza fp(name, ingredients, inPrice);
        fp.setWhiteFlour(false);
        cout << fp;

    } else if (test_case == 5) {
        // Test Cast - operator <, price
        int s;

        cin.get();
        cin.getline(name, 20);
        cin.getline(ingredients, 100);
        cin >> inPrice;
        cin >> s;
        FlatPizza* fp1 = new FlatPizza(name, ingredients, inPrice, (Size)s);
        cout << *fp1;

        cin.get();
        cin.getline(name, 20);
        cin.getline(ingredients, 100);
        cin >> inPrice;
        cin >> s;
        FlatPizza* fp2 = new FlatPizza(name, ingredients, inPrice, (Size)s);
        cout << *fp2;

        cin.get();
        cin.getline(name, 20);
        cin.getline(ingredients, 100);
        cin >> inPrice;
        FoldedPizza* fp3 = new FoldedPizza(name, ingredients, inPrice);
        cout << *fp3;

        cin.get();
        cin.getline(name, 20);
        cin.getline(ingredients, 100);
        cin >> inPrice;
        FoldedPizza* fp4 = new FoldedPizza(name, ingredients, inPrice);
        fp4->setWhiteFlour(false);
        cout << *fp4;

        cout << "Lower price: " << endl;
        if (*fp1 < *fp2)
            cout << fp1->calculatePrice() << endl;
        else
            cout << fp2->calculatePrice() << endl;

        if (*fp1 < *fp3)
            cout << fp1->calculatePrice() << endl;
        else
            cout << fp3->calculatePrice() << endl;

        if (*fp4 < *fp2)
            cout << fp4->calculatePrice() << endl;
        else
            cout << fp2->calculatePrice() << endl;

        if (*fp3 < *fp4)
            cout << fp3->calculatePrice() << endl;
        else
            cout << fp4->calculatePrice() << endl;

        delete fp1;
        delete fp2;
        delete fp3;
        delete fp4;

    } else if (test_case == 6) {
        // Test Cast - expensivePizza
        int num_p;
        int pizza_type;

        cin >> num_p;
        Pizza** pi = new Pizza*[num_p];
        for (int j = 0; j < num_p; ++j) {

            cin >> pizza_type;
            if (pizza_type == 1) {
                cin.get();
                cin.getline(name, 20);

                cin.getline(ingredients, 100);
                cin >> inPrice;
                int s;
                cin >> s;
                FlatPizza* fp = new FlatPizza(name, ingredients, inPrice, (Size)s);
                cout << (*fp);
                pi[j] = fp;
            }
            if (pizza_type == 2) {

                cin.get();
                cin.getline(name, 20);
                cin.getline(ingredients, 100);
                cin >> inPrice;
                FoldedPizza* fp = new FoldedPizza(name, ingredients, inPrice);
                if (j % 2)
                    (*fp).setWhiteFlour(false);
                cout << (*fp);
                pi[j] = fp;

            }
        }

        cout << endl;
        cout << "The most expensive pizza:\n";
        expensivePizza(pi, num_p);

        for (int i = 0; i < num_p; ++i) {
            delete pi[i];
        }
        delete[] pi;
    }
    return 0;
}
