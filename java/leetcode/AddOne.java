/*
given an array of digits of a large number, add one to the number and return the new array.
this allows you to manipulate large numbers that would normally be too big for java.
*/

class Solution {

    // recursive function for adding one to it (incase the digit is 9 and it has to move over)
    public int[] update(int[] digits, int x){
        if(digits[x] == 9){
            digits[x] = 0; // if 9 set that digit to 0
            if(x == 0){ //if the array starts with a 9 add a 1 at the start of the array e.x. [9] -> [1,0]
                int[] newlist = new int[digits.length + 1];
                newlist[0] = 1;
                return newlist;
            } // call the same function for the next digit
            return update(digits, x-1);
        }else{
            digits[x]++; // just add one to the digit
            return digits;
        }
    }
    
    
    
    public int[] plusOne(int[] digits) {
        return update(digits, digits.length - 1); // call the function
    }
}
