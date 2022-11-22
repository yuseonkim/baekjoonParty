import java.util.Scanner;

public class B1316{
    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args){
        int N = sc.nextInt();
        int count =0;
        for(int i=0; i<N; i++){
            if(check() == true)
                count++;
        }
        System.out.println(count);
    }

    public static boolean check(){ // 리턴값 false이면 그룹 x,  true이면 그룹
        // 연속인지 체크하기
        //알파벳 26개 담을 배열 선언
        //배열을 boolean으로 선언해서 초기값 false
        boolean[] check = new boolean[26];
        int prev = 0; // 비교할 이전의 값
        String str = sc.next(); // 문자열을 입력받음

        for(int i=0; i<str.length(); i++){  // 문자열 하나씩 for문 돌리면서
            int now = str.charAt(i); // 문자 하나씩 뽑아서 비교하기 char로 문자 뽑아서 int형(아스키코드)로 변환

            // 1. 이전과 지금의 문자 다른 경우 (1) 지금의 문자 처음 나온경우 멈춤 x (2) 지금의 문자 나온적 있는 경우 종료 (그룹단어 아님)

            if(prev != now) {
                if(check[now -'a'] == false)  // (1) 배열에 now(int값)에서 a의 아스크코드 값 뺀 인덱스
                    check[now - 'a'] = true; // false였던 초기값을 한번 나왔으니까 true로 바꿔준다
                else{
                    return false; // (2)
                }
            }

            // 2. 이전과 지금의 문자 같으면 계속 check
            else
                continue;
        }
        return true;
    }

}