public class operator{
    public static void main(String[]str){
    int num1,num2;
    scanner sc=new scanner(system.in)
    System.out.println("enter first number:")
    num1=sc.nextInt();
    System.out.println("enter second number:")
     num2=sc.nextInt();          

     if(num1==num2)
      System.out.println("Both the numbers are equal")
    else if (num1>num2)
      System.out.println(num1+"is greater")
      else 
      System.out.println(num2+"is greater")
     sc.close() 
     }
}