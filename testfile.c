#include <stdio.h>
#include <ctype.h>

int main()
{
	char c;

	/**************isdigit**********************/
	c ='5';
	printf("Result when numeric character is passed: %d\n", isdigit(c));
	printf("Result when numeric character is passed: %d\n", ft_isdigit(c));

	c ='+';
	printf("Result when non-numeric character is passed: %d\n", isdigit(c));
	printf("Result when numeric character is passed: %d\n", ft_isdigit(c));

	/*isalpha*/
	return 0;
}

/**************isdigit**********************/
int main()
{
	char c;
    c = 'Q';
    printf("Result when uppercase alphabet is passed: %d\n", isalpha(c));
	printf("Result when uppercase alphabet is passed: %d\n", ft_isalpha(c));

    c = 'q';
    printf("\nResult when lowercase alphabet is passed: %d\n", isalpha(c));
	printf("\nResult when lowercase alphabet is passed: %d\n", ft_isalpha(c));

    c='+';
    printf("\nResult when non-alphabetic character is passed: %d\n", isalpha(c));
	printf("\nResult when non-alphabetic character is passed: %d\n", ft_isalpha(c));

    return 0;
}

/**************isalnum**********************/
int main()
{
    char c;

    c = '5';
    printf("When %c is passed, return value is %d\n", c, isalnum(c));
	printf("When %c is passed, return value is %d\n", c, ft_isalnum(c));

    c = 'Q';
    printf("When %c is passed, return value is %d\n", c, isalnum(c));
	printf("When %c is passed, return value is %d\n", c, ft_isalnum(c));

    c = 'l';
    printf("When %c is passed, return value is %d\n", c, isalnum(c));
	printf("When %c is passed, return value is %d\n", c, ft_isalnum(c));

    c = '+';
    printf("When %c is passed, return value is %d\n", c, isalnum(c));
	printf("When %c is passed, return value is %d\n", c, ft_isalnum(c));

    return 0;
}


/**************isascii**********************/
int main()
{
    char c;

	c = 0x00;
	printf("When %c is passed, return value is %d\n", c, isascii(c));
	printf("When %c is passed, return value is %d\n", c, ft_isascii(c));

    c = 0x80;
    printf("When %c is passed, return value is %d\n", c, isascii(c));
	printf("When %c is passed, return value is %d\n", c, ft_isascii(c));

    c = 'Q';
    printf("When %c is passed, return value is %d\n", c, isascii(c));
	printf("When %c is passed, return value is %d\n", c, ft_isascii(c));

    return 0;
}

/**************tolower**********************/
int main()
{
    char c, result;

    c = 'M';
    result = tolower(c);
    printf("tolower(%c) = %c\n", c, result);
	result = ft_tolower(c);
    printf("tolower(%c) = %c\n", c, result);

    c = '+';
    result = tolower(c);
    printf("tolower(%c) = %c\n", c, result);
	result = ft_tolower(c);
    printf("tolower(%c) = %c\n", c, result);

    return 0;
}
