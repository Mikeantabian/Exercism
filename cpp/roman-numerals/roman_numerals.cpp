#include "roman_numerals.h"

namespace roman_numerals {
    string convert(int num){
        string roman;
        while(num > 0){
            if(num >= 1000){
                num -= 1000;
                roman += "M";
            }else if( num >= 900){
                num -= 900;
                roman += "CM";
            } else if( num >= 500){
                num -= 500;
                roman += "D";
            } else if( num >= 400){
                num -= 400;
                roman += "CD";
            } else if(num >= 100){
                num -= 100;
                roman +="C";
            } else if( num >= 90){
                num -= 90;
                roman += "XC";
            } else if(num >= 50){
                num -=50;
                roman += "L";
            } else if( num >= 40){
                num -= 40;
                roman += "XL";
            } else if(num >= 10){
                num -= 10;
                roman += "X";
            } else if( num >= 9){
                num -= 9;
                roman += "IX";
            } else if(num >= 5){
                num -= 5;
                roman += "V";
            } else if( num >= 4){
                num -= 4;
                roman += "IV";
            } else if(num >= 1){
                num -= 1;
                roman += "I";
            }
        }
        return roman;
    }
}  // namespace roman_numerals
