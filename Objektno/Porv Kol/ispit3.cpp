#include <cstring>
#include <iostream>
using namespace std;

class StockRecord
{
private:
    char id[13];
    char name[50];
    double buyakci;
    double momakci;
    int allakci;

public:
    StockRecord(const char *id = "", const char *name = "", double buyakci = 0, double momakci = 0, int allakci = 0)
    {
        strcpy(this->id, id);
        strcpy(this->name, name);
        this->buyakci = buyakci;
        this->momakci = momakci;
        this->allakci = allakci;
    }
    void setNewPrice(double c)
    {
        this->momakci = c;
    }
    int getAkci() const
    {
        return allakci;
    }
    int getMomakci() const
    {
        return momakci;
    }
    int getBuyakci() const
    {
        return buyakci;
    }
    const char* getName() const {
        return name;
    }
    double value() const
    {
        int vrednost = 0;
        vrednost += getAkci() * getMomakci();
        return vrednost;
    }
    double profit() const
    {
        int profit = 0;
        profit += getAkci() * (getMomakci() - getMomakci());
        return profit;
    }
    friend ostream &operator<<(ostream &out, const StockRecord &obj)
    {
        out << obj.name << " " << obj.allakci << " " << obj.buyakci << " " << obj.momakci << " " << obj.profit()
            << endl;
        return out;
    }
    ~StockRecord()
    {
    }
};
class Client
{
private:
    char name[60];
    int id;
    StockRecord *stock;
    int numberOfStock;
    void resizeStock(int newSize)
    {
        StockRecord *newstock = new StockRecord[newSize];
        for (int i = 0; i < numberOfStock; i++)
        {
            newstock[i] = stock[i];
        }
        delete[] stock;
        stock = newstock;
    }

public:
    Client(const char *name = "", int id = 0, int numberOfStock = 0)
    {
        strcpy(this->name, name);
        this->id = id;
        this->numberOfStock = numberOfStock;
        this->stock = new StockRecord[numberOfStock];
    }
    ~Client()
    {
        delete[] stock;
    }
    double totalValue() const
    {
        double total = 0.0;
        for (int i = 0; i < numberOfStock; ++i)
        {
            total += stock[i].value();
        }
        return total;
    }
    Client &operator+=(const StockRecord &newStock)
    {
        resizeStock(numberOfStock + 1);
        stock[numberOfStock] = newStock;
        numberOfStock++;
        return *this;
    }
    friend ostream &operator<<(ostream &out, const Client &obj)
    {
        out << obj.id << " " << obj.totalValue() <<endl;
        for (int i = 0; i < obj.numberOfStock ; i++)
        {
            out<<obj.stock[i].getName()<<" "<<obj.stock[i].getMomakci()<<" "<<obj.stock[i].getAkci()<<" "<<obj.stock[i].getBuyakci()<<endl;
        }

        return out;
    }
};

int main(){

    int test;
    cin >> test;

    if(test == 1){
    	double price;
        cout << "=====TEST NA KLASATA StockRecord=====" << endl;
        StockRecord sr("1", "Microsoft", 60.0, 100);
        cout << "Konstruktor OK" << endl;
        cin >> price;
        sr.setNewPrice(price);
        cout << "SET metoda OK" << endl;
    }
    else if(test == 2){
        cout << "=====TEST NA METODITE I OPERATOR << OD KLASATA StockRecord=====" << endl;
    	char id[12], company[50];
        double price, newPrice;
        int n, shares;
        cin >> n;
        for(int i = 0; i < n; ++i){
        	cin >> id;
            cin >> company;
            cin >> price;
            cin >> newPrice;
            cin >> shares;
            StockRecord sr(id, company, price, shares);
            sr.setNewPrice(newPrice);
            cout << sr.value() << endl;
            cout << sr;
        }
    }
    else if(test == 3){
    	cout << "=====TEST NA KLASATA Client=====" << endl;
        char companyID[12], companyName[50], clientName[50];
        int clientID, n, shares;
        double oldPrice, newPrice;
        bool flag = true;
        cin >> clientName;
        cin >> clientID;
        cin >> n;
        Client c(clientName, clientID);
        cout << "Konstruktor OK" << endl;
        for(int i = 0; i < n; ++i){
            cin >> companyID;
            cin >> companyName;
            cin >> oldPrice;
            cin >> newPrice;
            cin >> shares;
        	StockRecord sr(companyID, companyName, oldPrice, shares);
            sr.setNewPrice(newPrice);
            c += sr;
            if(flag){
            	cout << "Operator += OK" << endl;
                flag = false;
            }
        }
        cout << c;
        cout << "Operator << OK" << endl;
    }
    return 0;

}
