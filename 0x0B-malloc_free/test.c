#include <stdio.h>
#include "main.h"
#include <stdlib.h>

int main(void)
{
	 char *str, str_arr[6] = "Hello";
	 int i = 0;

	 str = create_array(5, str_arr[0]);

	 do
	 {
		 str[i] = str_arr[i];
		 i++;
		 _putchar(str[i]);
	 }
	 while (i <= 5);
	 _putchar(10);

	 free(str);

	 return  (0);
}
