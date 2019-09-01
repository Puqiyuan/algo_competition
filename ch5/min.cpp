#include <iostream>
#include <algorithm>
//using namespace std;

const int maxn = 100 + 10;
int A[maxn];

int main(int argc, char *argv[])
{
	long long a, b;
	while(std::cin >> a >> b)
		{
			std::cout << std::min(a, b) << "\n";
		}
	
	return 0;
}
