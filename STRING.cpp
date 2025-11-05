//-----------------------------------------------------------------------------------------------------------
// STRING - std::string을 흉내낸 클래스
//		  - 멤버함수는 cpp에 코딩한다
// 
// 2025. 11. 5
//-----------------------------------------------------------------------------------------------------------
#include <iostream>
#include <print>
#include "STRING.h"
using namespace std;

// 2025. 11. 5
unsigned STRING::gid{ 0 };

// 2025. 11. 5
STRING::STRING()						// 스페셜 함수
	: id { ++gid }
{
	// 관찰메시지
	println("[{:5}] 생성자()      - 내주소:{:014}, 글자수:{:3}, 글자주소:{:014}", id, (void*)this, len, (void*)p);
}

STRING::~STRING()						// 스페셜 함수
{
	// 내 자신이 사라지기 전에 정리할 내용이 있으면 깨끗하게 정리한다.
	delete[] p;
	// 이럴 필요가 있을까?
	// p = nullptr;
	// len = 0;

	// 관찰메시지
	println("[{:5}] 소멸자        - 내주소:{:014}, 글자수:{:3}, 글자주소:{:014}", id, (void*)this, len, (void*)p);
}

STRING::STRING(const char* str)
	: id { ++gid }
{
	len = (unsigned)strlen(str);
	p = new char[len];
	// 복사는 반드시 이렇게 - DMA(Direct Memory Access)
	memcpy(p, str, len);
	// 관찰메시지
	// 관찰메시지
	println("[{:5}] 생성자(char*) - 내주소:{:014}, 글자수:{:3}, 글자주소:{:014}", id, (void*)this, len, (void*)p);
}

unsigned STRING::length()
{
	return len;
}

void STRING::show()
{
	for (int i = 0; i < len; ++i)
		cout << p[i];
	cout << endl;
}
