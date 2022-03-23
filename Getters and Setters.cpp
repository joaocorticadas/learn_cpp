#include <iostream>
#include <string>

//Put getters and setters oustide the function and build a constructor

class Company{
    private:
        std::string company_name;
        int total_employees;
    public:
        void setTotalEmployees(int x);
        void setCompanyName(std::string y);
        int getTotalEmployees(void);
        std::string getCompanyName(void);

        Company(std::string x, int y){
            company_name = x;
            total_employees = y;
        }
};

void Company::setTotalEmployees(int x){
    total_employees = x;
};

void Company::setCompanyName(std::string y){
    company_name = y;
}

int Company::getTotalEmployees(void){
    return total_employees;
} 

std::string Company::getCompanyName(void){
    return company_name;
}

/*
class Employee: public Company{

*/

int main() {
    Company obj_company1("PrivateFly", 100);

    std::cout << "Company Name: " + obj_company1.getCompanyName() << std::endl;
    std::cout << "Number of Employees: " << obj_company1.getTotalEmployees() << std::endl;

    obj_company1.setCompanyName("CTW");
    obj_company1.setTotalEmployees(1450);

    std::cout << "Company Name: " + obj_company1.getCompanyName() << std::endl;
    std::cout << "Number of Employees: " << obj_company1.getTotalEmployees() << std::endl;
}