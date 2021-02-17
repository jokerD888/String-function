#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//strcpyʹ��ע��
//1.Դ�ַ���������'\0'����
//2.Ŀ��ռ��㹻����ȷ���ܴ��Դ�ַ���
//3.Ŀ��ռ����ɸı䣬����ʾ����char* arr="abcde",�����ַ���ֻ�����ɸı�
char* my_strcpy(char* dest,const char* src)//Դͷ�ַ������ݲ����޸�
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'

	//while (*src != '\0')
	//{
	//	*dest++ = *src++;
	//}
	//*dest = *src;

	//while (*(src-1)!='\0')
	//{
	//	*dest++ = *src++;
	//}

	while (*dest++ = *src++)//��ֵ���ʽ��ֵ
	{
		;
	}
	//����Ŀ�Ŀռ����ʼ��ַ
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

//strcatʹ��
//1.��Ŀ���ַ���'\0'��ʼ׷�ӣ�Դ�ַ���������'\0'����
//2.Ŀ��ռ��㹻�󣬿ռ����ݿ��޸�

char* my_strcat(char* dest, const char* src)
{
	assert(dest);
	assert(src );	
	char* ret = dest;
	//�ҵ�\0λ��
	while (*dest!='\0')
	{
		dest++;
	}
	//׷��
	while (*dest++=*src++)
	{
		;
	}
	//����Ŀ�Ŀ���ʼ��ַ
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

//strcmpʹ��
//����ַ��Ƚ�ASCLL����С
//strcmp(s1,s2)
//s1>s2 ���ش���0
//s1==s2 ����0
//s1<s2 ����С��0
int my_strcmp(const char* str1,const char* str2)
{
	assert(str1 && str2);
	//�Ƚ�
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

//��Ը���ȫ��n���ַ���������
//strcnpy    ֻ����ָ��n���ַ�����׷��'\0'����n����Դ�ַ�����m���򲹼�n-m��'\0'
//strncat   ׷��ָ��n���ַ����Զ�����'\0',��n����Դ�ַ�����m��ֻ׷��Դ�ַ�����m���ַ�����һ��'\0'
//strncmp   �Ƚ�ǰn���ַ�
