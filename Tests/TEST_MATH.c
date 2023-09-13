#include "TEST_MATH.h"

void case_test(Suite *s, int *fail) {
  SRunner *runner = srunner_create(s);
  srunner_run_all(runner, CK_NORMAL);
  *fail = srunner_ntests_failed(runner);
  srunner_free(runner);
}
int main(void) {
  int failed = 0;
  case_test(test_log(), &failed);

  return failed;
}

