#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\1\source\repos\Laboratory_4.1\List.h"
#include "C:\Users\1\source\repos\Laboratory_4.1\Stack.h"
#include "C:\Users\1\source\repos\Laboratory_4.1\Queue.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest41
{
	TEST_CLASS(UnitTest41)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{;
			List* A[1];
			A[0] = new Stack;
			Elem* stack = A[0]->getList();
			for (int i = 0; i <= 10; i++)
			{
				A[0]->push(stack, stack, i);
			}
			Info a = A[0]->pop(stack,stack);
			Assert::AreEqual(a,10);
		}
	};
}
