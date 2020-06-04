#include <iostream>
#include <vector>

using namespace std;

//Prototypes
int OpenBoxes(int N);
void PrintVector(vector<int> &V);
void InitVector(vector<int> &V, int N);

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
    vector<int> boxes;
    InitVector(boxes, N);
    cout << endl << "Initial Vector" << endl;
    PrintVector(boxes);
    int count = 0;
    
    for (int i = 1; i <= N; i++){
        cout << "itteration:" << i << endl;
        for (int j = i; j <=N; j+=i){
                if (boxes[j-1] == 0){
                    boxes[j-1] = 1; count++;
                }else if (boxes[j-1] == 1){
                    boxes[j-1] = 0; count--;
                }
        }
        PrintVector(boxes);
    }
    
    cout << "Count:";
    return count;
}

void InitVector(vector<int> &V, int N){
    for (int i = 0; i < N; i++)
        V.push_back(0);
}

void PrintVector(vector<int> &V){
    for(int i = 0; i < V.size(); ++i)
        cout << V[i] << " ";
    cout << endl;
}
