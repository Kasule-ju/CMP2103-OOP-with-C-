#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee {
public:
    string name;

    Employee(string n) {
        name = n;
    }

    // Virtual function
    virtual void calculateBonus() {
        cout << name << ": Calculating employee bonus." << endl;
    }

    // Virtual destructor for safe base-pointer use
    virtual ~Employee() {}
};

// First derived class
class ElectricalEngineer : public Employee {
public:
    ElectricalEngineer(string n) : Employee(n) {}

    void calculateBonus() override {
        cout << name << " (Engineer) bonus: UGX 400,000" << endl;
    }
};

// Second derived class
class Technician : public Employee {
public:
    Technician(string n) : Employee(n) {}

    void calculateBonus() override {
        cout << name << " (Technician) bonus: UGX 250,000" << endl;
    }
};

// Third derived class
class Manager : public Employee {
public:
    Manager(string n) : Employee(n) {}

    void calculateBonus() override {
        cout << name << " (Manager) bonus: UGX 600,000" << endl;
    }
};

int main() {
    ElectricalEngineer engineer("Kasule");
    Technician technician("Brian");
    Manager manager("Carol");

    // Base-class pointer
    Employee* employee;

    cout << "EMPLOYEE BONUS SYSTEM" << endl;
    cout << "---------------------" << endl;

    // Point to the ElectricalEngineer object
    employee = &engineer;
    employee->calculateBonus();

    // Point to the Technician object
    employee = &technician;
    employee->calculateBonus();

    // Point to the Manager object
    employee = &manager;
    employee->calculateBonus();

    return 0;
}
