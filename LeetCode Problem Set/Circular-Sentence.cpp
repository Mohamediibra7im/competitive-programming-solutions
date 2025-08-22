class Solution {
public:
    bool isCircularSentence(string sentence) {
        int a=sentence.length();
        int c=0;
        int b=0;
        int d=-1;
        for(int i=0;i<a;i++){
            if(sentence[i]==' '){
                c++;
                d=1;
                if(sentence[i-1]==sentence[i+1]){
                    b++;
                }
            }
        }
        if(c==b && d!=-1 && sentence[0]==sentence[a-1]){
            return true;
        }
        else if(sentence[0]==sentence[a-1] && c==b){
                return true;
            }
            return false;
        }
    
};