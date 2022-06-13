#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab.4.4/Time.h"
#include "../Lab.4.4/Time.cpp"
#include "../Lab.4.4/Triad.h"
#include "../Lab.4.4/Triad.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest44
{
	TEST_CLASS(UnitTest44)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time A1(2, 3, 4, 0), B1(2, 3, 4, 0);
			Assert::AreEqual(A1 == B1, true);

		}
	};
}
