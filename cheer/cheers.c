#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	int num = 1;
	for (i = 2; i < 10; i++)
	{
		num *= i;
	}
	printf("%d\n", num);
	return 0;

}

/////////////////////////////////////////////////////////////////
//int main()
//{
//	int i = 0;
//	do
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d\n",i);
//		
//	} 
//	while (i <= 10);
//	return 0;
//}

///////////////////////////////////////////////////////////////////
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;// ѭ��0��
//	return 0;
//}

///////////////////////////////////////////////////////////////////

//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//////////////////////////////////////////////////////////////////
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (i=0;i<10;i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("hehe\n");//100��hehe
//		}
//	}
//
//	return 0;
//}

////////////////////////////////////////////////////////////////////
//int main()
//{
//	int i = 0;
//	//��ʼ�� �ж�     ����
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}

//////////////////////////////////////////////////////////////////
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;//����
//	}
//	return 0;
//}

///////////////////////////////////////////////////////////////////
//int main()
//{
//	/*int ch = 0;
//	while ((ch = getchar) != EOF)
//	{
//		putchar(ch);
//	}*/
//	/*int ch = getchar();
//
//	putchar(ch);
//	printf("%c\n", ch);*/
//
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N��:>");
//	//��������ʣ\n
//	//��ȡһ��\n
//	ret = getchar();
//
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}

/////////////////////////////////////////////////////////////////////////////////
//int main()
//{
//	//if (1)
//	//	printf("hehe\n");
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d\n", i);
//		
//	}
//	return 0;
//}

//////////////////////////////////////////////////////////////////////////////////
//int main()
//{
//	//printf("abc\ndef");
//	//C����ת���ַ�
//	//
//	printf("%d", strlen("c:\test\041\test.c"));
//	//   \t -- tab - ˮƽ�Ʊ��
//	//   \041 -- \ddd  d��8��������
//	//   ��33��ΪASCII��ֵ������ַ�
//	printf("%c\n", '\041');
//	return 0;
//}

//int main()
//{
//	//sizeof - ������ - ���Ǻ���
//	//sizeof(int)
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(a));
//
//
//	//printf("The size of short is %d bytes.\n", sizeof(short));
//	//printf("The size of int is %d bytes.\n", sizeof(int));
//	//printf("The size of long is %d bytes.\n", sizeof(long));
//	//printf("The size of long long is %d bytes.\n", sizeof(long long));
//
//	return 0;
//}
//
//int main()
//{
//	//printf("%d\n", 100);
//	//printf("%c\n", 100);
//	//printf("%s\n", "abcdef");
//	int a = 10;
//	printf("%p\n", &a);
//	printf("%x\n", &a);
//
//	return 0;
//}
//

//
//int main()
//{
//	int n = 0;
//	//����
//	scanf("%d", &n);//1234
//	//���
//	while (n)
//	{
//		printf("%d", n % 10);
//		n = n / 10;
//	}
//
//	return 0;
//}


//int main()
//{
//	//int ch = getchar();//a\n
//
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		printf("%c\n", ch + 32);
//		getchar();//����'\n'
//	}
//	return 0;
//}

//���뻺�����ĸ���


//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	printf("��ȷ��(Y/N):>");
//	getchar();//����������\n
//
//	int ch = getchar();//
//	if (ch == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("����ȷ��\n");
//
//	return 0;
//}
//////////////////////////////////////////////////////////////////////////////////
//int main()
//{
//	/*int a = 10;
//	scanf("%d", &a);
//	printf("%d\n", a);*/
//
//	char arr[10] = { 0 };
//
//	strcpy(arr, "hello");
//	printf("%s\n", arr);
//
//	return 0;
//}
////////////////////////////////////////////////////////////////////////////////////

//int main()
//{
//	int a = 10;
//	scanf("%d", &a);
//	pritnf("%d\n", a);
//	return 0;
//}

////////////////////////////////////////////////////////////////////////////////

//int main()
//{
//	char arr[5] = { 0 };//5���ַ�
//	scanf("%s", arr);//�����ʱ�򳬹�5���ַ���
//	printf("%s\n", arr);
//	return 0;
//}
//
//����2013
//2017-2019
//newc++file.cpp
//