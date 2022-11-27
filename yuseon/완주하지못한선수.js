function solution(participant, completion) {
    
    participant.sort();
    completion.sort();
    
    for(var i = 0; i<participant.length;i++){
        if(participant[i] !==  completion[i])
        return participant[i];
    
    }
}
/*
효율성을 위해 각각의 배열을 모두 정렬(O(nlogn) 한 후에 비교 시행)

*/