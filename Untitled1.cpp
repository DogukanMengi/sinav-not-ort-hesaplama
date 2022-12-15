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
   
   if(ort<50)
   {
   	cout<<"Kaldiniz.";
   }
   else
   {
   	cout<<"Gectiniz.";
   }
}
