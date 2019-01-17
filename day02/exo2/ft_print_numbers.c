int ft_putchar(char c);

void ft_print_numbers(void);

int main() {

	ft_print_numbers();
}

void ft_print_numbers(void) {

	char ch;
	
	for (ch = '0'; ch <= '9' ; ch++) {

	ft_putchar(ch);

	}
}
ft_putchar()
