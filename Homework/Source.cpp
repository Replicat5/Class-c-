#include <iostream> 

using namespace std;

void fillArr(int arr[],int N);
void showArr(int arr[], int N);
void delOthermethod(int arr[], int N,int key);



int main()
{
	setlocale(0, "Rus");
    const int N=10;
    int arr[N];
    
    cout << "массив: ";
    fillArr(arr, N);
    showArr(arr, N);
    cout << endl;

    int key;
    cout << "¬ведите ключ: ";
    cin >> key;

    delOthermethod(arr, N, key);

    cout << "массив: ";
    showArr(arr,N);

	return(0);
}

void delOthermethod(int arr[],int N, int key) {
    int j = 1;
    for (int i=1; i <= N; i++)
    {
        arr[j] = arr[i];
        if (arr[i] !=  key) {
            j++;
        }
        else {
            break;
        }
    }
      N = j;
}


void fillArr(int arr[], int N) {

    for (int k = 1; k <= N; k++)
    {
        arr[k] = rand () % 10;
    }
}


void showArr(int arr[], int N) {

    for (int m = 1; m <= N; m++)
    {
        cout << arr[m] << " ";
    }
}

