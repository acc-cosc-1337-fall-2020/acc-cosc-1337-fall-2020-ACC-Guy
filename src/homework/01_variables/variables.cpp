#include "variables.h"

const double tax_rate = .0675;

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write code for multiply_numbers function here
//function returns product of num1 and num2

double get_sales_tax_amount(double meal_amount)
{
	double get_sales_tax_amount = tax_rate * meal_amount;
		return get_sales_tax_amount;
	}


double get_tip_amount(double meal_amount, double tip_amount, double tax_amount)
{
		double total_variable = tip_amount  + meal_amount;

		return total_variable;
	}



