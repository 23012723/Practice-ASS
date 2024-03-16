#include <iostream>

using namespace std;

int main()
{
double Merchandise_cost, Employees_salary, Electricity_cost, Yearly_rent;

cout<<"Enter the total cost of the merchandise: "<<endl;
cin>>Merchandise_cost;

cout<<"Enter the total cost of the salary of the employees: "<<endl;
cin>>Employees_salary;

cout<<"Enter the total cost of the yearly rent: "<<endl;
cin>>Yearly_rent;

cout<<"Enter the total cost of electricity: "<<endl;
cin>>Electricity_cost;

double expenses = Merchandise_cost + Employees_salary + Yearly_rent + Electricity_cost;
double net_profit = Merchandise_cost/(0.1);
double Sale_profit = net_profit/(0.15);

double Markup = (net_profit + expenses)/Merchandise_cost;
double percent = Markup*100;

cout<<"The merchandise should be marked up to: "<<percent<<"%"<<endl;

    return 0;
}

