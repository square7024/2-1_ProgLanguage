//-----------------------------------------------------------------------------------------------------------
// 2025 2학기 C++ 월56수78					11. 10 월요일                                             (10주 1일)
// 12/15 - (15주 1일) 기말시험 - 다형성(코드는 수업에 사용한 그대로)
//-----------------------------------------------------------------------------------------------------------
// 사용자 정의 자료형 - 생성자/소멸자 -> 함수(뭐든지 할 수 있다)
// std::string의 동작을 흉내낸 클래스 STRING을 직접 만들어 보면서 이해한다.
// 
// 이 class는 자원을 관리한다 - RAII
// copy constructor, copy assignment operator --> 깊은 복사(deep copy)
//----------------------------------------------------------------------------------------------------------
#include <iostream>
#include <string>
#include "save.h"
#include "STRING.h"
using namespace std;

int ascending_order(const void*, const void*);

int ascending_order(const void* a, const void* b) {

}

//--------
int main()
//--------
{
	STRING s[]{ "333", "22", "55555", "1", "4444" };

	// [문제] s를 길이기준 오름차순으로 정렬하라. - qsort를 사용

	for (const STRING& s : s)
		s.show();

	qsort(s, sizeof s, sizeof s / sizeof s[1], ascending_order);

	cout << "정렬완료" << endl;

	for (const STRING& s : s)
		s.show();

	//save("main.cpp");
}