import java.util.Date;
import java.util.Scanner;
public class B1308 {

    //윤년인지 판단하는 메소드
    static int[] ly(int year) {  //year을 받고
        int[] day={31,28,31,30,31,30,31,31,30,31,30,31};//1~12월 day저장
        //윤년의 기준 (1) 연수가 4로 나누어 떨어지고 (2) 100으로 나누어 떨어지지는 않아야함
        // (3) 혹은 400으로 나누어 떨어져야함
        if(year%4 == 0 && year%100 !=0 || year %400 == 0 )
            day[1] =29; // 윤년의 경우 2월이 29일이다
        return day; //day를 리턴한다
    }
    // 날짜수 합하는 메소드
    static int sumday(int year, int month, int day){ //날짜를 받고
        int days =0;
        int[] date; //날짜를 배열에 저장한다
        for(int i=1; i< year; i++){
            date = ly(i); // ?
            for(int j =0; j<12; j++){
                days += date[j]; //?
            }
        } // ?
        date = ly(year);
        for(int i =0; i< month -1; i++){
            day+= date[i];
        }
        days += day;
        return days;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // today
        int ty = sc.nextInt();
        int tm = sc.nextInt();
        int td = sc.nextInt();
        // dday
        int dy = sc.nextInt();
        int dm = sc.nextInt();
        int dd = sc.nextInt();

        //gg (1) 디데이가 오늘보다 1000년 초과한 경우 혹은
        //(2) 1000년 앞서고 월이 더 큰경우 혹은
        //(3) 1000년 앞서고 월이 같고 일이 더 큰경우
        if((dy - ty > 1000) || (dy - ty == 1000 && dm >tm)
        ||(dy - ty == 1000 && dm == tm && dd >= td))
            System.out.println("gg");
        else{
            long T = sumday(ty,tm,td);
            long D = sumday(dy,dm,dd);
            System.out.println("D-"+ (D-T));
        }
    }}