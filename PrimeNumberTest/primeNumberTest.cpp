#include "stdafx.h"
#include "CppUnitTest.h"
#include "../LibPrimeNumber/IsPrimeNumber.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PrimeNumberTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: Your test code here

			Assert::AreEqual(true, IsPrimeNumber::IsPrime(2));
			Assert::AreEqual(true, IsPrimeNumber::IsPrime(3));
			Assert::AreEqual(true, IsPrimeNumber::IsPrime(5));
			Assert::AreEqual(true, IsPrimeNumber::IsPrime(41));
		}

	};
}