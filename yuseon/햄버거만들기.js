const e = require('express');
const fs = require('fs');
let ingredient = fs.readFileSync("./dev/stdin").toString().trim().split(" ");

/*
function solution(ingredient) {
    ingredient = ingredient.toString().replace(/\,/g,'');
let count = 0;
for(var i =0;;i++){
    let str = ingredient.replace("1231","");
    if(str != ingredient){
        ingredient = str;
    count ++;
    }
    else
     break;
}
return count;
}
배열의 replace() 함수의 시간복잡도가 O(n)이어서 몇개의 테스트케이스가 시간초과..*/

function solution(ingredient) {
    var answer = 0;
    while(true){
        var t = answer;
        for(var i=0;i<ingredient.length-3;i++){
            if(ingredient[i]==1&&ingredient[i+1]==2&&ingredient[i+2]==3&&ingredient[i+3]==1){
                ingredient.splice(i,4);
                answer++;
                i-=4;
                console.log(ingredient);
            }
            }
        if(t == answer)
            break;
    }
    return answer;
}


console.log(solution(ingredient));

/*
splice()함수사용하여 1,2,3,1 의 연속된 숫자가 나오면 그것을 삭제
 그리고 i-=4 를 해줌으로써 변화된 배열로 인한 인덱스수정문제 방지
*/
