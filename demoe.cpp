#include <stdio.h>
#include <algorithm>
#include <functional>

void main()
{
	std::vector<int> weights;
	
	for(int i = 0; i < 100; ++i)
	{
		weights.push_back(rand() % 1000);
	}
	
	std::sort(weights.begin(), weights.end(), [](auto a, auto b){
		return a < b;
	};
	
	for(auto a : weights)
	{
		cout << a << endl;
	}
}