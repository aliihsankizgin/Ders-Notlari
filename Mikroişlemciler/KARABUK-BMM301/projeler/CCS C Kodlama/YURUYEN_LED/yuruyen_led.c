#include <yuruyen_led.h>

void main()
{

   int8 data = 1 , data2 = 128, i , new_data;
   
   new_data = data | data2; // or mantiksal i�lemi uygulaniyor.
   
   output_c(0);

   while(TRUE)
   {
      
      for(i=1; i<=7; i++)
      {
         output_c(new_data);   // toggle ile eger portC 0 ise 1, 1 ise 0 yapiyor.
         delay_ms(250);    // 250ms gecikme uygulandi.
         data = data << 1; // sola kaydir
         data2 = data2 >> 1;
         new_data = data | data2;
      }
      
      for(i=1; i<=7; i++)
      {
         output_c(new_data);   // toggle ile eger portC 0 ise 1, 1 ise 0 yapiyor.
         delay_ms(250);    // 250ms gecikme uyguland�.
         data = data >> 1; // saga kaydir
         data2 = data2 << 1;
         new_data = data | data2;
      }
   
   }

}
