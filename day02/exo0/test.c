void ft_print_alphabet(void);

int ft_putchar(char c);

int main() 
{
	ft_print_alphabet();
	return 0;
}



void ft_print_alphabet(void) 
{
   
   char ch;

   for(ch = 'a' ; ch <= 'z' ; ch++) {
      ft_putchar(ch);
   }
   
}
