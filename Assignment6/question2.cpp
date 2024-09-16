#include <iostream>
using namespace std;

class Employee
{
protected:
    int id;
    double salary;

public:
    Employee() : id(0), salary(0.0) {}

    Employee(int id, double salary) : id(id), salary(salary) {}

    void setId(int id) { this->id = id; }

    int getId() const { return id; }

    void setSalary(double salary) { this->salary = salary; }

    double getSalary() const { return salary; }

    virtual void accept()
    {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    virtual void display() const
    {
        cout << "Employee ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Manager : public Employee
{
protected:
    double bonus;

public:
    Manager() : bonus(0.0) {}

    Manager(int id, double salary, double bonus) : Employee(id, salary), bonus(bonus) {}

    void setBonus(double bonus) { this->bonus = bonus; }

    double getBonus() const { return bonus; }

    void accept()
    {
        Employee::accept();
        cout << "Enter Bonus: ";
        cin >> bonus;
    }

    void display() const
    {
        Employee::display();
        cout << "Bonus: " << bonus << endl;
    }
};

class Salesman : public Employee
{
protected:
    double commission;

public:
    Salesman() : commission(0.0) {}

    Salesman(int id, double salary, double commission) : Employee(id, salary), commission(commission) {}

    void setCommission(double commission) { this->commission = commission; }

    double getCommission() const { return commission; }

    void accept()
    {
        Employee::accept();
        cout << "Enter Commission: ";
        cin >> commission;
    }

    void display() const
    {
        Employee::display();
        cout << "Commission: " << commission << endl;
    }
};

class SalesManager : public Manager, public Salesman
{
public:
    SalesManager() {}

    SalesManager(int id, double salary, double bonus, double commission)
        : Employee(id, salary), Manager(id, salary, bonus), Salesman(id, salary, commission) {}

    void accept()
    {
        Manager::accept();
        cout << "Enter Commission: ";
        cin >> commission;
    }

    void display() const
    {
        Manager::display();
        cout << "Commission: " << commission << endl;
    }
};

int main()
{
    SalesManager sm;
    sm.accept();
    sm.display();

    return 0;
}
