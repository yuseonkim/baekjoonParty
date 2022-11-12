import java.util.Scanner;
class B10807 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int num[] = new int[N];
        for(int i=0; i<N; i++){
            num[i] = sc.nextInt();
        }
        int v = sc.nextInt();
        int count = 0;
        for(int i=0; i<N; i++){
            if(v == num[i]){
                count +=1;
            }
        }
        System.out.println(count);
    }

}
