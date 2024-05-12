 
#include<iostream>
#include<fstream>
   

using namespace std;
int main()
{

      int rno,fee;

      char name[50];

   

      cout<<"Enter the Roll Number:";

      cin>>rno;

       

      cout<<"\nEnter the Name:";

      cin>>name;

       

      cout<<"\nEnter the Fee:";

      cin>>fee;

   

      ofstream fout("d");

   

      fout<<rno<<"\t"<<name<<"\t"<<fee;   

   

      fout.close();

   

      ifstream fin("d");

   

      fin>>rno>>name>>fee;   

   

      fin.close();

   
       cout<<endl<<"rno"<<"\t"<<"name"<<"\t"<<"fee";
      cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;

   

    return 0;    
}