//--------------------------------------------------------------------
// ���б� ���Ǹ� �����ϱ� ���� �Լ� save
//--------------------------------------------------------------------
#include "save.h"
#include <string_view>
#include <fstream>
#include <chrono>
#include <iostream>

// coding convention�� �˾ƺ��� (��Ÿ ��Ÿ��, �� ��Ÿ��)
void save( std::string_view fileName )
{
	std::cout << "\"" << fileName << "\"�� ������" << '\n';
	//main.cpp�� ������ �о� ���Ͽ� ����ҰŴ�.
	std::ifstream in{ fileName.data()};		// 'ifstream' ��ü�� �ϳ��� �ڷ���.
	in >> std::noskipws;

	// ������ ������ �̸� ���� �д�.
	std::ofstream out{ "2025 2�б� C++ ��������.txt", std::ios::app };

	//���Ͽ� ������ �ð��� �������.
	using namespace std::chrono_literals;
	out << '\n\n';
	out << "===============================================" << '\n';
	out << "����ð� - " << std::chrono::system_clock::now() + 9h << '\n';
	out << "===============================================" << '\n';
	out << '\n';

	char c;						// �� ���ڸ� ������ �� �ִ� �޸𸮸� �����.
	while (in >> c)				// ���� ���ڰ� �ִ� ���� �о c�� �����Ѵ�.
		out << c;				// out�� ����� ���Ͽ� c�� �о� �� ���ڸ� ���(����)�Ѵ�.
}
