#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h>    // memset 함수가 선언된 헤더 파일

/**********************************************************************************
memset 함수 사용예제 1 - 기본 사용법
출처: https://dojang.io/mod/page/view.php?id=287
***********************************************************************************/
// int main()
// {
//     long long *numPtr = malloc(sizeof(long long));  // long long의 크기 8바이트만큼 동적 메모리 할당

//     memset(numPtr, 0x27, 2);    // numPtr이 가리키는 메모리를 8바이트만큼 0x27로 설정

//     printf("0x%llx\n", *numPtr);    // 0x2727272727272727: 27이 8개 들어가 있음

//     free(numPtr);    // 동적으로 할당한 메모리 해제


//     char *cPtr = malloc(sizeof(char));    // char의 크기 1바이트만큼 동적 메모리 할당

//     memset(cPtr, 0, sizeof(char));    // char의 크기 1바이트만큼 0으로 설정(올바른 방법)
//     memset(cPtr, 0, sizeof(char *));  // 32비트: char 포인터의 크기 4바이트만큼 0으로 설정(잘못된 방법)
//                                     // 64비트: char 포인터의 크기 8바이트만큼 0으로 설정(잘못된 방법)

    
//     free(cPtr);
//     return 0;
// }

// #include <string.h>
// #include <stdio.h>

/**********************************************************************************
memset 함수 사용예제 2 - 문자 배열 변경
출처: https://blockdmask.tistory.com/441
***********************************************************************************/
// int     main(void)
// {
//     char    arr1[] = "Hello World!";
//     memset(arr1, '!', 3 * sizeof(char));
//     printf(arr1); 
// }

// #include <string.h>
// #include <stdio.h>
/**********************************************************************************
memset 함수 사용예제 3 - 배열 초기화
출처: https://blockdmask.tistory.com/441
***********************************************************************************/

// void    printAll(int *pArr, int len)
// {
//     for (int i = 0; i < len; i++)
//     {
//         printf("%d", *(pArr + i));
//     }
//     printf("\n\n");
// }

// int     main(void)
// {
//     int arr1[20];
//     for (int i = 0; i < 20; i++)
//     {
//         arr1[i] = 0;
//     }

//     printf("for     : ");
//     printAll(arr1, 20);


//     int arr2[20];
//     memset(arr2, 0, 20 * sizeof(int));

//     printf("memset  : ");
//     printAll(arr2, 20);

//     return 0;

// }

/**********************************************************************************
memset 함수 사용예제 3 - 사용시 주의 사항
출처: https://blockdmask.tistory.com/441
***********************************************************************************/
#include <string.h>
#include <stdio.h>

int main(void)
{
    int arr[5];

    // memset은 바이트 단위로 값을 초기화합니다.
    // 아래의 코드에서의 초기화에서의 1은 1바이트 단위로 만든 1로 
    // 4바이트로 표현된 숫자 1은 제대로된 숫자로 표현되지 못합니다.
    memset(arr, 0, sizeof(arr));
    // 1을 넣을 경우, 1바이트 마다 0x01이 채워지게 되며, 
    // 총 4바이트가 채워지면 0x(01 01 01 01)이 채워지면서 다른 값이 됩니다

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(arr + i));
    }
    return 0;
}

/* 결론적으로 0이 아닌 char 타입이 아닌 값을 넣어서 세팅하려 할 경우 우리가 원하는 값으로 세팅할 수 없다.
즉, 0, -1, char 타입만 사용하는 것이 허용된다. */

