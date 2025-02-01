#include "get_next_line.h"

int read_buffer(int fd, char **store)
{
            int bytes;
            char *tmp;
            char *buf;
            buf = (BUFFER_SIZE > 0) ? malloc(sizeof(char) * (BUFFER_SIZE + 1)) : NULL;
            if(bytes = read(fd, buf, BUFFER_SIZE) < 0 || buf == NULL)
                            return(-1);

            buf[bytes] = '\0';
            tmp = ft_strjoin(*store, buf);
            free(*store);
            *store = tmp;
            free(buf);
            buf = NULL;
            return(bytes > 1 ? 1: bytes);

}
void split_store(char **store, char **line)
{
                size_t len;
                char *tmp;
                len = ft_strchr(*store, '\n') - *store;
                *line = ft_substr(*store, 0, len);
                tmp = ft_substr(*store, len + 1, ft_strlen(*store) - len);
                free(*store);
                *store =  tmp;
                

}
