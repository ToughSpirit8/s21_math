#include "../s21_math.h"

START_TEST(strncat_1) {
  char s1[70] = "Hello, world!";
  char s2[70] = "Hello, world!";
  char s3[] = "Hello, world!";
  long double n;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

Suite *test_strncat(void) {
  Suite *s = suite_create("\033[45m-=s21_STRNCAT=-\033[0m");
  TCase *tc = tcase_create("strncat_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, strncat_1);
  suite_add_tcase(s, tc);
  return s;
}