/////////////////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	srand(time(NULL));
//
//	for (a=0; a<10; a++)
//	{
//		b = rand();
//		printf("%d ",b);
//	}
//	getchar();
//}
/////////////////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	int MyCount = 0;
//	int Ran_num = 0;
//	int m_input = 0;
//	int m_success = 0;
//
//	srand(time(NULL));
//	Ran_num = (rand()%100)+1;
//
//	do 
//	{
//		printf("숫자를 입력해 주세요 : ");
//		scanf("%d",&m_input);
//		MyCount++;
//
//		if (m_input < Ran_num)
//		{
//			printf("그 보다 큽니다.\n");
//		}else if (m_input > Ran_num)
//		{
//			printf("그 보다 작습니다.\n");
//		}else if (m_input == Ran_num)
//		{
//			printf("정답입니다.\n");
//			printf("%d 만에 맞췄습니다.", MyCount);
//			m_success = 1;
//		}
//	} while (!m_success);
//	getchar();
//	getchar();
//}
/////////////////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void check(void);	//함수의 선언(prototype)
//
//int a;				//임시정의				// 별도로 초기화 하지 않는 경우 0으로 초기화 된다.
//int a;				//선언					// 둘중하나는 extern이 생략된 형태.
//extern int a;		//전역변수의 선언이다	//위의 int a;와 동일하며 extern이 생략되어 있다.
//
//int b = 10;			//정의
//int b;				//선언
//
//int main()
//{
//	printf("%d\n",a);
//	check();
//}
//
//int a = 30;			//전역변수의 정의
//void check(void)	//함수의 정의 (definition)
//{
//	puts("check");
//}
/////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void check(void);	//함수의 선언(prototype)

int g;
int x;
extern int g;	//변수 정의를 가져와서 쓰겠다는 선언
static int h;	//변수 정의(다른파일에 extern으로 h에 접근 금지)
				//이 파일 안에서만 전역 변수로 사용

//register int a;	//error
//auto int b;		//error
int main()
{
	extern int x;	//전역이나  다른 파읠의 정의를 가져와서 쓰는 선언
	static int y;	//전역과 지역 특성을 모두 같는 변수

	register int a = 10;	//register가 모자르면 Auto로 변신
	auto int b = 20;		//일반 변수
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//
//int get_passwd(void);
//void chance(int cnt);
//int compare(int a, int b);
//void police(int cnt);
//int temp;
//
////비밀번호입력기 함수4가지를 완성하세요
//main()
//{
//	int pwd = 1234;//기존에 정해둔 패스워드
//	int get_pwd; //받을 패스워드
//	int cnt=3; //기회는 3번 뿐
//	do{
//		get_pwd = get_passwd();//패스워드 받아 옴
//		if(compare(pwd, get_pwd)) //두변수 같은지 같으면 1 다르면 0을 리턴한다.
//		{ 
//			puts("통과");
//			break;
//		}else{
//			chance(--cnt); //기회를 보여주는 함수
//		}
//	}while(cnt); //cnt!=0
//	police(cnt); //경찰을 부르는 함수 cnt가 0이면 결찰을 부르는 함수
//}
//
//int get_passwd(void)
//{
//	printf("숫자를 입력해 주세요 :");
//	scanf("%d",&temp);
//	return temp;
//}
//
//int compare(int a, int b)
//{
//	if (a == b)
//	{
//		return 1;
//	}else
//	{
//		return 0;
//	}
//}
//
//void chance(int cnt)
//{
//	printf("현재 기회는 %d 남았습니다.\n",cnt);
//}
//
//void police(int cnt)
//{
//	if (cnt == 0)
//	{
//		printf("경찰입니다. 본인 맞으십니까?");
//		getchar();
//		getchar();
//	}
//}
/////////////////////////////////////////////////////////////////////////////////////////////////