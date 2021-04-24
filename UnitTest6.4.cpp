#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.4/Lab6.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64
{
	TEST_CLASS(UnitTest64)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[] = { 1, 2, 3, 4, 5555, -5, 5, 44444 };
			Assert::AreEqual(Max(arr, size(arr)), 44444);
		}
	};
}
