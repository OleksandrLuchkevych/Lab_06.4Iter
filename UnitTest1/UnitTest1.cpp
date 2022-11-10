#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06.4Iter/Lab_06.4Iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int inmin = 0;
			int a[] = { 2, 6, 8, 21, 9 };
			int S = min(a, 5, inmin);

			Assert::AreEqual(S, 2);
		}
	};
}
