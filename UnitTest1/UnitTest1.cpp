#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_1.6/AlcoholC.h"
#include "../oop_1.6/AlcoholC.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Alcohol alcohol;
			Liquid liquid;
			liquid.Init("Vodka", 0.8);
			alcohol.Init(750, liquid);

			Assert::AreEqual(750.0, alcohol.getSpec());
			Assert::AreEqual(std::string("Vodka"), alcohol.getLiquid().getName());
			Assert::AreEqual(0.8, alcohol.getLiquid().getDensity());
		}
	};
}
