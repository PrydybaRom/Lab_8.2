#include "pch.h"
#include <string>
#include "CppUnitTest.h"
#include "../Lab_08.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str = "one two  three   space";
			int max = maxLen(str);

			Assert::AreEqual(max, 3);
		}
	};
}
