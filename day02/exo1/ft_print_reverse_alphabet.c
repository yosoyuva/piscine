#include <stdio.h>

void ft_print_reverse_alphabet(void);

void ft_print_reverse_alphabet(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a'; ch--) {
		ft_putchar(ch);
	}
}

int main()
{
	ft_print_reverse_alphabet();
}
