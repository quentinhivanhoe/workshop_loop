#include <stdio.h>
#include <string.h>

char *my_strchr(const char *str, char c);
// int my_strindex(const char *str, char c);
// int my_strrindex(const char *str, char c);
// char *my_strrchr(const char *str, char c);

int main(void)
{
    char str[] = "hello world";

    if (strcmp("world", my_strchr(str, 'w'))) {
        printf("strchr test 1 failed");
        return 84;
    } else
        printf("strchr test 1 success\n");
    if (my_strchr(str, 'z')) {
        printf("strchr test 2 failed");
        return 84;
    } else
        printf("strchr test 2 success\n");
    // if (my_strindex(str, 'w') != 5) {
    //     printf("stindex test 1 failed");
    //     return 84;
    // } else
    //     printf("strindex test 1 success");
    // if (my_strindex(str, 'z') < 0) {
    //     printf("strindex test 1 failed");
    //     return 84;
    // } else
    //     printf("strindex test 1 success");
    // if (my_strindex(str, 'l') != 9) {
    //     printf("strrindex test 1 failed");
    //     return 84;
    // } else
    //     printf("strrindex test 1 success");
    // if (my_strrindex(str, 'z') < 0) {
    //     printf("strrindex test 1 failed");
    //     return 84;
    // } else
    //     printf("strrindex test 1 success");
    return 0;
}