#include <iostream>
#include <string>

/*USEFUL RESOURCES

https://www.w3schools.com/cpp/cpp_inheritance_multilevel.asp
*/

class Base {
    public:
        Base(){
            std::cout << "Base" << std::endl;
        };
        void doSomething() { std::cout << "Base does something\n"; };
};

class Child_1: public virtual Base {
    public:
        Child_1() {
            std::cout << "Child_1" << std::endl;
        }

};

class Child_2: public virtual Base {
    public:
        Child_2() {
            std::cout << "Child_2" << std::endl;
        }

};

class Closure: public Child_1, public Child_2 {
    public:
        Closure() {
            std::cout << "Closure" << std::endl;
        }
};

int main(){
    //Child_1 obj_1;
    //Child_2 obj_2;
    Closure obj_3;

    //obj_3.doSomething();
}