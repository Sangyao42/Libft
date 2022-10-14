#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "libft.h"

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

    /**************isalpha**********************/
    c = 'Q';
    printf("Result when uppercase alphabet is passed: %d\n", isalpha(c));
	printf("Result when uppercase alphabet is passed: %d\n", ft_isalpha(c));

    c = 'q';
    printf("\nResult when lowercase alphabet is passed: %d\n", isalpha(c));
	printf("\nResult when lowercase alphabet is passed: %d\n", ft_isalpha(c));

    c='+';
    printf("\nResult when non-alphabetic character is passed: %d\n", isalpha(c));
	printf("\nResult when non-alphabetic character is passed: %d\n", ft_isalpha(c));


    /**************isalnum**********************/
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

    /**************isascii**********************/
    c = 0x00;
	printf("When %c is passed, return value is %d\n", c, isascii(c));
	printf("When %c is passed, return value is %d\n", c, ft_isascii(c));

    c = 0x80;
    printf("When %c is passed, return value is %d\n", c, isascii(c));
	printf("When %c is passed, return value is %d\n", c, ft_isascii(c));

    c = 'Q';
    printf("When %c is passed, return value is %d\n", c, isascii(c));
	printf("When %c is passed, return value is %d\n", c, ft_isascii(c));

    /**************isprint**********************/
    c = 0x00;
	printf("When %c is passed, return value is %d\n", c, isprint(c));
	printf("When %c is passed, return value is %d\n", c, ft_isprint(c));

    c = 'Q';
    printf("When %c is passed, return value is %d\n", c, isprint(c));
	printf("When %c is passed, return value is %d\n", c, ft_isprint(c));

    /**************tolower**********************/
    char result;

    c = 'M';
    result = tolower(c);
    printf("tolower(%c) = %c\n", c, result);
	result = ft_tolower(c);
    printf("ft_tolower(%c) = %c\n", c, result);

    c = '+';
    result = tolower(c);
    printf("tolower(%c) = %c\n", c, result);
	result = ft_tolower(c);
    printf("ft_tolower(%c) = %c\n", c, result);

    /**************toupper**********************/
    c = 'm';
    result = toupper(c);
    printf("toupper(%c) = %c\n", c, result);
	result = ft_toupper(c);
    printf("ft_toupper(%c) = %c\n", c, result);

    c = '+';
    result = toupper(c);
    printf("toupper(%c) = %c\n", c, result);
	result = ft_toupper(c);
    printf("ft_toupper(%c) = %c\n", c, result);

    /************ft_strlen**********************/
    char str[] = "42 Heilbronn";
    printf("42 Heilbronn has %zu characters\n", strlen(str));
    printf("42 Heilbronn has %zu characters\n", ft_strlen(str));

    /************ft_strlcpy**********************/
    int counter0, counter1, counter2, counter3, counter00,counter01,counter02,counter03;
	char destination[30];
	char destination1[30];
	char *source = "This,is,the,source,string."; //length is 26

	printf("%s\n",source);

	counter0 = ft_strlcpy(destination,source,0);
	printf("%c\n",destination[0]);
	printf("%s\n",destination);
	printf("%d\n", counter0);
	counter00 = strlcpy(destination1, source, 0);
	printf("%c\n",destination1[0]);
	printf("%s\n",destination1);
	printf("%d\n", counter00);
	printf("\n");

	counter1 = ft_strlcpy(destination,source,5);
	printf("%s\n",destination);
	printf("%d\n", counter1);
	counter01 = strlcpy(destination1, source, 5);
	printf("%s\n",destination);
	printf("%d\n", counter01);
	printf("\n");

	counter2 = ft_strlcpy(destination,source,26);
	printf("%s\n",destination);
	printf("%d\n", counter2);
	counter02 = strlcpy(destination1, source, 26);
	printf("%s\n",destination);
	printf("%d\n", counter02);
	printf("\n");

	counter3 = ft_strlcpy(destination,source,30);
	printf("%s\n",destination);
	printf("%d\n", counter3);
	printf("%c, %c, %c\n",destination[25],destination[26], destination[27]);
	counter03 = strlcpy(destination1,source,30);
	printf("%s\n",destination);
	printf("%d\n", counter03);
	printf("%c, %c, %c\n",destination1[25],destination1[26], destination1[27]);

    /************ft_strncmp**********************/
    char a[] = "aBcDeF";
    char b[] = "AbCdEf";

    char g[] = "aBcdef";
    char d[] = "aBcDeFg";
	char e[] = "";
	char f[] = "";

	printf("a VS b: %d\n", ft_strncmp(a, b, 0));
    printf("a VS b: %d\n", strncmp(a, b, 0));
	printf("\n");

	printf("a VS c: %d\n", ft_strncmp(a, g, 5));
    printf("a VS c: %d\n", strncmp(a, g, 5));
	printf("\n");
	printf("a VS c: %d\n", ft_strncmp(a, g, 8));
    printf("a VS c: %d\n", strncmp(a, g, 8));
	printf("\n");

	printf("a VS d: %d\n", ft_strncmp(a, d, 8));
    printf("a VS d: %d\n", strncmp(a, d, 8));
	printf("\n");

	//e contains 0 element
	printf("a VS e: %d\n", ft_strncmp(a, e, 0));
    printf("a VS e: %d\n", strncmp(a, e, 0));
	printf("\n");
	printf("a VS e: %d\n", ft_strncmp(a, e, 5));
    printf("a VS e: %d\n", strncmp(a, e, 5));
	printf("\n");
	printf("e VS a: %d\n", ft_strncmp(e, a, 8));
    printf("e VS a: %d\n", strncmp(e, a, 8));
	printf("\n");

	printf("e VS f: %d\n", ft_strncmp(e, f, 0));
    printf("e VS f: %d\n", strncmp(e, f, 0));
	printf("\n");
	printf("e VS f: %d\n", ft_strncmp(e, f, 8));
    printf("e VS f: %d\n", strncmp(e, f, 8));
	printf("\n");

    /************ft_atoi**********************/
	char *test1;
    char *test2;
    char *test3;
	test1 = "\n\t\r+932r3\rfeww3r";
    test2 = "\n\t\r-932r3\rfeww3r";
    test3 = "\n\t\r932r3\rfeww3r";
	printf("%d\n", atoi(test1));
    printf("%d\n", ft_atoi(test1));
    printf("%d\n", atoi(test2));
    printf("%d\n", ft_atoi(test2));
    printf("%d\n", atoi(test3));
    printf("%d\n", ft_atoi(test3));

    /************ft_strchr**********************/
    /*char *str;
    char testchr1;
    char testchr2;
    char testchr3;
    char *strchr_result;

    str = "abCdeaBc";
    testchr1 = 'a';
    testchr2 = 'C';
    testchr3 = 0;

    strchr_result = ft_strchr(str, testchr1);
    printf("where %d locates in str is %c", testchr1, strchr_result);*/

    /************ft_strlcat**********************/
    char strlcatsrc[21] = "the source to append";
    char strlcatdst[50] = "the destination";
    unsigned long strlcat_len;
    //unsigned long strlcat_len1;

    strlcat_len = ft_strlcat(strlcatdst, strlcatsrc, 50);
    printf("the length of src and dst is %zu.\n", strlcat_len);
    //strlcat_len1 = strlcat(strlcatdst, strlcatsrc, 50);
    //printf("the length of src and dst is %zu.\n", strlcat_len1);

	return 0;
}
