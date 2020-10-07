#include <unistd.h>
/* #include <string.h>
#include <stdio.h> */

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    size_t j;

    while (s[i] != '\0')
    {
        j = 0;
        while (reject[j] != '\0')
        {
            if (reject[j] == s[i])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}

/* int main()
{
    const char *str1 = "0123456789";
    const char *str2 = " ";
    size_t i = ft_strcspn(str1, str2);
    printf("|%zu|\n", i);
    size_t j = strcspn(str1, str2);
    printf("|%zu|\n", j);
} */