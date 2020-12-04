#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[256], s2[256];
	char* p;

	puts("strstr 함수");
	printf("텍스트 : ");
	scanf_s("%s", s1);
	printf("패턴 : ");
	scanf_s("%s", s2);

	p = strstr(s1, s2);

	if (p == NULL)
		printf("텍스트에 패턴이 없습니다.\n");
	else {
		int ofs = p - s1;
		printf("\n%s\n", s1);
		printf("%*s|\n", ofs, "");
		printf("%*s%s\n", ofs, "", s2);
	}

	return 0;
}