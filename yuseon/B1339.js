const fs = require('fs');
const [n, ...arr] = fs.readFileSync("./dev/stdin").toString().trim().split(/\s/);

let data = [0,1,2,3,4,5,6,7,8,9];
let array = {};
let SizeArr = [];
arr.forEach(i => {
    SizeArr.push(i.length);
})
let size = Math.max(...SizeArr);

for(var i = 0;i<size;i++){
    for(var j=0;j<arr.length;j++){
        let a = size - arr[j].length;
    if(array[arr[j].charAt(i+a)] == null && arr[j].charAt(i+a) != '' ){
        array[arr[j].charAt(i+a)] = data.pop();
    }
}
}
console.log(array);

