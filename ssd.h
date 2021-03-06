/*
 * ssd.h
 *
 * Created: 06-Mar-18 7:20:31 PM
 * Copyright:  �2018 Alsayed Alsisi
 * Author: Alsayed Alsisi
 * License:
 You have the complete freedom to use the code in any educational or commercial purposes under the following conditions:
 - You don't remove my name under any circumstances.
 - You use the code as is. And if you need to edit it before using it you may contact me first.
 * Contact Details:
 - E-mail: alsayed.alsisi@gmail.com
 - Phone Number: +201066769510
 */ 


#ifndef SSD_H_
#define SSD_H_

/*----------------------------------------------------------------
--------------------- Public Function Prototypes ----------------
----------------------------------------------------------------*/
extern void ssd_init(void);
extern void ssd_update(void);
extern void ssd_minutes_var_set(uint8_t arg);
extern void ssd_hours_var_set(uint8_t arg);
extern void ssd_hours_var_decrement(void);
extern void ssd_turn_off(void);
extern void ssd_turn_on(void);

#endif /* SSD_H_ */