#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{
	char H[][4] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
	char st1[MAX], st2[MAX], st3[MAX], st4[MAX];
	scanf("%s", &st1);
	scanf("%s", &st2);
	scanf("%s", &st3);
	scanf("%s", &st4);
	int i, t = 0;
	for (i = 0; i < strlen(st1); i++)
	{
		if (t == 0 && st1[i] == st2[i] && st1[i] >= 'A' && st1[i] <= 'G')
		{
			t = 1;
			printf("%s ", H[st1[i] - 'A']);
			continue;
		}
		
		else if (t == 1 && st1[i] == st2[i] && (st1[i] >= 'A' && st1[i] <= 'N' || st1[i] >= '0' && st1[i] <= '9'))
		{
			if (st1[i] >= '0' && st1[i] <= '9')
			{
				printf("0%d:", st1[i] - '0');
				break;
			}
			else if (st1[i] >= 'A' && st1[i] <= 'N')
			{
				printf("%d:", st1[i] - 'A' + 10);
				break;
			}
		}
	}
	int j;
	for (j = 0; j < strlen(st3); j ++)
	{
		if (st3[j] == st4[j] && (st3[j] >= 'a' && st3[j] <= 'z' || st3[j] >= 'A' && st3[j] <= 'Z'))
		{
			if (j < 10)
				printf("0%d", j);
			else
				printf("%d", j);
		}
	}
	return 0;
}
