#include <iostream>
#include <ostream>
#include <string>
using namespace std;

class Product {
private:
    string name ;
    string category;
    int price;
    int quantity;
public:
    Product(const string &name, const string &category, const int price, const int quantity)
        : name(name),
          category(category),
          price(price),
          quantity(quantity) {
        this->name=name;
        this->category=category;
        this->price=price;
        this->quantity=quantity;
    }

    friend std::ostream & operator<<(std::ostream &os, const Product &obj) {
        return os
               << "name: " << obj.name
               << " category: " << obj.category
               << " price: " << obj.price
               << " quantity: " << obj.quantity;
    }

    int totalPrice() {
        int total = price * quantity;
        return total;
    }

    string name1() const {
        return name;
    }

    string category1() const {
        return category;
    }

    int price1() const {
        return price;
    }

    int quantity1() const {
        return quantity;
    }
};

class Store {
private:
    Product *p;
    int n;
    void copy(const Store &obj) {
        n = obj.n;
        p = new Product[obj.n];
        for (int i = 0; i<obj.n;i++) {
            p [i] = obj.p[i];
        }
    }
public:
    Store(Product * p, int n)
        : p(p),
          n(n) {
        n=0;
        p=nullptr;
    }
    Store (const Store &obj) {
        copy(obj);
    }
    Store &operator=(const Store &obj) {
        if (this!=&obj) {
            delete [] p;
            copy(obj);
        }
        return *this;
    }
    Store operator+=(const Product &other) {
        Product *temp = Product [n+1];
        for (int i = 0 ; i< n ;i++) {
            temp[i]=p[i];
        }
        delete [] p;
        p = temp;
        n++;
        return *this;
    }

    friend std::ostream & operator<<(std::ostream &os, const Store &obj) {
            os << "name: " << obj.p->name1();
            os << " category: " << obj.p->category1();
            os << " price: " << obj.p->price1();
            os << " quantity: " << obj.p->quantity1()<<endl;
    }
    Store fromCategory (string & category) {

    }
};

int main() {
    cout<<"edin"<<endl;
    return 0;
}
