#include <iostream>
using namespace std;
int main()
{
 
   int vize,final,ort;
   cout<<"Vize Notunu Girin : ";
   cin>>vize;
   cout<<"Final Notunu Girin : ";
   cin>>final;
   ort=(vize*0.3)+(final*0.7);
   cout<<"Ortalama : "<<ort<<endl;
   
   if(101>ort && ort>89)
   {
   	cout<<"AA";
   }
   else if(90>ort && ort>84)
   {
   	cout<<"BA";
   }
     else if(85>ort && ort>79)
   {
   	cout<<"BB";
   }
     else if(80>ort && ort>74)
   {
   	cout<<"CB";
   }
     else if(75>ort && ort>69)
   {
   	cout<<"CC";
   }
     else if(70>ort && ort>64)
   {
   	cout<<"DC";
   }
     else if(65>ort && ort>54)
   {
   	cout<<"DD";
   }
   else
   {
   	cout<<"FF";
   }
}
