#include "TEST_MATH.h"


START_TEST(pow_ints) {
  for(long double x = 1;x<1000;x++){
    ck_assert_ldouble_eq(s21_log(x), log(x)); 
}
END_TEST

Suite *test_log(void) {
  Suite *s = suite_create("\033[45m-=s21_POW=-\033[0m"); // всякий мусор по типу \033 это покраска текста 
  TCase *tc = tcase_create("log_ints");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, log_ints);

  suite_add_tcase(s, tc);
  return s;
}