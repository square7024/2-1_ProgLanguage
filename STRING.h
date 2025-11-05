//-----------------------------------------------------------------------------------------------------------
// STRING - std::string을 흉내낸 클래스
//		  - 헤더에는 클래스의 선언만 코딩한다
// 
// 2025. 11. 5 시작
// - 클래스에는 6개의 special 함수가 있다
// 1. STRING()							 - default constructor
// 2. ~STRING()							 - destructor
//
// 3. STRING( const STRING& )			 - copy constructor
// 4. STRING& operator=( const STRING& ) - copy assignment operator
//
// 5. STRING( STRING&& )				 - move constructor
// 6. STRING& operator=( STRING&& )		 - move assignment operator
//-----------------------------------------------------------------------------------------------------------
#pragma once

class STRING {
public:
	// 2025. 11. 5
	STRING();						// 스페셜 함수
	~STRING();						// 스페셜 함수

	STRING(const char* str);		// 스페셜 함수가 아니다.

	unsigned length();

	void show();

private:
	unsigned len{};
	char* p{};

	// 2025. 11. 5
	unsigned id;					// 만들때 붙인 고유번호
	static unsigned gid;			// 고유번호
};
