class Solution {
public:
    int countSeniors(vector<string>& details) {
        int c=0;
        //string n;
        for(int i =0; i<details.size();i++){
            if((details[i][11]>'6') ||(details[i][11]=='6')&&(details[i][12]>='1')){
                c++;
            } 
        }
        return c;
    }
};
