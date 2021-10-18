#include "pch.h"
#include "CppUnitTest.h"


extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestProject
{
	TEST_CLASS(TestProject)
	{
	public:
		
		TEST_METHOD(VerifyPerimeterValue)
		{
			
			int* length, * width, a, b;
			a = 2;
			b = 2;
			length = &a;
			width = &b;

				int perimeter = 0;
				perimeter = getPerimeter(length, width);
				Assert::AreEqual(6 ,perimeter);
		
		}
		TEST_METHOD(VerifyAreaValue)
		{
			int* length, * width, a, b;
			a = 3; 
			b = 3;
			length = &a;
			width = &b;
			int area = 0;
			area = getArea(length, width);
			Assert::AreEqual(9, area);

		}
	};

}
