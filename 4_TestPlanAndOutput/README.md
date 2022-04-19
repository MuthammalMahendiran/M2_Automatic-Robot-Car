
## HIGH LEVEL TEST PLAN:

|TEST ID      |DESCRIPTION	       |INPUT |  EXPECTED OUTPUT|
|----------|-------------------|-------|-----|
|HL01      |FORWARD  	   |PORTB = 0x01;| EXECUTED |
|          |                |PORTD =0x01;|  |
|HL02      |BACKWARD         |PORTB = 0x80;|EXECUTED |
|	|             |PORTD = 0x80;|   |
|HL03      |LEFT	       |PORTB = 0x00;|EXECUTED |
|          |                 |PORTD = 0x01;|      |
|HL04      |RIGHT	       |PORTB = 0x01;|EXECUTED |
|          |		        |PORTD = 0x00;|     |
|HL05      |STOP	       |PORTB = 0x00;|EXECUTED |
|          |		       |PORTD = 0x00;|     |


## LOW LEVEL TEST PLAN:

|TEST ID       |DESCRIPTION	    |INPUT| EXPECTED OUTPUT|
|------------|------------------|-------|------------|
|LL01      |FORWARD  	   |PORTB = 0x01;|  Both the motors to be rotate  in  Clockwise direction |
 |     |                     |PORTD =0x01;|    |
|LL02      |BACKWARD         |PORTB = 0x80;| Both the motors to be rotate in  Anti-Clockwise direction|
|       |		             |PORTD = 0x80;|   |
|LL03      |LEFT	       |PORTB = 0x00;|Rotate left motor|
|     |		              |PORTD = 0x01;|   |
|LL04      |RIGHT	       |PORTB = 0x01;|Rotate right motor|
|      |		               |PORTD = 0x00;|   |
|LL05      |STOP	       |PORTB = 0x00;|Both the motors to be stoped|
|		|                |PORTD = 0x00;|  |

