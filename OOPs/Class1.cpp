#include <iostream>
using namespace std;
class animal
{

private:
    int weight;

public:
    // state or properties
    int age;
    string name;

    // behaviour.
    void eating()
    {
        cout << "eating" << endl;
    }
    void sleep()
    {
        cout << "sleeping" << endl;
    }

    int getweight()
    {
        return weight;
    }

    void setweight(int w)
    {
        weight = w;
    }

    // default contructor.
    animal()
    {
        this->age = 0;
        this->weight = 0;
        this->name = "";
        cout << "default contructor call" << endl;
    }

    // perameterised constructor.
    animal(int age)
    {
        this->age = age;
        cout << "perameterised contructor call" << endl;
    }

    // copy constructor.
    animal(animal &obj)
    {
        this->age = obj.age;
        this->weight = obj.weight;
        cout << "i am inside copy constructor" << endl;
    }

    ~animal()
    {
        cout << "destructor call" << endl;
    }
};

int main()
{
    // cout << "size of empty class : " << sizeof(animal) << endl;

    // object creation.
    //  static location.

    // animal ramesh;
    // ramesh.age = 12;
    // ramesh.name = "lion";
    // cout << "age of remesh " << ramesh.age << endl;
    // cout << "name of remesh " << ramesh.name << endl;

    // ramesh.eating();
    // ramesh.sleep();

    // ramesh.setweight(101);
    // cout << "wieght " << ramesh.getweight() << endl;

    // dynamic memo  ry.

    // animal *king = new animal;
    // king->age = 10;
    // cout << king->age << endl;
    // king->eating();

    // defult constructor call
    // animal c;
    // animal *d = new animal;
    // peramenter contructor call.
    // animal a(10);
    // animal *b = new animal(100);

    // copy constructor;
    // animal ab = c;
    // animal f(*b); // dynamic
    // animal animal(c);

    // destructor call static.
    animal a;

    // dynamic.
    animal *b = new animal;

    // manually call destructor using delete keyword.
    delete b;
    return 0;
}