#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main_t()
{
	//1. ����������������Ԫ�ص�ַ
	string nums[] = { "one", "two", "three" };
	string *p = &nums[0];
	cout << *p << endl;

	string *m = nums;
	cout << *m << endl;
	

	//ָ�룬 ���飬������
	int arr1[] = { 0, 1, 2, 3, 4 };
	int *beg = begin(arr1);
	cout << *beg << endl;
	int *last = end(arr1);
	cout << *last << endl;





	return 0;
}