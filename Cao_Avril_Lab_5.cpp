// Avril Cao
// Lab 5 Part 1
// Septemer 8, 2024

#include <iostream> 
#include <iomanip>
#include <string>

using namespace std; 

int main()

{
    double exerciseMin;
    double weightKilo;
    double calSlow;
    double calQuick;
    double calJog;
    double calBurn;
    int exerciseType;

    cout << "Enter MET values for slow walking, quick walking, and jogging: " << endl;
    cin >> calSlow >> calQuick >> calJog;

    cout << "How many minutes are you exercising? " << endl;
    cin >> exerciseMin;
    
    cout << "How many kilograms do you weigh? " << endl;
    cin >> weightKilo;

    cout << "What type of exercise do you want to do? Enter 1 for slow walking, 2 for fast walking, and 3 for jog: " << endl;
    cin >> exerciseType;

    switch (exerciseType) {
    case 1:
      cout << "If you walk slow, you can burn " << ( exerciseMin ) * ( calSlow * 3.5 * weightKilo ) / 200 << " " << "calories in " << exerciseMin << ". " << endl; 
      break;

    case 2:
      cout << "If you walk fast, you can burn " << ( exerciseMin ) * ( calQuick * 3.5 * weightKilo ) / 200  << " " << "calories in " << exerciseMin << ". " << endl; 
      break;

    case 3:
      cout << "If you jog, you can burn " << ( exerciseMin ) * ( calJog * 3.5 * weightKilo ) / 200  << " " << "calories when jogging in " << exerciseMin << ". " << endl; 
      break;

    default:
      cout << "no result " << endl;
    }

    cout << "What is the total calories burned when walking slowly? " << endl;
    cout << "You can burn " << ( exerciseMin ) * ( calSlow * 3.5 * weightKilo ) / 200 << " " << "calories when walking slowly. " << endl; 
    
    cout << "What is the total calories burned when walking quickly? " << endl;
    cout << "You can burn " << ( exerciseMin ) * ( calQuick * 3.5 * weightKilo ) / 200  << " " << "calories when walking quickly. " << endl; 
    
    cout << "What is the total calories burned when jogging? " << endl;
    cout << "You can burn " << ( exerciseMin ) * ( calJog * 3.5 * weightKilo ) / 200  << " " << "calories when jogging. " << endl;
    
    cout << "Re-enter your weight in kilograms. How many calories do you want to burn? " << endl;
    cin >> weightKilo >> calBurn;
    
    cout << "|duration    |exercise type         |" << endl;
    cout << "-------------------------------------" << endl;
    cout << "| " << calBurn / (calSlow * 3.5 * weightKilo ) / 200 << " | walking slowly       |" << endl;
    cout << "-------------------------------------" << endl;
    cout << "| " << calBurn / (calQuick * 3.5 * weightKilo ) / 200 << " | walking quickly      |" << endl;
    cout << "-------------------------------------" << endl;
    cout << "| " << calBurn / (calJog * 3.5 * weightKilo ) / 200 << " | jogging              |" << endl;
    cout << "-------------------------------------" << endl;
    
    cout << "Default precision: " << calBurn / (calSlow * 3.5 * weightKilo ) / 200 << endl;
    cout << "Precision set to 2: " << setprecision(2) << calBurn / (calSlow * 3.5 * weightKilo ) / 200 << endl;
    cout << "Default precision: " << calBurn / (calQuick * 3.5 * weightKilo ) / 200 << endl;
    cout << "Precision set to 2: " << setprecision(2) << calBurn / (calQuick * 3.5 * weightKilo ) / 200 << endl;
    cout << "Default precision: " << calBurn / (calJog * 3.5 * weightKilo ) / 200 << endl;
    cout << "Precision set to 2: " << setprecision(2) << calBurn / (calJog * 3.5 * weightKilo ) / 200 << endl;
    
    return 0;
}

/* Enter exerciseMin, weightKilo, calSlow, calQuick, calJog, calBurn
40 50 2 3 8.8 450
How many minutes are you exercising?
40 minutes
How many kilograms do you weigh?
50 kilograms
What is the total calories burned when walking slowly?
You can burn 70 calories when walking slowly. 
What is the total calories burned when walking quickly?
You can burn 105 calories when walking quickly. 
What is the total calories burned when jogging?
you can burn 308 calories when jogging. 
What is your weight and how many calories do you want to burn? 
I weigh 50 kilograms and I want to burn 450 calories. */
