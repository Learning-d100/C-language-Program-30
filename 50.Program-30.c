/*
     -:-Program-30-:-
          Write a program that takes monthly income and monthly expenses of the 
          user like electricity bill, gas bill and food expenses. Program should 
          calculate the following:
          . Total monthly expenses                . Yearly saving
          . Totally yearly expenses               . Average saving per month
          . Monthly savings                       . Average expenses per month          
*/
// start coding.
#include <stdio.h>
int main()
{
     // declare variables
     int monthly_income, electricity_bill, gas_bill, food_expenses, monthly_expenses,
     monthly_savings;
     printf("Please Enter your Monthly-Income            :      ");
     scanf("%d", &monthly_income);
     printf("Please Enter Your Monthly-Expenses:-");
     printf("\n\tYour Electricity-Bill               :      ");
     scanf("%d", &electricity_bill);
     printf("\tYour Gas-Bill                       :      ");
     scanf("%d", &gas_bill);
     printf("\tYour Food-Expenses                  :      ");
     scanf("%d", &food_expenses);
     // claculation.
     monthly_expenses = electricity_bill + gas_bill + food_expenses;
     monthly_savings = monthly_income - monthly_expenses;
     printf("-----------------------------------------------------------------");
     printf("--------------------------------------------------");
     printf("\n\tTotal Monthly-Expenses are          :      %d", monthly_expenses);
     printf("\n\tTotal Year-Expenses are             :      %d", (monthly_expenses)*12);
     printf("\n\tYour Monthly-Saving is              :      %d", monthly_savings);
     printf("\n\tYour Yearly-Saving is               :      %d", (monthly_savings)*12);
     printf("\n\tAverage-Saving Per Month            :      %d", monthly_savings);
     printf("\n\tAverage-Expenses Per Month          :     %d", monthly_expenses);
     return 0;
}