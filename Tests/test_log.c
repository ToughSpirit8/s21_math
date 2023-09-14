#include "TEST_MATH.h"
#include "../s21_math.h"
START_TEST(test_case_100) {
    ck_assert_ldouble_eq_tol(s21_log(_i), log(_i),0.00000001);
}
END_TEST


Suite *test_logarithmiscus(void) {

  Suite *s = suite_create("\033[45m-=s21_INSERT=-\033[0m"); // suite это набор тест кейсов 
  TCase *tc = tcase_create("log_100"); //TCase = тест кейс,           запускается только через suite

  tcase_add_test(tc, test_case_100);

  suite_add_tcase(s, tc);
  return s;
}
