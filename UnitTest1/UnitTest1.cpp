#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_1.2/Matrix.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Matrix m;
			m.Init(10, 5);
			Assert::AreEqual(9, m.getValueByIndex(6, 3));
		}
	};
}
