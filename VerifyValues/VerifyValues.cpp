#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace VerifyValues
{
	TEST_CLASS(VerifyValues)
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
			Assert::AreEqual(6, perimeter);

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

		TEST_METHOD(CheckInput1Length)
		{
			int length;
		
			int x = 5;

			setLength(x , &length);
			Assert::AreEqual(5, x);

		}

		TEST_METHOD(CheckInput2Length)
		{
			int length;

			int x = 199;
		
			setLength(x, &length);
			Assert::AreNotEqual(99, x);

		}

		TEST_METHOD(CheckInput3Length)
		{
			int length;

			int x = -29;

			setLength(x, &length);
			Assert::AreNotEqual(1, x);
		}

		
		TEST_METHOD(CheckInput1Width)
			{
				int width;

				int y = 46;

				setWidth(y, &width);
				Assert::AreEqual(46, y);

			}

		TEST_METHOD(CheckInput2Width)
		{
			int width;

			int y = 39.66;

			setWidth(y, &width);
			Assert::AreNotEqual(34, y);

		}
		TEST_METHOD(CheckInput3Width)
		{
			int width;

			int y = -56.89;

			setWidth(y, &width);
			Assert::AreNotEqual(50, y);

		}

	};


}