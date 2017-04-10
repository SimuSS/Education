//#include <stdio.h>
//main()
//{
//	//1. 반복문을 사용해서 1 ~ 100까지 출려
//	int num = 1;
//	int tic = 0;
//	while(num <= 100)
//	{
//		printf("%d\n",num);
//		num++;
//	}
//
//	//2. 반복문을 이용해서 1 ~ 10까지의 합을 출력
//	num = 0;
//	tic = 1;
//	while(tic <= 10)
//	{
//		num=tic+num;
//		//num =+tic;
//		tic++;
//	}
//	printf("%d\n",num);
//
//	//3. 반복문을 이용해서 0 ~ 100까지 짝수만 출력
//	//숫자 0은 짝수다....
//	num = 0;
//	while(num < 100)
//	{
//		printf("%d\n",num);
//		num=num+2;
//		//num=+2;
//	}
//	getchar();
//}
/////////////////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//main()
//{
//	int dan = 0;
//	int count = 0;
//	int ret = 0;
//	int temp = 0;
//	int row = 0;
//	int colume = 0;
//	//Scanf함수로 값(구구단의 단)을 입력 받아 해당 구구단을 출력하시오. for문 이용
//	printf("구구단의 단을 입력해 주세요 : ");
//	scanf("%d",&temp);
//	for (dan = temp; count<10; count++)
//	{
//		ret = dan * count;
//		printf("%d * %d  = %d \n",dan,count,ret);
//	}
//
//	//1~100까지 홀수의 합을 for문으로 구현
//	ret = 0;
//	for (count=1; count<100; count++)
//	{
//		ret = ret + count;
//	}
//	printf("%d \n",ret);
//
//	//중첩 된 For문을 사용하여 
//	//*****
//	//*****
//	//*****
//	//*****
//	//를 출력하시오.
//	for (colume = 0; colume<4; colume++)
//	{
//		for (row = 0; row <6; row++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//중첩된 for를 사용하여 구구단 전체를 출력하시오.
//	for (dan =1; dan<=9; dan++)
//	{
//		for (count=1; count<=9; count++)
//		{
//			ret = dan * count;
//			printf("%d * %d  = %d \n",dan,count,ret);
//		}
//	}
//	getchar();
//	getchar();
//}
/////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
main()
{
	int dan = 0;
	int count = 0;
	int ret = 0;
	int temp1 = 0;
	int temp2 = 0;
	int row = 0;
	int colume = 0;

	//두 수를 입력 받아 A가 B보다 큰지, B가 A보다 큰지, A,B가 같은지 출력해 보자.
	printf("첫번째 숫자를 입력해 주세요. : ");
	scanf("%d",&temp1);
	printf("\n두번째 숫자를 입력해 주세요. : ");
	scanf("%d",&temp2);

	if (temp1 < temp2)
	{
		printf("\n두번째 숫자의 크기가 더 큽니다.");
	}else if (temp1 > temp2)
	{
		printf("\n첫번째 숫자의 크기가 더 큽니다.");
	}else
	{
		printf("\n두 숫자의 크기가 같습니다.");
	}

	// 두 수를 입력 받아 무조건 작은 수에서 큰수까지 차례로 출력하시오.
	printf("\n첫번째 숫자를 입력해 주세요. : ");
	scanf("%d",&temp1);
	printf("\n두번째 숫자를 입력해 주세요. : ");
	scanf("%d",&temp2);

	if (temp1 < temp2)
	{
		for (count=temp1; count<=temp2; count++)
		{
			printf("\n%d ",count);
		}
	}else if (temp1 > temp2)
	{
		for (count=temp2; count<=temp1; count++)
		{
			printf("\n%d ",count);
		}
	}else
	{
		printf("\n두 숫자의 크기가 같습니다.");
	}

	// 입력된 수가 짝수인지 홀 수 인지 구분하여 출력하시오.
	// 입력 2 -> 짝수입니다.

	printf("\n첫번째 숫자를 입력해 주세요. : ");
	scanf("%d",&temp1);

	if (0==temp1%2)
	{
		printf("\n짝수입니다.");
	}else
	{
		printf("\n홀수 입니다.");
	}
	//1~100까지 반복되는 반복문 안에서 if문을 사용하여 짝수만 출력하시오.
	for (count=1; count<=100; count++)
	{
		if (count%2 == 0)
		{
			printf("\n짝수 : %d",count);
		}
	}
	//1~100까지 반복되는 반복문 안에서 if문을 사용하여 5의 배수만 출력하시오.
	for (count=1; count<=100; count++)
	{
		if (count%5 == 0)
		{
			printf("\n5의 배수 : %d",count);
		}
	}

	//1~100까지 반복되는 반복문 안에서 if문을 사용하여 5의 배수와 3의 배수만 출력하시오.
	for (count=1; count<=100; count++)
	{
		if (count%5 == 0 || count%3 ==0)
		{
			printf("\n3,5의 배수 : %d",count);
		}
	}

	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
}