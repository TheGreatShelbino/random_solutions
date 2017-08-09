class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n);
        for(int i=1; i<=n; i++){
            if(i%3==0){
                answer[i-1] += "Fizz";
            }
            if(i%5==0){
                answer[i-1]  +="Buzz";
            }
            if(answer[i-1]==""){
                
                answer[i-1]  += to_string(i);
            }
            
        }
        return answer;
    }
};
