#include "vec.h"
#include<iostream>
#include<vector>

using std::cout; using std::vector;

int main() 
{
	vector<int> nums{10, 3, 2};
	
	cout<<"Capacity: "<<nums.capacity()<<"\n";
	nums.push_back(20);

	cout<<"Capacity: "<<nums.capacity()<<"\n";

	cout<<nums[3]<<"\n";

	for(std::size_t i=0; i < nums.size(); ++i)
	{
		cout<<nums[i]<<"\n";
	}

	cout<<"\n for ranged \n";

	for(auto n: nums)
	{
		cout<<n<<"\n";
	}

	return 0;
}