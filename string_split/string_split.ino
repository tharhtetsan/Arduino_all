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
  String Sorted_arr[5];
                    String Value="";

                    String charIndex="";
                    int Arr_index=0;
                        for(int n = 0; n < index; n++)
                       { 
                        Serial.print(strings[n]);
                        String temp=strings[n];
                          Value=temp.substring(0,temp.length()-1);
                          charIndex=temp.substring(temp.length()-1,temp.length());
                          Serial.print("\t>>\t"+Value+">>\t>>"+charIndex+">>\t>>");
                         
                          if(charIndex=="1")
                              Arr_index=0;
                            else if(charIndex=="2")
                              Arr_index=1;
                            else if(charIndex=="3")
                              Arr_index=2;
                              else if(charIndex=="4")
                              Arr_index=3;
                              else 
                               Arr_index=4;
                    
                    Serial.println(Arr_index);
                               Sorted_arr[Arr_index]=Value;
                                
                       }
                      Serial.println("<<<<<<<<<<<<>>>>>>>>>>>>");
                       for(int i=0;i<5;i++)
                       {
                        Serial.print(Sorted_arr[i]+"\t");
                        }
   
}

void loop()
{

}



