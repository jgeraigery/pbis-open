/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#ifdef __WIN32__
#define UNITY_INCLUDE_SETUP_STUBS
#endif
#include "unity.h"
#ifndef UNITY_EXCLUDE_SETJMP_H
#include <setjmp.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include <linenoise.h>

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void testWithNoHistoryLastEntryReturnsNull();
extern void testWithNoHistoryHistoryEntryZeroReturnsNull();
extern void testWithNoHistoryHistoryEntryOneReturnsNull();
extern void testWithNoHistoryHistoryMatchingReturnsNull();
extern void testWithNoHistoryHistoryMatchingWithEmptyStringReturnsNull();
extern void testWithHistoryLastEntryReturnsLastEntry();
extern void testWithHistoryHistoryEntryReturnsNthEntry();
extern void testWithHistoryHistoryMatchingReturnsNullWhenNoMatch();
extern void testWhenHistoryMatchingEntryReturnsLastEntryThatMatches();


/*=======Suite Setup=====*/
static void suite_setup(void)
{

}

/*=======Suite Teardown=====*/
static int suite_teardown(int num_failures)
{
 return num_failures;
}

/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  suite_setup();
  UnityBegin("testlinenoise-history.c");
  RUN_TEST(testWithNoHistoryLastEntryReturnsNull, 37);
  RUN_TEST(testWithNoHistoryHistoryEntryZeroReturnsNull, 41);
  RUN_TEST(testWithNoHistoryHistoryEntryOneReturnsNull, 45);
  RUN_TEST(testWithNoHistoryHistoryMatchingReturnsNull, 49);
  RUN_TEST(testWithNoHistoryHistoryMatchingWithEmptyStringReturnsNull, 53);
  RUN_TEST(testWithHistoryLastEntryReturnsLastEntry, 57);
  RUN_TEST(testWithHistoryHistoryEntryReturnsNthEntry, 69);
  RUN_TEST(testWithHistoryHistoryMatchingReturnsNullWhenNoMatch, 84);
  RUN_TEST(testWhenHistoryMatchingEntryReturnsLastEntryThatMatches, 95);

  return suite_teardown(UnityEnd());
}
