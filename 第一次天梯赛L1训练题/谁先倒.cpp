#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//    int a, b, p = 0, q = 0;
//    int arr[100][4] = { 0 };
//    scanf("%d %d", &a, &b);
//    int n;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3]);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        int m = arr[i][0] + arr[i][2];
//        if (arr[i][1] != arr[i][3])
//        {
//            if (m == arr[i][1])
//            {
//                a--; p++;
//            }
//            if (m == arr[i][3])
//            {
//                b--; q++;
//            }
//        }
//        if (a < 0)
//        {
//            printf("A\n");
//            printf("%d", q);
//            break;
//        }
//        if (b < 0)
//        {
//            printf("B\n");
//            printf("%d", p);
//            break;
//        }
//    }
//    return 0;
//}