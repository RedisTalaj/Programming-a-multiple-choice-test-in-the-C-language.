#include <iostream>
using namespace std;

int main() {
    int i, totalScore = 0;

    // Array to store the correct answers for each question
    int correctAnswers[10] = {3, 1, 4, 1, 4, 2, 3, 1, 2, 2};

    // Loop through each question
    for (int question = 1; question <= 10; question++) {
        cout << "Pyetja " << question << ": ";
        
        switch (question) {
            case 1:
                cout << "Zgjidha e ekucionit x*x-3=6 eshte :\n 1) 9, 2) 6, 3) 3, 4) 0\n";
                break;
            case 2:
                cout << "Zgjidhja e ekucionit 2*x*x-8=0 eshte :\n 1) 2, 2) 4, 3) 8, 4) 0\n";
                break;
            case 3:
                cout << "Cili nga numrat eshte paraqitur ne sistemin binary si (101010)2?\n 1) 35, 2) 40, 3) 56, 4) 76\n";
                break;
            case 4:
                cout << "Cili nga numrat eshte paraqitur ne sistemin binary si (100110)2?\n 1) 38, 2) 42, 3) 96, 4) 84\n";
                break;
            case 5:
                cout << "Zgjidhja e ekuacionit 5*x*x-10=10 eshte :\n 1) 20, 2) 4, 3) 5, 4) 2\n";
                break;
            case 6:
                cout << "Sa eshte siperfaqja e drejtkendeshit me brinje a=4 dhe b=6?\n 1) 10, 2) 24, 3) 12, 4) 20\n";
                break;
            case 7:
                cout << "Sa eshte perimetri i drejtekendeshit me brinje a=5 dhe b=8?\n 1) 40, 2) 13, 3) 36, 4) 30\n";
                break;
            case 8:
                cout << "Sa eshte siperfaqja e katrorit me brinje a=8?\n 1) 64, 2) 16, 3) 36, 4) 42\n";
                break;
            case 9:
                cout << "Sa eshte perimetri i katrorit me brinje a=10?\n 1) 20, 2) 40, 3) 10, 4) 30\n";
                break;
            case 10:
                cout << "55% e 60 eshte:\n 1) 11, 2) 33, 3) 55, 4) 66\n";
                break;
        }

        cin >> i;

        // Check if the answer is correct and update score
        if (i == correctAnswers[question - 1]) {
            totalScore++;
            cout << "Sakte. Ju keni 1 pike\n";
        } else if (i >= 1 && i <= 4) {
            cout << "Gabim. Ju keni 0 pike\n";
        } else {
            cout << "Numer i gabuar! Ju lutem jepni alternativen e sakte\n";
        }
    }

    // Display total score
    cout << "Piket totale = " << totalScore << endl;

    // Convert total score to grade
    cout << "Nota = ";
    if (totalScore <= 4) cout << "4";
    else if (totalScore == 5) cout << "5";
    else if (totalScore == 6) cout << "6";
    else if (totalScore == 7) cout << "7";
    else if (totalScore == 8) cout << "8";
    else if (totalScore == 9) cout << "9";
    else if (totalScore == 10) cout << "10";
    else cout << "Nota nuk ekziston";

    cout << endl;
    return 0;
}

