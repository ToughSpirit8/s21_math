#include "../s21_math.h"

START_TEST(pow_ints) {
  int x,y = 1;
  for(int x = 1;x<1000:x++){
    for(int y = -1000;y<1000;y++){
    ck_assert_ldouble_eq(s21_pow(x,y), pow(x,y));
  }
  
}
END_TEST

Suite *test_strncat(void) {
  Suite *s = suite_create("\033[45m-=s21_POW=-\033[0m"); // всякий мусор по типу \033 это покраска текста 
  TCase *tc = tcase_create("pow_ints");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, pow_ints);
  suite_add_tcase(s, tc);
  return s;
}