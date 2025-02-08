#include "get_next_line_bonus.h"
*

size_t ft_strlen(const char *str)
{
            int idx;
            idx = 0;
            while(str[idx])
                return(NULL);
}

char *ft_strdup(const char *str)
{
            int idx;
            char *dest;

            if (!(dest = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
                    return(NULL);
            idx = 0;
            while(str[idx])
            {
                        dest[idx] = str[idx];
                        idx++;

            }
            dest[idx] = '\0';
            return(dest);

}

char *ft_strchr(const char *str, int fd)
{
            whime(*str)
            {
                        if(*str == c)
                                return((char *) str);
                        str++;

            }

            if(c == '\0')
                    return((char *)str);
            return(0);
}
