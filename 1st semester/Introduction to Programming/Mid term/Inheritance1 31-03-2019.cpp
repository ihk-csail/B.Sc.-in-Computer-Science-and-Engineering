#include <iostream>
#include<string>

using namespace std;
class Pet
{
    protected:
    string Name;
    public:
    Pet(string n) {Name = n;}
    void Run (void)
    {
        cout<<Name<<":I'm running"<<endl;
    }
};
    class Dog: public Pet
    {
        public: Dog(string n): Pet(n){};
        void Makesound(void)
        {
            cout<< Name <<":woof!woof!"<<endl;
        }
    };
    class Cat: public Pet
    {
    public:
        Cat (string n): Pet(n){};
        void Makesound(void)
        {
            cout<< Name <<": Meow! Meow!"<<endl;
        }
    };




int main(void)
{
    Pet a_pet("pet");
    Cat a_cat("Tom");
    Dog a_dog("Spike");
    a_pet.Run();
    a_dog.Run();
    a_dog.Makesound();
    a_cat.Run();
    a_cat.Makesound();
    return 0;
}
