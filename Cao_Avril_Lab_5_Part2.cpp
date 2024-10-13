// Avril Cao
// Lab 5 Part 2
// October 8, 2024

#include <iostream>
// <iostream> is needed to use cout

#include <iomanip>
// <iomamip> is used so you can set precision to number values

using namespace std; 
// using namespace std is used so that you don't have to write std:: before every cout and endl

int main()
// all C++ programs require int () to start

{
    double gigabytes;
    double lowQuality;
    double normalQuality;
    double highQuality;
    int qualityWanted;
    
// double is used to declare number variables
    
    cout << "Enter the gigabytes needed for low quality, normal quality, and high quality: " << endl;
    cin >> lowQuality >> normalQuality >> highQuality;

// you use cin to put in values for the variables
    
    cout << "How many gigabytes are in your monthly hotspot plan? " << endl;
    cin >> gigabytes;
    
    cout << "Do you wish to download low, normal, or high quality music? Enter 1 for low quality, 2 for normal quality, and 3 for high quality: " << endl;
    cin >> qualityWanted;

    switch (qualityWanted) {
// I used switch to execute different statements correspondung to the case value

    case 1:
      cout << "If you download low quality music, you can stream for " << ( lowQuality / 1000 ) * gigabytes << " " << "hours. " << endl; 
      break;

    case 2:
      cout << "If you download normal quality music, you can stream for " << ( normalQuality / 1000 ) * gigabytes << " " << "hours. " << endl; 
      break;

    case 3:
      cout << "If you download high quality music, you can stream for " << ( highQuality / 1000 ) * gigabytes << " " << "hours. " << endl; 
      break;

    default:
      cout << "no result " << endl;
    }


    cout << "How many hours can you stream low quality music? " << endl;
    cout << ( lowQuality / 1000 ) * gigabytes << " " << "hours" << endl;
    cout << "Default precision: " << ( lowQuality / 1000 ) * gigabytes << endl;
    cout << "Precision set to 2: " << setprecision(2) << ( lowQuality / 1000 ) * gigabytes << endl;
    
// I used setprecision to set the precision to 2 digits
    
    cout << "How many hours can you stream normal quality music? " << endl;
    cout << ( normalQuality / 1000 ) * gigabytes << " " << "hours " << endl;
    cout << "Default precision: " << ( normalQuality / 1000 ) * gigabytes << endl;
    cout << "Precision set to 2: " << setprecision(2) << ( normalQuality / 1000 ) * gigabytes << endl;
    
    cout << "How many hours can you stream high quality music? " << endl;
    cout << ( highQuality / 1000 ) * gigabytes << " " << "hours " << endl;
    cout << "Default precision: " << ( highQuality / 1000 ) * gigabytes << endl;
    cout << "Precision set to 2: " << setprecision(2) << ( highQuality / 1000 ) * gigabytes << endl;
    
    return 0;
// return 0; is used to end the program

}

/* Enter the gigabytes needed for low quality, normal quality, and high quality: 
43.2 72 115.2
How many gigabytes are in your monthly hotspot plan? 
500
Do you wish to download low, normal, or high quality music? Enter 1 for low quality, 2 for normal quality, 
and 3 for high quality:
2
If you download normal quality music, you can stream for 36 hours. 
How many hours can you stream low quality music?
21.6 hours
Default precision: 21.6
Precision set to 2: 22
How many hours can you stream normal quality music?
36 hours
Default precision: 36
Precision set to 2: 36
How many hours can you stream high quality music?
58 hours
Default precision: 58
Precision set to 2: 58 */
