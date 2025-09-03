//--------------------------------------------------------------------
// 한학기 강의를 저장하기 위한 함수 save
//--------------------------------------------------------------------
#include "save.h"
#include <string_view>
#include <fstream>
#include <chrono>
#include <iostream>

// coding convention을 알아보자 (낙타 스타일, 뱀 스타일)
void save( std::string_view fileName )
{
	std::cout << "\"" << fileName << "\"를 저장함" << '\n';
	//main.cpp의 내용을 읽어 파일에 기록할거다.
	std::ifstream in{ fileName.data()};		// 'ifstream' 자체가 하나의 자료형.
	in >> std::noskipws;

	// 저장할 파일을 미리 열어 둔다.
	std::ofstream out{ "2025 2학기 C++ 강의저장.txt", std::ios::app };

	//파일에 저장한 시간을 기록하자.
	using namespace std::chrono_literals;
	out << '\n\n';
	out << "===============================================" << '\n';
	out << "저장시간 - " << std::chrono::system_clock::now() + 9h << '\n';
	out << "===============================================" << '\n';
	out << '\n';

	char c;						// 한 글자를 저장할 수 있는 메모리를 만든다.
	while (in >> c)				// 읽을 글자가 있는 동안 읽어서 c에 저장한다.
		out << c;				// out과 연결된 파일에 c로 읽어 온 글자를 출력(저장)한다.
}
