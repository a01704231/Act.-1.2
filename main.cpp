// =================================================================
//
// File: main.cpp
// Author: Gaddiel Lara Roldán A01704231
// Date: 06/09/2022
//
// =================================================================
#include <iostream>
#include <vector>
#include "header.h"
#include "search.h"
#include "bubble.h"
#include "selection.h"
#include "insertion.h"

using namespace std;

int main() {
    int n;
    cout << "n: ";
    cin >> n;
    int elemento;
    vector <int> v1;

    for (int x = 1; x <= n; x++){
        cout << "elemento " << x << ": ";
        cin >> elemento;
        v1.push_back(elemento);
    }

    int q;
    cout << "q: ";
    cin >> q;
    int buscar[q];
    for (int y = 0; y < q; y++){
        cout << "buscar elemento " << y+1 << ": ";
        cin >> elemento;
        buscar[y] = elemento;
    }

    vector <int> v2 = v1;
    cout << bubbleSort(v2) << " ";
    v2 = v1;
    cout << insertionSort(v2) << " ";
    v2 = v1;
    cout << selectionSort(v2) << endl << endl;

    for (int y = 0; y < q; y++){
        cout << sequentialSearch(v2,buscar[y]) << " ";
        cout << binarySearch(v2,buscar[y]) << endl;
    }
	return 0;
}
