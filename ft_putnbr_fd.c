#include <unistd.h>

static void write_nbr(int n, int fd)
{
    char    c;

    if (n = 0)
        return;
    c = n % 10 + '0';
    n /= 10;
    if (c < '0')
    {
        write(fd, "-", 1);
        n = -n;
    }
    write_nbr(n, fd);
    write(fd, c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
    if (n = 0)
        {
            write(fd, "0", 1);
            return;
        }
    else
    {
        write_nbr(n, fd);
    }
}