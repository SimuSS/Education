//break���� �ݺ����� Ż�� �ϴ� ��쿡 �ش���.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// #include <stdio.h>
	// 	int count = 0;
	// 	int tick = 1;
	// 	int main(void)
	// 	{
	// 			//goto���� ����Ͽ� 1~10������ ���� ����Ͻÿ�.
	// 		goto init;
	// 	init:
		
	// 		count += tick;
	// 		tick++;
			
	// 		if (tick == 11)
	// 		{
	// 			goto end;
	// 		}
	// 		goto init;
		
	// 	end:
	// 		printf("%d",count);
	// 	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// #include <stdio.h>
	// ��й�ȣ�� ����Ƚ�� �̻� Ʋ���� ��� ������ ���̰� ����ÿ�.
	// char police[20] = "Freeze!!";
	// const int password = 1234;
	// int temp = 0;
	// int count = 2;
	// int success = 0;
	// int main(void)
	// {
	// 		while(!success)
	// 	{
	// 		printf("Please Enter : Password ");
	// 		scanf("%d", &temp);
	// 		if (password != temp)
	// 		{
	// 			printf("Retry again\n");
	// 			printf("%d times left.\n",--count);
	// 			if (count < 0)
	// 			{
	// 				printf("%s",police);
	// 				break;
	// 			}
	// 		}else{
	// 			printf("Welcome~!! master!!\n");
	// 			success = 1;
	// 		}
	// 	}
	// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// #include <stdio.h>
	// int money = 0;
	// int total = 0;
	// int success = 0;
	// int main(void)
	// {
	// 	do 
	// 	{
	// 		printf("\n�����Է� : ");
	// 		scanf("%d",&money);
	// 		if ((money == 100) || (money == 500) || (money == 1000))
	// 		{
	// 			total += money;
	// 			printf("total : %d",total);
	// 		}
	// 		else
	// 		{
	// 			printf("�߸� �� ȭ����� �Դϴ�.");
	// 		}
	// 	}while(!success);
	// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// #include <stdio.h>
	// int money = 0;
	// int total = 0;
	// int TRUE = 1;
	// int main(void)
	// {
	// 	do 
	// 	{
	// 		printf("\n�����Է� : ");
	// 		//success = puts("�����Է� : "); //Printf�� �ٸ��� ��ȯ���� ����.
	// 		scanf("%d",&money);
	// 		if ((money == 100) || (money == 500) || (money == 1000))
	// 		{
	// 			total += money;
	// 			printf("total : %d",total);
	// 		}
	// 		else
	// 		{
	// 			printf("�߸� �� ȭ�� ���� �Դϴ�.");
	// 		}
	// 	}while(TRUE);
	// }
	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//#include <stdio.h>
	//int a = 10, b = 5;
	//int TRUE = 1;
	//int main(void)
	//{
	//int Sum_Number(int number1, int number2);
	////int number1=0, number2=0;
	////�μ��� ���� ����Ͻÿ�.
	//
	//printf("%d",Sum_Number(a,b)); 

	//int Sum_Number(int number1, int number2)
	//{
	//	return number1+number2;
	//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int get_num();
int filter_num(int num);
int half_print(int num);

int main(void)
{
	int num;
	num = get_num(); // �� �Լ��� Keyboard�� �Է� �޴´�.
	num = filter_num(num);	// num�� ���� 1~100 ���� ���̸� 1000�� ���� �����Ѵ�. 
							// 1~100 ���̰� �ƴϸ� �״�� �����Ѵ�.
	half_print(num);//1���� num���� �ݱ����� ����ϴ� �Լ�.

	getchar();
	getchar();
}

int get_num()
{
	int temp = 0;
	printf("���ڸ� �Է��� �ּ���.");
	scanf("%d",&temp);
	return temp;
}

int filter_num(int num)
{
	if (1 <= num && num <=100)
	{
		return num +1000;
		printf("%d",num+1000);
	}
	return num;
	printf("%d",num);
}

int half_print(int num)
{
	printf("%d",num/2);
}