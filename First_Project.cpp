#include <iostream>
#include <cstdlib>
using namespace std;
void showMenu(){
    cout<<endl;
    cout<<"1. Start Test"<<endl;
    cout<<"2. Exit"<<endl;
    cout<<"Enter choice: ";
}
void startTest();
int main()
{
int choice;
bool flag=true;
while(flag==true){
   showMenu();
   cin>>choice;
if(choice==1){
    flag=false;
    startTest();
}
else if(choice==2)
    break;
else
    cout<<"Invalid choice"<<endl;
}}
void startTest(){
    string Q[20]={
    "Q1. 5 + 3 = ?",
    "Q2. 10 - 4 = ?",
    "Q3. 6 * 2 = ?",
    "Q4. 8 / 2 = ?",
    "Q5. Square of 5 = ?",
    "Q6. 9 + 6 = ?",
    "Q7. 15 - 7 = ?",
    "Q8. 7 * 3 = ?",
    "Q9. 16 / 4 = ?",
    "Q10. Cube of 3 = ?",
    "Q11. 12 + 8 = ?",
    "Q12. 20 - 9 = ?",
    "Q13. 4 * 5 = ?",
    "Q14. 18 / 3 = ?",
    "Q15. Square of 6 = ?",
    "Q16. 14 + 5 = ?",
    "Q17. 25 - 10 = ?",
    "Q18. 9 * 4 = ?",
    "Q19. 21 / 7 = ?",
    "Q20. Cube of 2 = ?"
    };
string options[20][4]={
    {"6","7","8","9"},
    {"5","6","7","8"},
    {"10","11","12","13"},
    {"2","3","4","5"},
    {"20","25","30","35"},
    {"13","14","15","16"},
    {"6","7","8","9"},
    {"18","19","20","21"},
    {"2","3","4","5"},
    {"9","18","27","36"},
    {"18","19","20","21"},
    {"9","10","11","12"},
    {"15","18","20","25"},
    {"5","6","7","9"},
    {"30","32","36","40"},
    {"18","19","20","21"},
    {"10","12","15","18"},
    {"32","34","36","38"},
    {"2","3","4","5"},
    {"4","6","8","10"}
    };
char correct[20]={
    'c','b','c','c','b','c','c','d','c','c',
    'c','c','c','b','c','b','c','c','b','c'
};
  char ans;
  int  wrongAns=0,skipQ=0,correctAns=0, marks=0;
  cout<<endl;
  cout<<"Maths MCQ Test"<<endl;
  cout<<"Correct = +4 , Wrong = -1 , Skip = 0"<<endl<<endl;
for(int i=0;i<20;i++){
  cout<<Q[i]<<endl;
for(int j=0;j<4;j++)
  cout<<char('a'+j)<<") "<<options[i][j]<<endl;
  cout<<"Enter a/b/c/d or s to skip: ";
  cin>>ans;
if(ans=='s'){
  marks+=0;
  skipQ++;
}
else if(ans==correct[i]){
  marks+=4;
  correctAns++;
}
else
 { marks-=1;
 wrongAns++;
 }
  cout<<endl;
    system("cls");
    }
float average=marks/20.0;
float percentage=(marks*100.0)/80.0;
   cout<<"Test Finished"<<endl;
   cout<<"Correct Answers "<<correctAns<<endl;
   cout<<"Number of Questions skiped  "<<skipQ<<endl;
   cout<<"Wrong Answers "<<wrongAns<<endl;
   cout<<"Total Marks: "<<marks<<" / 80"<<endl;
   cout<<"Average Marks per Question: "<<average<<endl;
   cout<<"Percentage: "<<percentage<<"%"<<endl;
   cout<<"Grade: ";
if(percentage>=80)
   cout<<"A+"<<endl;
else if(percentage>=70)
   cout<<"A"<<endl;
else if(percentage>=60)
   cout<<"B"<<endl;
else if(percentage>=50)
   cout<<"C"<<endl;
else if(percentage>=40)
   cout<<"D"<<endl;
else
   cout<<"F"<<endl;
if(percentage>=40)
   cout<<"Result: PASS"<<endl;
else
   cout<<"Result: FAIL"<<endl;

}
