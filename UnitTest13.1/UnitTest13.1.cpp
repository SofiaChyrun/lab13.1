#include "pch.h"
#include "CppUnitTest.h"
#include "../ChyrunSofialab13.1/ChyrunSofialab13.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest131
{
	TEST_CLASS(UnitTest131)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t, n=0 ;
			double s = 0, x=1;
			t = sum(x, 0.01, n, s);
			Assert::AreEqual(t, 1);
		}
	};
}
