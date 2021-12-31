class Solution {
public:
    bool squareIsWhite(string coordinates) {
        //if the sum of row number and col number is odd then the 
        //square color is white
        return ((coordinates[0]-'a'+1+coordinates[1]-'0')%2);
    }
};