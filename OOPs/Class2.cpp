#include <iostream>
using namespace std;
class employee
{
    // data mumbers.
    // blueprint/attribute.
public:
    string Name;
    string Company;
    int Age;

    // member function./behaviours.
    void intoyourself()
    {
        std::cout << "name - " << Name;
        std::cout << "comanay - " << Company;
        std::cout << "age - " << Age;
    }

    // constructor.
    employee(sting name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};
int main()
{

    // employee emp1;
    // emp1.name = "gaurav";
    // emp1.age = 34;
    // emp1.company = "google";

    employee emp2 = employee("gaurav", "amazon", 23);
    emp2.intoyourself();
}