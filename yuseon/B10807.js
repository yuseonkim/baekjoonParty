const fs = require('fs');
const input = fs.readFileSync("./dev/stdin").toString().trim().split(/\s/).map(Number);
const n = input[0]; // n = 11
const x = input[1]
const arr = input.slice(2,n+2);
let answer = '';
arr.forEach((i) => {
    if(i < x)
    answer += i + ' ';
});
console.log(answer);
