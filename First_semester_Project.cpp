#include <iostream>
using namespace std;
void showMenu(){
    cout << endl;
    cout << "1. Start Test" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter choice: ";
}

void startTest();

int main()
{
    int choice;
    bool flag=true;
    while(flag==true){
        showMenu();
        cin >> choice;
        if(choice == 1){
            flag=false;
            startTest();
        }
        else if(choice == 2)
        break;
        else
         cout << "Invalid choice" << endl;
    }

 
}


void startTest()
{
    string Q[5] =
    {
        "Q1. 5 + 3 = ?",
        "Q2. 10 - 4 = ?",
        "Q3. 6 * 2 = ?",
        "Q4. 8 / 2 = ?",
        "Q5. Square of 5 = ?"
    };

    string options[5][4] =
    {
        {"6", "7", "8", "9"},
        {"5", "6", "7", "8"},
        {"10", "11", "12", "13"},
        {"2", "3", "4", "5"},
        {"20", "25", "30", "35"}
    };

    char correct[5] = {'c', 'b', 'c', 'c', 'b'};
    char ans;
    int marks = 0;

    cout << endl;
    cout << "Maths MCQ Test" << endl;
    cout << "Correct = +4 , Wrong = -1 , Skip = 0" << endl << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << Q[i] << endl;

        for(int j = 0; j < 4; j++)
            cout << char('a' + j) << ") " << options[i][j] << endl;

        cout << "Enter a/b/c/d or s to skip: ";
        cin >> ans;

        if(ans == 's')
            marks += 0;
        else if(ans == correct[i])
            marks += 4;
        else
            marks -= 1;

        cout << endl;
    }

    float average = marks / 5.0;
    float percentage = (marks * 100.0) / 20.0;

    cout << "Test Finished" << endl;
    cout << "Total Marks: " << marks << " / 20" << endl;
    cout << "Average Marks per Question: " << average << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    cout << "Grade: ";

    if(percentage >= 80)
        cout << "A+" << endl;
    else if(percentage >= 70)
        cout << "A" << endl;
    else if(percentage >= 60)
        cout << "B" << endl;
    else if(percentage >= 50)
        cout << "C" << endl;
    else if(percentage >= 40)
        cout << "D" << endl;
    else
        cout << "F" << endl;

    if(percentage >= 40)
        cout << "Result: PASS" << endl;
    else
        cout << "Result: FAIL" << endl;
    
}
