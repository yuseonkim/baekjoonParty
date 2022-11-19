const e = require('express');
const fs = require('fs');
let ingredient = fs.readFileSync("./dev/stdin").toString().trim().split(" ");

function getYakSu(number){


    let arr = new Array(number+1);
    arr.fill(0);
    for(var i =1;i<=number;i++){
        for(var j = 1; j<= parseInt(number / i); j++){
            arr[i*j]++
        }
    }
    arr.shift();
    return arr;
}


function solution(number, limit, power) {
    var answer = 0;
    let arr = getYakSu(number);
    arr.forEach(i => {
        if(i > limit){
            i = power;
        }
        answer += i;
    });
    return answer;
}

console.log(solution(/*input*/))