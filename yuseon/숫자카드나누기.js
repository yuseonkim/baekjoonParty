const gcd = (a,b)=>{
    let tmp;
    let n;
    if(a < b){
        tmp = a;
        a = b;
        b = tmp;
    }

    if(b == 0)
        return a;
    
    return gcd(b,a%b);
}
const gcdArray = (arr,start,no) =>{
    if(no == 1)
        return arr[0];
    else if(arr.length == 2)
        return gcd(arr[0],arr[1]);
    else{
        return gcd(arr[0],gcdArray(arr));
    }
}
const getArr= a => {
    let arr = {};
    for(var i = 0 ; i*i <= a; i++){
        if(a % i == 0)
        arr.push(i);
    }
    return arr;
}

function solution(arrayA, arrayB){

}

//미완