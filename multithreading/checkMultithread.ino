// function to do multithread

boolean checkMultithread(unsigned long *lastMillis, unsigned long int cycle){
  unsigned long currentMillis = millis();
  if(currentMillis - *lastMillis >= cycle){
    *lastMillis = currentMillis;
    return true;
  } else {
    return false;
  }
}
