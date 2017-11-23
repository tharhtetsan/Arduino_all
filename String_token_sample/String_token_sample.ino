String testString = "561;7895;9813;561;3344;3992;";



void setup()
{
    Serial.begin(9600);



String names="561;7895;9813;561;3344;3992;";
char test[65];
  names.toCharArray(test,65);
  char *strings[10];
  char *ptr = NULL;
  String Send_url="tharh/htet";
  String gg;
    
    //Serial.print(array);
    byte index = 0;
    ptr = strtok(test, ":;");  // takes a list of delimiters
    while(ptr != NULL)
    {
        strings[index] = ptr;
        index++;
        ptr = strtok(NULL, ":;");  // takes a list of delimiters
    }
    //Serial.println(index);
// print the tokens
String pk="";
    for(int n = 0; n < index; n++)
   { 
    Serial.println(strings[n]);
    pk=pk+"/"+(strings[n]);
   }
   Send_url=Send_url+pk;
   Serial.println(Send_url);
}

void loop()
{
    // put your main code here, to run repeatedly:

}

char* string2char(String command){
    if(command.length()!=0){
        char *p = const_cast<char*>(command.c_str());
        return p;
    }
}

