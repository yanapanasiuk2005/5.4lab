#include "pch.h"
#include "CppUnitTest.h"
#include "../5.4lab/5.4lab.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unit54
{
	TEST_CLASS(unit54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double d;
			d = S0(-1 );
			Assert::AreEqual(d, -0, 6);
		}
	};
}
