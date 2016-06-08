// next_permutation example
#include <iostream>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort
#include <vector>
#include <string>

/*bool verify(std::vector<signed char> v)
{
	int counter = 0;
	for (auto i = v.begin(); i != v.end(); ++i)
	{

		counter += *i;
		if (counter < 0)
		{
			return false;
		}
	}
	return true;
}*/

template <typename T>
int printVector(std::vector<T> v)
{	
	for (auto i = v.begin(); i != v.end(); ++i)
	{
		std::cout << *i << '\n';
	}
	return 0;
}

int main() {
	int n = 10;
	std::vector<std::string> result;
	std::vector<signed char> target(2*n, 1);
	for (int i = 0; i < n; i++)
	{
		target[i]=-1;
		//std::cout << target.size() << "/" << target.capacity();
	}

	do {		
		bool veri = true;

		int counter = 0;

		for (auto i = target.begin(); i != target.end(); ++i)
		{
			counter += *i;
			if (counter < 0)
			{
				veri =  false;
				break;
			}
		}

		if (veri)
		{
			std::string s="";
			for (auto i = target.begin(); i != target.end(); ++i)
			{
				if (*i==-1)
				{
					s += ")";
				}
				if (*i == 1)
				{
					s += "(";
				}

			}
			result.push_back(s);			
		}
		
	} while (std::next_permutation(target.begin(), target.end()));
	printVector(result);
	return 0;
}


