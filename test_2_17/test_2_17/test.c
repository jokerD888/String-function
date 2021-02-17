#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//strcpy使用注意
//1.源字符串必须以'\0'结束
//2.目标空间足够大，以确保能存放源字符串
//3.目标空间必须可改变，错误示范：char* arr="abcde",常量字符串只读不可改变
char* my_strcpy(char* dest,const char* src)//源头字符串内容不可修改
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	//拷贝src指向的字符串到dest指向的空间，包含'\0'

	//while (*src != '\0')
	//{
	//	*dest++ = *src++;
	//}
	//*dest = *src;

	//while (*(src-1)!='\0')
	//{
	//	*dest++ = *src++;
	//}

	while (*dest++ = *src++)//赋值表达式的值
	{
		;
	}
	//返回目的空间的起始地址
	return ret;

}
//int main(void)
//{
//	char arr1[] = "abcdefjhi";
//	char arr2[] = "hehe";
//	//my_strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//strcat使用
//1.从目的字符串'\0'开始追加，源字符串必须以'\0'结束
//2.目标空间足够大，空间内容可修改

char* my_strcat(char* dest, const char* src)
{
	assert(dest);
	assert(src );	
	char* ret = dest;
	//找到\0位置
	while (*dest!='\0')
	{
		dest++;
	}
	//追加
	while (*dest++=*src++)
	{
		;
	}
	//返回目的空起始地址
	return ret;
	
}
//int main(void)
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	printf("%s\n", (my_strcat(arr1, arr2)));
//	return 0;
//}

//strcmp使用
//逐个字符比较ASCLL码表大小
//strcmp(s1,s2)
//s1>s2 返回大于0
//s1==s2 返回0
//s1<s2 返回小于0
int my_strcmp(const char* str1,const char* str2)
{
	assert(str1 && str2);
	//比较
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	if (*str1 < *str2)
		return -1;
	else
		return 1;
}
//int main(void)
//{
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	//int ret = strcmp(p1, p2);
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}

//相对更安全的n族字符串处理函数
//strcnpy    只拷贝指定n个字符并不追加'\0'，若n大于源字符个数m，则补加n-m个'\0'
//strncat   追加指定n个字符并自动补加'\0',若n大于源字符个数m，只追加源字符本身m个字符并补一个'\0'
//strncmp   比较前n个字符
