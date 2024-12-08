#include<iostream>
#include<fstream>
using namespace std;
char boundary;
string getdata(string data , int field);
 
int main()
{
    string extracted[2];
    string data;
    int field;
    
    fstream write;
    write.open("PD13_T3.txt" , ios::out);
    
    cout<<"Enter your NAME , AGE  :  "<<endl;
    cin>> data;
    
    

    
    
    for(int i = 1 ; i <= 2 ; i++)
    {
        field = i;
        extracted[i-1] = getdata( data , field);

    }
  
    if(stoi(extracted[1]) % 2 == 0)
    {
        boundary = '#';
    }
    else {
        boundary = '*';
    }
    for(int i = 0 ; i <= 15 ; i++)
    {
        write<<boundary;
    }
    write<<endl;
    write<<boundary;
    write<<extracted[1]<<" "<<"HB"<<" "<<extracted[0]<<"!"<<" "<<extracted[1];
    write<<boundary<<endl;
    for(int i = 0 ; i <= 15 ; i++)
    {
        write<<boundary;
    }
    write.close();
}
string getdata(string data , int field)
{
    int commaCount = 1;

    string item;

for (int x = 0; x < data.length(); x++)

{
    if (data[x] == ',')
    {
        commaCount = commaCount + 1;
    }
    else if (commaCount == field)
    {
        item = item + data[x];
    }

}

return item;

}