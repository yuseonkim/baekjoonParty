const fs = require('fs');
const input = fs.readFileSync("./dev/stdin").toString().trim().split("\n").map(Number);
let answer = '';
let max = Math.max(...input);
console.log(max);
input.forEach((item,index) => {
    if(item == max){
        console.log(index+1);
    }
});
