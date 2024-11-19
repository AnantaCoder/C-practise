#include <bits/stdc++.h>
using namespace std;

class Employee{
    private:
        int empid;
        int salary;
    public:
         Employee(int id, int money): empid(id) ,salary(money){}

         int promotion(int performence){
            if(performence <= 40){
                salary += 1000;
                }
            else if (performence >=41 && performence<=69)
                {
                    salary += 2000;
                }else if(performence >=70){
                    salary +=5000;

                }
                
            // return salary;
         }

        int getsalary() const{
            return salary;
        }
         // Getter for employee ID
        int getEmpId() const {
        return empid;
        }
};
int main(){

    Employee emp1(2123131,45000);
    emp1.promotion(34);
    cout << "Your emp ID is " << emp1.getEmpId() << endl;
    cout<< "Your new salary is "<< emp1.getsalary();

return 0;

}