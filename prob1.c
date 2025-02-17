#include<stdio.h>
int main()
{
    char EmpName[25];
    int EmpId,Attendence;
    float Salary;
    printf("Enter the employee name:");
    scanf("%s",EmpName);
    printf("Enter the employee ID:");
    scanf("%d",&EmpId);
    printf("Enter the salary:");
    scanf("%f",&Salary);
    printf("Enter the number of days worked:");
    scanf("%d",&Attendence);
    //process payroll
    float bonus=0.0f;
    float gross_Salary=0.0f;
    char category[50]="Excellent";
    //calculate bonus
    if(Attendence>25)
    {
        bonus=(bonus/100.0f)*5.0f;
    }
    else if(Attendence<10)
    {
        bonus=(-1.0f*((bonus/100.0f)*50.0f));
    }
    //final salary 
    gross_Salary=(Salary+bonus);
    //categorize employees
    if(Attendence>25)
    {
        strcpy(category,"Excellent");
    }
    elseif(Attendence<15)
    {
        strcpy(category,"Need Improvement");
    }
    //display payroll details
    printf("ID:%d\n",EmpId);
    printf("Name:%s\n",EmpName);
    if(bonus>0)
    {
        printf("Bonus:.2f\n",bonus);
    }
    printf("Final Salary:%.2f\n",gross_Salary);
    printf("\tEmployee Performance Category:%s\n",category);
    

    return 0;
}