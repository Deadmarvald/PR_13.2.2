#include "pch.h"
#include "CppUnitTest.h"
#include "../PR13.2.2/Lab_13_2_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT1322
{
	TEST_CLASS(UT1322)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;

			t = MaxComDiv(6, 9, 12, 15, -1);

			Assert::IsTrue(t == 3.);
		}
	};
}