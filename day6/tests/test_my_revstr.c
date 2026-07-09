#include <criterion/criterion.h>

Test (my_revstr ,reverse_the_string)
{
    char dest[6] = {0};

    my_strncpy(dest, "HelloWorld", 5);
    my_revstr(dest);
    cr_assert_str_eq(dest, "olleH");
}