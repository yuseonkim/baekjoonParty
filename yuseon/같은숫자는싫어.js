function solution(arr){
    return arr.filter((val,index) => val != arr[index+1]);
}

/*
filter함수
첫번째 인자 => element
두번째 인자 => value
람다식 => 조건

조건에 부합하는 것들만 골라내서 arr배열의 요소를 수정
*/