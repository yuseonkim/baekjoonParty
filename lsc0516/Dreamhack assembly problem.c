int main()
{
    int num = 0X30;

    int mem1[4][8] = {{0X67, 0X55, 0X5c, 0X53, 0X5f, 0X5d, 0X55, 0X10}, {0X44, 0X5f, 0X10, 0X51, 0X43, 0X43, 0X55, 0X5d}, {0X52, 0X5c, 0X49, 0X10, 0X47, 0X5f, 0X42, 0X5c},{0X54, 0X11, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00}};

    for (int i = 0; i <4; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (i == 3 && j > 1)
                break;

            int num2 = mem1[i][j];

            printf("%c", num ^ num2);
        }
    }
    
    return 0;

}

//https://dreamhack.io/learn/quiz/17
//어셈블리어가 동작하는 원리를 간단하게 배우고 그에 대한 문제를 풀어보았다.
//0x400000 부터 0x400019까지의 데이터에 저장된 값에서 OX30을 빼고 이를 아스키코드로 변형하면 Welcome assembly world!가 출력된다.
