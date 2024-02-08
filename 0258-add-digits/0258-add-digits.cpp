class Solution {
public:
int add(int num) {
    int sum = 0;
    while(num != 0) {
        sum += num%10;
        num /= 10;
    }
    if(sum > 9){
        return add(sum);
    }
    else{
        return sum;
    }

}
    int addDigits(int num) {
       int sum = add(num);
        return sum;
    }
};