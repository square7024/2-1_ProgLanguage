//-----------------------------------------------------------------------------------------------------------
// 2025 2�б� C++ ��56��78					10. 22 ������                                             (7�� 2��)
// 10/27 - 8�� 1�� �߰�����
//-----------------------------------------------------------------------------------------------------------
// ����� ���� �ڷ��� - ����ڰ� ���ϴ´�� �޸𸮸� ���� �� �ִ� �ڷ���
//----------------------------------------------------------------------------------------------------------
#include <iostream>
#include <random>
#include <fstream>
#include <print>
#include "save.h"
using namespace std;

int ascending_order(const void* a, const void* b)
{
	int x = *(int*)a;
	int y = *(int*)b;

	if (x < y)
		return -1;
	if (x > y)
		return 1;
	return 0;
}

//--------
int main()
//--------
{

	std::ifstream in{ "������𸣴�int" };

	if (not in) {
		return 20251510;
	}

	int num;
	in >> num;
	cout << num << endl;
	int* ptr = new int[num];
	unsigned cnt{};
	while (in >> num) {
		ptr[cnt] = num;
		++cnt;
	}

	cout << "cnt = " << cnt << "\n";
	cout << ptr[cnt - 1] << endl;


}