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
    
    // 날짜수 합하는 메소드 (총일수를 더할 것임)
    static int sumday(int year, int month, int day){ //날짜를 받고
        int days =0; //계속 누적되기 위해 반복문 밖에서 초기화 
        int[] date; //해당 연도의 일자를 12달로 나누어 저장 
        
        for(int i=1; i< year; i++){ //해당 year은 전체가 아니니까 포함하지 않음
            date = ly(i); // 윤년인지 구하는 메소드에 각 월별로 일수가 저장되어있음
            //1년부터 ~ 해당연도까지 반복하면서
            //예 ) date = ly(2000) , date = {31,28,31,30,31,30,31,31,30,31,30,31}
            
            for(int j =0; j<12; j++){
                days += date[j];  //각각 연도의 전체 일수(월별로)를 더해준다
            //예)  {31,28,31,30,31,30,31,31,30,31,30,31} 를 해당 월까지 반복하며 day에 더해준다
      
            }
        }
        
        // 해당 year 반복문
        date = ly(year); //윤년메소드로 위와 같이 배열 구함
        for(int i =0; i< month -1; i++){ //예) 5월 27일이면 4월까지의 일수만 구한다
            days += date[i];
        } 
        
        days += day; //해당 일수 더하기 
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
