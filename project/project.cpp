# include <iostream>
using namespace std;

int main()
{
      float n1,n2;
   char op,option;
  cout<<"Press 1 to use calculator"<<endl;
  cout<<"Press 2 to see patterns"<<endl;
  cin>>n1;
   if (n1==1){
   
   
   cout <<"Input 2 numbers: ";
   cin>>n1>>n2;

   
   cout <<"input an operator";
   cin>>op;
switch (op)
{
case '+':
  cout<<n1 + n2 << endl;
  break;
case '-':
  cout<<n1 - n2 << endl;
  break;
case '*':
  cout<<n1 * n2 << endl;
  break;
case '/':
  cout<<n1 / n2 << endl;
  break;
default:
  cout << "Error! operator is not correct";  
  break;
}
   } 


else
{
int j,i;
for(i=1;i<=5;i++)
{
      for(j=1;j<=5;j++)
       {
      
          if (j<=i)
        {
           cout<<"*";
         }
         else
         {
           cout<<" ";
         }
    
       }
       cout<<endl;
}
 cout<<endl;
 
    

for(i=1;i<=5;i++)
{

   for(j=1;j<=5;j++)
   {
       if(i<=j)
       {
          cout<<"*";
       } 
        else
        {
          cout<<" ";
        }
   }
    cout<<endl;

}

}


    return 0;
}