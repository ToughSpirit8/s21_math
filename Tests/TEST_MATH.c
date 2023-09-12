#include "../s21_math.h"
#include <math.h>

void case_test(Suite *s, int *fail);

int main(void) {
  int failed = 0;
  case_test(test_pow(), &failed);

  return failed;
}

void case_test(Suite *s, int *fail) {
  SRunner *runner = srunner_create(s);
  srunner_run_all(runner, CK_NORMAL);
  *fail = srunner_ntests_failed(runner);
  srunner_free(runner);
}