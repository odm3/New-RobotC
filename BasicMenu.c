task main(){

 clearLCDLine(0);
 clearLCDLine(1); 
 while(true) { 
 
 while(nLCDButtons == 0) 
 { 
 	displayLCDCenteredString(0, "The Earl of Lemongarb");
 }
 
  while(nLCDButtons == centerButton) {
 	displayBatteryLevel();
 }	
 if(nLCDButtons == leftButton) {
 	clearLCDLine(0);
 	clearLCDLine(1); 
 	displayLCDCenteredString(0, "Red Autonomous"); 
 	displayLCDCenteredString(1, "Press Center to Confirm");
 	
 if(nLCDButtons == rightButton){ 
 	clearLCDLine(0); 
 	clearLCDLine(1); 
 	displayLCDCenteredString(0, "Blue Autonomous"); 
 	displayLCDCenteredString(1, "Press Center to Confirm")
 	
 } 
 } 
 
 