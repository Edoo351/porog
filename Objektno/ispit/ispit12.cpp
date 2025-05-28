#include <iostream>
#include <cstring>
#include <ostream>
#include <cctype>

using namespace std;
enum tip {
	Smartphone,
	Computer
};
class InvalidProductionDate {
public:
	void print() {
		cout<<"Невалидна година на производство "<<endl;
	}
};

class Device {
private:
	char name[100];
	tip tipDevice;
	static float hours ;
	int year;
public:
	Device(const char * name = "",tip tipDevice= Smartphone, int year=0)
		: tipDevice(tipDevice),
		  year(year) {
		strcpy(this->name,name);
	}
	static void setPocetniCasovi(float _hours) {
		hours=_hours;
	}
	static float getHours() {
		return hours;
	}

	int year1() const {
		return year;
	}

	friend std::ostream & operator<<(std::ostream &os, const Device &obj) {
				os << obj.name<<endl;
		       switch (obj.tipDevice) {
		       	case Computer:
		       		os<< "Laptop ";
		       	break;
		       	case Smartphone:
		       		os<< "Mobilen ";
		       }
			if (obj.year>=2015 && obj.tipDevice == Computer) {
				os << Device :: hours + 2 + 2 <<endl;
			}
			else if (obj.year>2015 && obj.tipDevice != Computer) {
				os << Device :: hours + 2 <<endl;
			}
			else if (obj.year<=2015 && obj.tipDevice == Computer) {
				os << Device :: hours + 2 <<endl;
			}
			else {
				os << Device :: hours << endl;
			}
		return os;
	}
};
float Device :: hours =1;

class MobileServis {
private:
	char adres[100];
	Device *d;
	int n;

	void copy(const MobileServis& obj) {
		strcpy(adres, obj.adres);
		this->n = obj.n;
		d = new Device[n];
		for (int i = 0; i < n; i++) {
			d[i] = obj.d[i];
		}
	}

public:
	MobileServis (const char * adres = "") {
		strcpy(this->adres,adres);
		n=0;
		d = nullptr;
	}
	MobileServis (const MobileServis &obj) {
		copy(obj);
	}
	MobileServis &operator = (MobileServis &obj) {
		if (this!=&obj) {
			delete [] d;
			copy(obj);
		}
		return *this;
	}
			MobileServis& operator+=(Device& device) {
			if (device.year1() > 2019 || device.year1() == 2020 || device.year1() < 2000) {
				throw InvalidProductionDate();
			}
			Device *temp = new Device [n+1];
			for (int i=0;i<n;i++) {
				temp[i]=d[i];
			}
			temp[n++]=device;
			delete [] d;
			d=temp;
			return *this;
		}

	void pecatiCasovi() {
		cout<<"Ime: "<<adres<<endl;
		for (int i = 0 ; i<n ; i++) {
			if (d[i].year1()==2020) {
				continue;
			}
			cout<<d[i];
		}
	}
};
int main()
{
	int testCase;
	cin >> testCase;
    char ime[100];
    int tipDevice;
    int godina;
    int n;
    Device devices[50];
	if (testCase == 1){
		cout << "===== Testiranje na klasite ======" << endl;
		cin >> ime;
		cin >> tipDevice;
		cin >> godina;
		Device ig(ime,(tip)tipDevice,godina);
        cin>>ime;
		MobileServis t(ime);
        cout<<ig;
		}
	if (testCase == 2){
		cout << "===== Testiranje na operatorot += ======" << endl;
        cin>>ime;
        cin >> n;
		MobileServis t(ime);
		for(int i=0;i<n;i++)
        {
            cin >> ime;
            cin >> tipDevice;
            cin >> godina;
            Device tmp(ime,(tip)tipDevice,godina);
			try {
				t+=tmp;
			}catch (InvalidProductionDate &e) {
				e.print();
			}
        }
        t.pecatiCasovi();
	}
	if (testCase == 3){
		cout << "===== Testiranje na isklucoci ======" << endl;
        cin>>ime;
        cin >> n;
		MobileServis t(ime);
		for(int i=0;i<n;i++)
        {
            cin >> ime;
            cin >> tipDevice;
            cin >> godina;
            Device tmp(ime,(tip)tipDevice,godina);
			try {
				t+=tmp;
			}catch (InvalidProductionDate &e) {
				e.print();
			}
        }
        t.pecatiCasovi();
	}
	if (testCase == 4){
		cout <<"===== Testiranje na konstruktori ======"<<endl;
		 cin>>ime;
        cin >> n;
		MobileServis t(ime);
		for(int i=0;i<n;i++)
        {
            cin >> ime;
            cin >> tipDevice;
            cin >> godina;
            Device tmp(ime,(tip)tipDevice,godina);
			try {
				t+=tmp;
			}catch (InvalidProductionDate &e) {
				e.print();
			}
        }
        MobileServis t2 = t;
        t2.pecatiCasovi();
	}
	if (testCase == 5){
		cout << "===== Testiranje na static clenovi ======" << endl;
        cin>>ime;
        cin >> n;
		MobileServis t(ime);
		for(int i=0;i<n;i++)
        {
            cin >> ime;
            cin >> tipDevice;
            cin >> godina;
            Device tmp(ime,(tip)tipDevice,godina);

			try {
				t+=tmp;
			}catch (InvalidProductionDate &e) {
				e.print();
			}
        }
        t.pecatiCasovi();
        cout << "===== Promena na static clenovi ======" << endl;
		Device::setPocetniCasovi(2);
        t.pecatiCasovi();
	}

		if (testCase == 6){
		cout << "===== Testiranje na kompletna funkcionalnost ======" << endl;
		cin>>ime;
        cin >> n;
		MobileServis t(ime);
		for(int i=0;i<n;i++)
        {
            cin >> ime;
            cin >> tipDevice;
            cin >> godina;
            Device tmp(ime,(tip)tipDevice,godina);
            try {
				t+=tmp;
			}catch (InvalidProductionDate &e) {
				e.print();
			}
        }
		Device::setPocetniCasovi(3);
        MobileServis t2 = t;
        t2.pecatiCasovi();
	}

	return 0;

}
