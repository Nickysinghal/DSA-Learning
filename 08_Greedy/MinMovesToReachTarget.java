class Solution {
    public int minMoves(int target, int maxDoubles) {
        int move=0;
        
        while(target>1){
            if(maxDoubles==0) return move+ target-1;
            if(target%2==0){
                target/=2;
               
                maxDoubles--;
            }else{
            target--;
           
            }
            move++;
        }
        return move;
    }
}

public class MinMovesToReachTarget{
    public static void main(String args[]){
        Solution obj = new Solution();
        int num=19;
        int maxDouble =2;
        System.out.println(obj.minMoves(num, maxDouble));
    }
}