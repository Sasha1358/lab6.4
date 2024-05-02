#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.4/vector.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64
{
	TEST_CLASS(UnitTest64)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			vector<int> V(5);
			Assert::AreEqual(V.getSize(), 5);
		}
	};
}
