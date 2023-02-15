class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> output;
        int number = 0;
        int count = 1;

        for(int i = num.size()-1; i >= 0; i--){
            number += count * num[i];
            count *= 10;
        }

        number += k;
        vector<int>::iterator it = output.begin();

        do{
            it = output.insert(it,number % 10);
            number /= 10;
        }while(number != 0);

        return output;
    }
};
