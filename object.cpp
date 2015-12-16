#include<iostream>

using namespace std;
class Animal {
    private:
        int i;
        int j;
        double d;
    public:
        Animal(int, int, double);
        ~Animal();
        int getI();
};

Animal::Animal(int i, int j, double d) {
    this->i = i;
    this->j = j;
    this->d = d;
}

int Animal::getI()
{
    return this->i;
}

Animal::~Animal()
{
    cout << this->i << " Destoryed." << endl;
}

int main()
{
    Animal myAnimal(1,2,3);
    myAnimal.getI();
    Animal *anotherAnimal = new Animal(2,2,3);
    cout << "Size of Animal: " << sizeof(Animal) << endl;
    cout << "Size of myAnimal: " << sizeof(myAnimal) << endl;
    cout << "Size of pointer: " << sizeof(anotherAnimal) << endl;
    delete anotherAnimal;
    return 0;

}
