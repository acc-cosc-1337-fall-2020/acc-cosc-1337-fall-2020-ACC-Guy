#include<iostream>
#include"value_ref.h"

using namespace std;

int main()
{
    int num = 5;
    cout<<"value of num = "<<num <<"\n";
    cout<<"Address of num = "<<&num <<"\n";
    
    //reference variable-clone existing variable. 

    int& num_ref = num;

    cout<<"value of num_ref = "<< num_ref <<"\n"; //we can read the num value
    cout<<"Address of  num_ref = "<<& num_ref <<"\n";

    num_ref = 10; //can we indirectly modify the num variable. 
    cout<<"value of num = "<<num <<"\n";

    static_example();
static_example();
static_example();

    return 0;
}