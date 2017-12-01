

//Preprocessor directives
#include <iostream>
#include <iomanip>

using namespace std;

//seperate function declaring calculations
 void timerCalculations (double *fo, double *D, double R1, double R2, double C1)
{
    *fo = (1.44)/((R1+2*R2)*C1);
    *D = (R1+R2)/(R1+2*R2) * 100;
    return;
}
//Main function
int main(void)
{
    //Variable declarations
    double R1,R2,C1;
    double fo,D;

    double *ptr_fo, *ptr_D;

    ptr_fo = &fo;
    ptr_D = &D;

    //Project title
    cout << "555 Timer Astable Multivibrator Calculations\n" << endl;

    //Do- While loop
    do
    {
        //Read in values
        cout <<"Please enter a value greater than 0 for R1:";
        cin >> R1;

        cout <<"Please enter a value greater than 0 for R2:";
        cin >> R2;

        cout <<"Please enter a value greater than 0 for C1:";
        cin >> C1;
    }
    //while loop
    while((R1 <= 0) || (R2 <= 0) || (C1 <= 0));

    timerCalculations (ptr_fo, ptr_D, R1, R2, C1);

    //Final results
    cout << fixed;
    cout.precision(2);
    cout <<"\n\n Output Frequency = " << fo << " Hz" <<endl;
    cout <<"\n Duty Cycle = " << D << "%" <<endl;

    return 0;
}
