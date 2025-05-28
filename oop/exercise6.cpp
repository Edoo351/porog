#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
using namespace std;

class Employee {
private:
    char name[100];
    char surname[100];
    int salary;

public:
    Employee() {}
    Employee(const char* name, const char* surname, int salary) {
        strcpy(this->name, name);
        strcpy(this->surname, surname);
        this->salary = salary;
    }
    Employee(const Employee& other) {
        strcpy(this->name, other.name);
        strcpy(this->surname, other.surname);
        this->salary = other.salary;
    }
    const char* get_name() const {
        return name;
    }
    void setName(const char* name) {
        strcpy(this->name, name);
    }
    const char* get_surname() const {
        return surname;
    }
    void setSurname(const char* surname) {
        strcpy(this->surname, surname);
    }
    int get_salary() const {
        return salary;
    }
    void setSalary(int salary) {
        this->salary = salary;
    }
    void print() {
        cout << "Employee name: " << name << " Employee surname: " << surname << " Employee salary: " << salary << endl;
    }
};

class TechCompany {
private:
    std::string name;
    Employee employee[100];
    int numOfEmployees;

public:
    TechCompany() {}
    TechCompany(const std::string& name) : name(name), numOfEmployees(0) {}
    TechCompany(const TechCompany& other) {
        name = other.name;
        numOfEmployees = other.numOfEmployees;
        for (int i = 0; i < other.numOfEmployees; i++) {
            employee[i] = other.employee[i];
        }
    }
    const std::string& get_name() const {
        return name;
    }
    void setName(const std::string& name) {
        this->name = name;
    }
    Employee& getEmployee(int index) {
        return employee[index];
    }
    int getNumberOfEmployees() const {
        return numOfEmployees;
    }
    void addEmployee(const Employee& employee) {
        if (numOfEmployees < 20) {
            this->employee[numOfEmployees++] = employee;
        }
    }
    double getAverageOfEmployeesSalary() const {
        double Salary = 0;
        for (int i = 0; i < numOfEmployees; i++) {
            Salary += employee[i].get_salary();
        }
        if (numOfEmployees > 0) {
            return Salary / numOfEmployees;
        } else {
            return 0;
        }
    }
    void print() {
        cout << "Tech company name: " << name << endl;
        cout << "Number of employees: " << numOfEmployees << endl;
    }
};

TechCompany printCompanyWithHighestStdSalary(TechCompany companies[], int numCompanies) {
    int highestIndex = -1;
    double highestStdSalary = -1;

    for (int i = 0; i < numCompanies; i++) {
        int numEmployees = companies[i].getNumberOfEmployees();

        double meanSalary = companies[i].getAverageOfEmployeesSalary();
        double variance = 0.0;

        for (int j = 0; j < numEmployees; j++) {
            double diff = companies[i].getEmployee(j).get_salary() - meanSalary;
            variance += diff * diff;
        }

        double stdSalary = sqrt(variance / (numEmployees - 1));

        if (stdSalary > highestStdSalary) {
            highestStdSalary = stdSalary;
            highestIndex = i;
        }
    }

    return companies[highestIndex];
}

bool isSameCompany(TechCompany company1, TechCompany company2) {
    return (company1.get_name() == company2.get_name());
}

int main() {
    const int MAX_COMPANIES = 10;
    const int MAX_EMPLOYEES = 20;

    TechCompany companies[MAX_COMPANIES];

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;

        TechCompany company(name);

        int m;
        cin >> m;

        for (int j = 0; j < m; j++) {
            string name, surname;
            int salary;

            cin >> name >> surname >> salary;

            Employee employee(name.c_str(), surname.c_str(), salary);
            company.addEmployee(employee);
        }

        companies[i] = company;
    }

    TechCompany copy = companies[0];

    cout << "-->Testing get and set methods for one object and copy constructor" << endl;
    copy.setName("copy");
    cout << copy.get_name() << endl;

    cout << "-->Testing addEmployee function" << endl;
    Employee newEmployee("John", "Doe", 5000);
    copy.addEmployee(newEmployee);
    cout << "Number of employees in copy: " << copy.getNumberOfEmployees() << endl;

    cout << "-->Testing copy of first employee" << endl;
    Employee firstEmployee = copy.getEmployee(0);
    firstEmployee.print();

    cout << "-->Testing methods" << endl;
    TechCompany t = printCompanyWithHighestStdSalary(companies, n);

    cout << "Tech company with the highest standard deviation for salaries: " << t.get_name() << endl;

    return 0;
}
