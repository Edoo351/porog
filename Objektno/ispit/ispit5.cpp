#include <iostream>
#include <cstring>
#include <stdexcept>
#include <ostream>
using namespace std;

enum CustomerType { STANDARD, LOYAL, VIP };

class UserExistsException : public exception {
public:
    const char* what() const noexcept override {
        return "The user already exists in the list!";
    }
};

class Customer {
private:
    char name[50];
    char email[50];
    CustomerType type;
    int purchasedProducts;

public:
    static int loyalBaseDiscount;

    Customer(const char* name = "", const char* email = "", CustomerType type = STANDARD, int purchasedProducts = 0)
        : type(type), purchasedProducts(purchasedProducts) {
        strncpy(this->name, name, 50);
        strncpy(this->email, email, 50);
    }

    const char* getEmail() const {
        return email;
    }

    CustomerType getType() const {
        return type;
    }

    void setType(CustomerType newType) {
        type = newType;
    }

    int getPurchasedProducts() const {
        return purchasedProducts;
    }

    void setPurchasedProducts(int count) {
        purchasedProducts = count;
    }

    void setDiscount1(int discount) {
        loyalBaseDiscount = discount;
    }

    int totalDiscount() const {
        if (type == STANDARD) return 0;
        if (type == LOYAL) return loyalBaseDiscount;
        return loyalBaseDiscount + 20;
    }

    friend ostream& operator<<(ostream& out, const Customer& c) {
        out << c.name << endl;
        out << c.email << endl;
        out << c.purchasedProducts << endl;
        out << (c.type == STANDARD ? "standard" :
               c.type == LOYAL ? "loyal" : "vip") << " ";
        out << c.totalDiscount() << "";
        return out;
    }
};

int Customer::loyalBaseDiscount = 10;

class FINKI_bookstore {
private:
    Customer* customers;
    int numOfCustomers;

public:
    FINKI_bookstore() : customers(nullptr), numOfCustomers(0) {}

    ~FINKI_bookstore() {
        delete[] customers;
    }

    FINKI_bookstore& operator+=(const Customer& newCustomer) {
        for (int i = 0; i < numOfCustomers; ++i) {
            if (strcmp(customers[i].getEmail(), newCustomer.getEmail()) == 0) {
                throw UserExistsException();
            }
        }
        Customer* temp = new Customer[numOfCustomers + 1];
        for (int i = 0; i < numOfCustomers; ++i) {
            temp[i] = customers[i];
        }
        temp[numOfCustomers] = newCustomer;
        delete[] customers;
        customers = temp;
        ++numOfCustomers;
        return *this;
    }

    void update() {
        for (int i = 0; i < numOfCustomers; ++i) {
            if (customers[i].getType() == STANDARD && customers[i].getPurchasedProducts() > 5) {
                customers[i].setType(LOYAL);
            } else if (customers[i].getType() == LOYAL && customers[i].getPurchasedProducts() > 10) {
                customers[i].setType(VIP);
            }
        }
    }

    void setCustomers(Customer* newCustomers, int n) {
        delete[] customers;
        customers = new Customer[n];
        for (int i = 0; i < n; ++i) {
            customers[i] = newCustomers[i];
        }
        numOfCustomers = n;
    }

    friend ostream& operator<<(ostream& out, const FINKI_bookstore& store) {
        for (int i = 0; i < store.numOfCustomers; ++i) {
            out << store.customers[i] << endl;
        }
        return out;
    }

};

int main() {
    const int MAX = 50;
    int testCase;
    cin >> testCase;

    char name[MAX];
    char email[MAX];
    int tC;
    int numProducts;

    if (testCase == 1) {
        cout << "===== Test Case - Customer Class ======" << endl;
        cin.get();
        cin.getline(name, MAX);
        cin.getline(email, MAX);
        cin >> tC;
        cin >> numProducts;
        cout << "===== CONSTRUCTOR ======" << endl;
        Customer c(name, email, (CustomerType)tC, numProducts);
        cout << c;
    }

    if (testCase == 2) {
        cout << "===== Test Case - Static Members ======" << endl;
        cin.get();
        cin.getline(name, MAX);
        cin.getline(email, MAX);
        cin >> tC;
        cin >> numProducts;
        cout << "===== CONSTRUCTOR ======" << endl;
        Customer c(name, email, (CustomerType)tC, numProducts);
        cout << c;

        c.setDiscount1(5);

        cout << c;
    }

    if (testCase == 3) {
        cout << "===== Test Case - FINKI-bookstore ======" << endl;
        FINKI_bookstore fc;
        int n;
        cin >> n;
        Customer customers[MAX];
        for (int i = 0; i < n; ++i) {
            cin.get();
            cin.getline(name, MAX);
            cin.getline(email, MAX);
            cin >> tC;
            cin >> numProducts;
            Customer c(name, email, (CustomerType)tC, numProducts);
            customers[i] = c;
        }

        fc.setCustomers(customers, n);

        cout << fc << endl;
    }

    if (testCase == 4) {
        cout << "===== Test Case - operator+= ======" << endl;
        FINKI_bookstore fc;
        int n;
        cin >> n;
        Customer customers[MAX];
        for (int i = 0; i < n; ++i) {
            cin.get();
            cin.getline(name, MAX);
            cin.getline(email, MAX);
            cin >> tC;
            cin >> numProducts;
            Customer c(name, email, (CustomerType)tC, numProducts);
            customers[i] = c;
        }

        fc.setCustomers(customers, n);
        cout << "OPERATOR +=" << endl;
        cin.get();
        cin.getline(name, MAX);
        cin.getline(email, MAX);
        cin >> tC;
        cin >> numProducts;
        Customer c(name, email, (CustomerType)tC, numProducts);
        try {
            fc += c;
        } catch (const UserExistsException& e) {
            cout << e.what() << endl;
        }

        cout << fc;
    }

    if (testCase == 5) {
        cout << "===== Test Case - operator+= (exception) ======" << endl;
        FINKI_bookstore fc;
        int n;
        cin >> n;
        Customer customers[MAX];
        for (int i = 0; i < n; ++i) {
            cin.get();
            cin.getline(name, MAX);
            cin.getline(email, MAX);
            cin >> tC;
            cin >> numProducts;
            Customer c(name, email, (CustomerType)tC, numProducts);
            customers[i] = c;
        }

        fc.setCustomers(customers, n);
        cout << "OPERATOR +=" << endl;
        cin.get();
        cin.getline(name, MAX);
        cin.getline(email, MAX);
        cin >> tC;
        cin >> numProducts;
        Customer c(name, email, (CustomerType)tC, numProducts);
        try {
            fc += c;
        } catch (const UserExistsException& e) {
            cout << e.what() << endl;
        }

        cout << fc;
    }

    if (testCase == 6) {
        cout << "===== Test Case - update method  ======" << endl << endl;
        FINKI_bookstore fc;
        int n;
        cin >> n;
        Customer customers[MAX];
        for (int i = 0; i < n; ++i) {
            cin.get();
            cin.getline(name, MAX);
            cin.getline(email, MAX);
            cin >> tC;
            cin >> numProducts;
            Customer c(name, email, (CustomerType)tC, numProducts);
            customers[i] = c;
        }

        fc.setCustomers(customers, n);

        cout << "Update:" << endl;
        fc.update();
        cout << fc;
    }
    return 0;
}
