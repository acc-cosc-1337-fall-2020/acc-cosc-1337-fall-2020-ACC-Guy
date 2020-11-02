#include "ref_pointers.h"
#include<iostream>
#include"ref_pointers.h"

using std::cout;


int main() 
{	
	//reference
	int num = 20, num2 = 25;
	int& num_ref = num;
	
	cout<<"Value of num: "<<num<<"\n";
	cout<<"address of num: "<<&num<<"\n";
	cout<<"address of num via num_ref "<<&num_ref<<"\n";
    cout<<"value of num via num_ref "<<num_ref<<"\n";

	cout<<"Value of num: "<<num2<<"\n";
	cout<<"address of num: "<<&num2<<"\n";

num_ref = num2;//assigning the value of num2 to num
cout<<"address of num via num_ref "<<&num_ref<<"\n";



	//pointer
	int num1 = 10;
	int* num_ptr = &num1;

	cout<<"Value of num: "<<num<<"\n";
	cout<<"address of num: "<<&num<<"\n";
	cout<<"address of num via num_ptr "<<num_ptr<<"\n";
    cout<<"value of num via num_ptr "<<*num_ptr<<"\n";

	return 0;
}