#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main_t()
{
	//1. 数组名就是数组首元素地址
	string nums[] = { "one", "two", "three" };
	string *p = &nums[0];
	cout << *p << endl;

	string *m = nums;
	cout << *m << endl;
	

	//指针， 数组，迭代器
	int arr1[] = { 0, 1, 2, 3, 4 };
	int *beg = begin(arr1);
	cout << *beg << endl;
	int *last = end(arr1);
	cout << *last << endl;





	return 0;
}