#include <iostream>
#include <math.h>

using namespace std;

//prototypes
int OpenBoxes(int N);

int main(){
    int N = 0;  //Number of boxes
    
    //get input
    cout << "Enter the Number of Boxes: ";
    cin >> N;
    
    //display output
    cout << "The Number of open boxes is " << OpenBoxes(N) << endl;
    
    return 0;
}

int OpenBoxes(int N){
    int openned = floor(sqrt(N));
    return openned;
}
