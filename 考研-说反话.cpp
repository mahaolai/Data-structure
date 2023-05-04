#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str[90];
	int i = 0, len;
	int r = 0, h = 0;
	char ans[90][90];
	gets(str);  // 可以接受空格。
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			ans[r][h] = str[i];
			h++;
		}
		else
		{
			ans[r][h] = '\0'; // 单词的末尾要为 \0。
			r++;
			h = 0; 
		}
	 } 
	ans[r][h] = '\0';
	for (i = r; i >= 0; i--)
	{
		printf("%s", ans[i]);
		if (i > 0)
			printf(" ");
	}
	return 0;
}
