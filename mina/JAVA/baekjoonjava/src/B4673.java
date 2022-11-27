public class B4673 {
    public static void main(String[] args){
       boolean[] selfnumber = new boolean[10001];
       // 셀프넘버인지 boolean으로 판별

        for(int i =1; i<10001; i++){
            int n = d(i);

            if(n <10001){ // 10000 넘으면 ㄴㄴ
                selfnumber[n] = true;
            }
        }// 1부터 1000까지 검사

        for(int i=1; i<10001; i++){
            if(!selfnumber[i]){ //false만 출력
                System.out.println(i);
        }}
    }
    public static int d(int number){
        //return 되는 수 -> number를 생성자로 하는 수
        int sum = number;
        //셀프넘버 찾기
        while (number !=0){
            //number가 0이 아닐때까지 반복 (숫자를 계속 줄여가며 나눈다)
            sum += (number %10); //1의자리수
            number /= 10; // 1의자릿수 없애기(이미 더했으니까)
            //즉 sum에 number을 먼저 넣고, 반복문을 돌리면서 각 자릿수를 더해주는것 !

            // 예시 number = 1234일때 생성자 = 1234+1+2+3+4 = 1244
            //(1) number %10 = 4 , sum = 1234+4 , number = 123 (새로운 넘버된다) 이렇게 4번반복

        }
        return sum;
        //return되었다는 것 == 생성자가 있다는것 != 셀프넘버
    }
}
