/*
 * File:          controller1.c
 * Date:
 * Description:
 * Author:
 * Modifications:
 */

/*
 * You may need to add include files like <webots/distance_sensor.h> or
 * <webots/differential_wheels.h>, etc.
 */
#include <webots/robot.h>
#include <stdio.h>
#include <webots/led.h>



#define TIME_STEP 1000


int main(int argc, char **argv)
{
  /* necessary to initialize webots stuff */
  wb_robot_init();

 
       printf("doing some basic setup\n");
       int seconds_counters = 0;
       int led_state = 0;
       
       
       
      
      
      
        WbDeviceTag my_led = wb_robot_get_device("led");
        
        
        
        
        
        
        
        
 
  while (wb_robot_step(TIME_STEP) != -1) {
      
      
      
      
      
      printf("doing some repetitive task\n");
      printf("time = %i\n", seconds_counters);
      seconds_counters++;
      
      
      
      
      led_state = wb_led_get(my_led);
      printf("led value is %d\n", led_state);
      
     if(led_state == 0)
     {
      
      wb_led_set(my_led, 1);
     }
     
     
     
     else
     {
      wb_led_set(my_led, 0);
      }
     
     
  

   
  }



  /* This is necessary to cleanup webots resources */
  wb_robot_cleanup();

  return 0;
}
