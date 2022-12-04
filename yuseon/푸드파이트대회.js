function solution(food) {
    var answer = '0';
    for(var i=food.length-1;i>0;i--){
        answer= answer.padStart(Math.floor(food[i]/2)+answer.length,i)
     answer= answer.padEnd(Math.floor(food[i]/2)+answer.length,i)
        }
    return answer;
}