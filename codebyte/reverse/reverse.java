import java.util.*; 
import java.io.*;

class Main {

  public static String FirstReverse(String str) {
    // code goes he
    String result = "";
    for(int i= str.length()-1; i >=0; i--)
      result += str.charAt(i);  
    return result;
  }

  public static void main (String[] args) {  
    // keep this function call here     
    Scanner s = new Scanner(System.in);
    System.out.print(FirstReverse(s.nextLine())); 
  }
}