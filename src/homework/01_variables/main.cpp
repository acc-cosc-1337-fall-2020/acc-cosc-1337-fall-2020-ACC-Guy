//write include statements
#include<variables.h>
#include <iostream>

//write namespace using statement for cout

using std::cout; using std::cin;

double meal_amount, tip_rate, tip_amount, tax_amount, total;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	std::cout<<"Please enter in the meal amount por favor. :-)"<<'\n';

	std::cin>>meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	std::cout<<"Please enter a tip and don't be stingy otherwise I hope the Rona gets you."<<'\n';

	std::cin>>tip_amount;

	total = get_tip_amount(meal_amount, tip_amount) + tax_amount;
	
	std::cout<<"Meal Amount: "<<meal_amount<<'\n';

	std::cout<<"Sales Tax: "<<tax_amount<<'\n';

	std::cout<<"Tip Amount: "<<tip_amount<<'\n';

	std::cout<<"Total: "<<total<<'\n';

	return 0;
}
