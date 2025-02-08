#include "get_next_line.h"

size_t ft_strlen(const char *str)
{
                int idx;

                idx = 0;
                while(str[idx])
                        idx++;
                return(idx);
}

char *ft_strdup(const char *str)
{
            int idx;
            char *dest;

            if(!(dest = (char * ) malloc(sizeof(char) * (ft_strlen(str) + 1))));
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

char *ft_substr(char const *s, unsigned int start, size_t len)
{
            unsigned int idx;
            size_t s_len;
            char *modified_s;

            if(!s || !(modified_s = malloc(sizeof(char) * (len + 1))))
                        return(NULL);

            s_len = ft_strlen((char *) s);
            idx = 0;

            while(start < s_len && s[start + idx] && idx < len)
            {
                        modified_s[idx] = s[start + idx];
                        idx++;


            }

            modified_s[idx] = '\0';
            return(modified_s);
}


char	*ft_strjoin(char *s1, char *s2)
{
	int			idx;
	int			idx_join;
	char		*join;

	if (!s1 || !s2 || !(join = malloc(sizeof(char) *
					(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1))))
		return (NULL);
	idx = 0;
	idx_join = 0;
	while (s1[idx])
		join[idx_join++] = s1[idx++];
	idx = 0;
	while (s2[idx])
		join[idx_join++] = s2[idx++];
	join[idx_join] = '\0';
	return (join);
}

