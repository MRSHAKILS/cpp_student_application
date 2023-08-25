#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int n, sum = 0;
    cout << "Enter number of students: ";
    cin >> n;

    int student[n];

    for(int i = 0; i < n; i++){
        cout << "Marks for student " << i+1 << " : ";
        cin >> student[i];
        sum += student[i];
    }

    float avg = (float)sum/n;

    cout << "Total amrks: " << sum << endl;
    cout << "Average : " << avg << endl;

    //maximum
    int max = student [0];
    int min = student[0];

    for(int i = 1; i < n; i++){
        if(student[0] < student[i]){
            max = student[i];
        }
        if(student[0] > student[i]){
            min = student[i];
        }

    }

    cout << "Maximum marks: " << max << endl;
    cout << "Minimum marks: " << min;








    getch ();
}
