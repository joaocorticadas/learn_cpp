#include <iostream>

//Overloaded functions are functions with the same name.
//Functions cannot be overloaded only by its return type

/*USEFUL RESOURCE

https://www.geeksforgeeks.org/const-keyword-in-cpp/
https://www.geeksforgeeks.org/templates-cpp/
https://www.cplusplus.com/doc/tutorial/functions2/


*/


//THESE TWO
int operate (int a, int b) {
    return (a * b);
};

double operate (double a, double b){
    return (a * b);
}

//ARE THE SAME AS THIS FUNCTION (Templates)
template <typename T>
T sum(T a, T b) {
    return (a * b);
}

template <typename T, int A>
bool ft_same_no(T val) {
    return val == A;
}

int main(){
    const int x = 5,y = 2;
    const double n =5.0,m = 2.5;

    std::cout << operate(x, y) << std::endl;
    std::cout << operate(n, m) << "\n" <<std::endl;

    std::cout << sum(x, y) << std::endl;
    std::cout << sum(n, m) << "\n" << std::endl;

    std::cout << ft_same_no<double, x>(n) << std::endl;
}