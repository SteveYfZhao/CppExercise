// version 2, recursive solution
#include <iostream>     // std::cout
#include <vector>
#include <string>

int n;

template <typename T>
int printVector(std::vector<T> v)
{	
	for (auto i = v.begin(); i != v.end(); ++i)
	{
		std::cout << *i << '\n';
	}
	return 0;
}

int helper(signed char k, std::string str, std::vector<std::string>& result, int L)
{
	//std::cout << k << str << L;

	if (str.length() == 2 * n)
	{
		result.push_back(str);
		return 0;
	}
	else 
	{
		if (k > 0)
		{
			//std::cout << k << str;
			helper(k-1, str + ")", result, L);
		}
		if (L < n) 
		{
			//std::cout << k<< str;
			helper(k+1, str + "(", result, L+1);
		}


	}
	return 0;

}

int main() {
	n = 10;
	std::vector<std::string> result;
	helper(0, "", result, 0);
	//printVector(result);
	return 0;
}




