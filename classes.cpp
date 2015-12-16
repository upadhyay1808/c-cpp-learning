#include <stdio.h>

class Foo {
    private:
        int i = 12;
    public:
        int getI()
        {
            return i;
        }
        void setI(int i)
        {
            this->i = i;
        }
};

void modify(Foo);
void modify(Foo*);

int main()
{
    Foo Foo1;
    Foo* Foo2 = new Foo();
    modify(Foo1);
    modify(Foo2);
    printf("%d\n", Foo1.getI());
    printf("%d\n", Foo2->getI());
    return 0;
}

void modify(Foo a)
{
    a.setI(5);
}
void modify(Foo* a)
{
    a->setI(5);
}
