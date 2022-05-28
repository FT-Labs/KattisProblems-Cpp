#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define BETWEEN(x, a, b)    ((a) <= (x) && (x) <= (b))


void reverse_case(char* s)
{
    do {
        if (islower(*s))
            *s = toupper(*s);
        else if (isupper(*s))
            *s = tolower(*s);
    } while(*(++s));
}

char rev_char(char c)
{
    if (islower(c))
        return toupper(c);
    else
        return tolower(c);
}

int main ()
{
    char s[101], p[101];
    scanf("%s\n%s", s, p);


    int s_len = strlen(s), p_len = strlen(p);
    int s_start = 0, s_end = s_len - 1;

    if ((rev_char(s[0]) != p[0]  && s[0] != p[0]) && (!BETWEEN(s[0], '0', '9')))
    {
        printf("No\n");
        return 0;
    }
    else if (rev_char(s[0]) != p[0] && s[0] != p[0])
        s_start++, s_len--;

    if ((rev_char(s[s_end]) != p[p_len-1] && s[s_end] != p[p_len -1]) && !BETWEEN(s[s_end], '0', '9'))
    {
        printf("No\n");
        return 0;
    }
    else if (rev_char(s[s_end]) != p[p_len-1] && s[s_end] != p[p_len - 1])
    {
        s[s_end] = '\0';
        s_end--;
    }


    if (!strcmp(s+s_start, p))
    {
        printf("Yes\n");
        return 0;
    }
    else
    {
        reverse_case(p);
        if (strcmp(s+s_start, p))
        {
            printf("No\n");
            return 0;
        }
    }


    printf("Yes\n");
    return 0;
}
