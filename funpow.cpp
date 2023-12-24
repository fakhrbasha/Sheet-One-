#include <iostream>
#include <algorithm>
int power(int base, int exp)
{
	int res = 1;
	for (int i = 0; i < exp; i++) {
		res *= base;
	}
	return res;
}
using namespace std;
int main()
{
	int base, exp;
	cin >> base >> exp;
	int result = power(base, exp);
	cout << "base = " << base << " exp = " << exp << " Result = " << result; //3 4

}