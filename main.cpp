//-----------------------------------------------------------------------------------------------------------
// 2025 2학기 C++ 월56수78					10. 22 수요일                                             (7주 2일)
// 10/27 - 8주 1일 중간시험
//-----------------------------------------------------------------------------------------------------------
// 사용자 정의 자료형 - 사용자가 원하는대로 메모리를 엮을 수 있는 자료형
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

	std::ifstream in{ "몇개인지모르는int" };

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