#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
	char arr1[] = "welcome to bit!!!!!!!!";
	char arr2[] = "######################";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];

		printf("%s\n", arr2);

		left++;
		right--;
		Sleep(300);
		system("cls");//执行系统命令的一个函数-----cls --> 清空屏幕
	}
	printf("%s\n", arr2);
	return 0;
}