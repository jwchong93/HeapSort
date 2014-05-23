#include "unity.h"
#include "heapSort.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_heap_will_sort_3_data_in_heap_order()
{
	int testList[]={4,5,6};
	heap(testList,3,0);
	TEST_ASSERT_EQUAL(6,testList[0]);
	TEST_ASSERT_EQUAL(5,testList[1]);
	TEST_ASSERT_EQUAL(4,testList[2]);
}

void test_heap_will_sort_7_data_in_heap_order()
{
	int testList[]={4,5,6,7,8,9,10};
	heap(testList,3,0);
	TEST_ASSERT_EQUAL(10,testList[0]);
	TEST_ASSERT_EQUAL(7,testList[1]);
	TEST_ASSERT_EQUAL(9,testList[2]);
	TEST_ASSERT_EQUAL(4,testList[3]);
	TEST_ASSERT_EQUAL(5,testList[4]);
	TEST_ASSERT_EQUAL(6,testList[5]);
	TEST_ASSERT_EQUAL(8,testList[6]);
}
