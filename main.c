
#include "usart.h"
int main()
{
	char c;
	usart_begin(9600);
	
	while(1)
	{
		c=usart_rxChar();
		usart_print_string("hello world");
		_delay_ms(1000);
	}
}