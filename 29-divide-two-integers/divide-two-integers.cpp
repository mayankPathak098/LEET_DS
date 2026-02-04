class Solution {
public:
    int divide(int dividend, int divisor) {
        int f=1;
        if(dividend<0 && divisor>0) f=-1;
        else if(dividend>0 && divisor<0) f=-1;
        else if(dividend<0 && divisor<0) f=0;
         

        if(dividend>=INT_MAX && (divisor==1 || divisor==-1) ) return f*(INT_MAX);
        else if(dividend<=INT_MIN && f==0 && (divisor==1 || divisor==-1)) return (INT_MAX);
        else if( dividend<=INT_MIN && (divisor==1 || divisor==-1) ) return INT_MIN;
        
        int num=dividend/divisor;
        

        
        return num;

    }
};