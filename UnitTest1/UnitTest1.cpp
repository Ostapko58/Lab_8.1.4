#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.1.4/Lab_7.1.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[]=",---,-,-gsf-,--,";
			char str2[] = "*--**gsf-*-,";
			char* dest1 = new char[151];
			dest1[0] = '\0';
			char* dest2 = new char[151];
			dest2 = Change(dest1, str, dest1, 0);
			for (int i = 0; i < 12; i++)
			{
				Assert::AreEqual(dest2[i], str2[i]);
			}
		}
	};
}
