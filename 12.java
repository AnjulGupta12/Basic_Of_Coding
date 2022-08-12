class divisibleBy5and18 {
    public static void main(String[] args) {
        public void divisibleBy5and18(double a)
        {
         if(a%5==0)
         {
            if(a%18==0)
            {
            System.out.print(a+" is divisible by 5 and 18.");
            }
            else
            {
            System.out.print(a+" is divisible by 5.");
            }
         }
          else
          {
            if(a%18==0){
            System.out.print(a+" is divisible by 18.");
            }
            else
            {
            System.out.print(a+" is neither divisible by 5 nor by 18.");
            }
          
          }
        }
    }
}
