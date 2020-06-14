// https://leetcode.com/problems/day-of-the-week/submissions/

class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
        year -= month < 3;
        // Sakamoto's Method: https://en.wikipedia.org/wiki/Determination_of_the_day_of_the_week#Sakamoto's_methods
        int code =  (year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;

        switch(code)
        {
            case 0:
                return "Sunday";
            break;
            case 1:
                return "Monday";
            break;
            case 2:
                return "Tuesday";
            break;
            case 3:
                return "Wednesday";
            break;
            case 4:
                return "Thursday";
            break;
            case 5:
                return "Friday";
            break;
            case 6:
                return "Saturday";
            break;
        };
        return "Error";
    }
};