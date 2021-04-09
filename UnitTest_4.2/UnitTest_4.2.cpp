#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\1\source\repos\Laboratory_4.2\List.h"
#include "C:\Users\1\source\repos\Laboratory_4.2\Stack.h"
#include "C:\Users\1\source\repos\Laboratory_4.2\Queue.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest42
{
	TEST_CLASS(UnitTest42)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Stack* A[1];
			A[0] = new Stack;
			Elem* stack = A[0]->getList();
			for (int i = 0; i <= 10; i++)
			{
				A[0]->push(stack, stack, i);
			}
			Info a = A[0]->pop(stack, stack);
			Assert::AreEqual(a, 10);
		}
	};
}
