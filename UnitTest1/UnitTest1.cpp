#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba7.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			array<int, 100> arr = { 1, 5, 42, 12, 89, 20, 13, 0, -5, -7 };
			array<int, 100> sortedByВescending = { 89, 42, 20, 13, 12, 5, 1, 0, -5, -7 };

			SortByВescending(arr, 10);
			for (int i = 0; i < 10; i++)
				Assert::AreEqual(arr[i], sortedByВescending[i]);
		}
	};
}
