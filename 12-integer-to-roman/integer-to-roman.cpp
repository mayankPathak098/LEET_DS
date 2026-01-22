class Solution {
public:
    string intToRoman(int num) {
        int temp;
        string s;
        while(num>0){
            if(num>=1000){
                temp=num/1000;
                for(int i=0;i<temp;i++) s+='M';
                num=num%1000;
            }
            else if(num<1000 && num>=900){
                s+="CM";
                num=num%100;
            }
            else if(num>=500 && num<900){
                s+='D';
                temp=num/100;
                temp=temp-5;
                for(int i=0;i<temp;i++) s+='C';
                num=num%100;
            }
            else if(num<500 && num>=400){
                s+="CD";
                num=num%100;
            }
            else if(num>=100 && num<400){
                temp=num/100;
                for(int i=0;i<temp;i++) s+='C';
                num=num%100;
            }
            else if(num<100 && num>=90){
                s+="XC";
                num=num%10;
            }
            else if(num>=50&&num<90){
                s+='L';
                temp=num/10;
                temp=temp-5;
                for(int i=0;i<temp;i++) s+='X';
                num=num%10;
            }
            else if(num<50&&num>=40){
                s+="XL";
                num=num%10;
            }
            else if(num<40&&num>=10){
                
                temp=num/10;
                for(int i=0;i<temp;i++) s+='X';
                num=num%10;

            }

            else if(num==9){ s+="IX";
            num=num/10;}
            else if(num>=5 &&num<=8){
                s+='V';
                temp=num-5;
                for(int i=0;i<temp;i++) s+='I';
                num=num/10;
            }
            else if(num==4){ s+="IV";
            num=num/10;}
            else {
                for(int i=0;i<num;i++) s+='I';
                num=num/10;
            }
            
        }
    return s;
    }
};