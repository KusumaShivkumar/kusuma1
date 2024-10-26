#include <iostream>
#include <cstdlib> // For exit()
using namespace std;

class Insertion
{
private:
    int a[10], n, pos, ele, i;
public:
    void readdata();
    void insert();
    void display();
};

// Function to read data
void Insertion::readdata()
{
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    cout << "Enter the elements of the array: " << endl;
    for(i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the position at which the element is to be inserted: " << endl;
    cin >> pos;
    cout << "Enter the element to be inserted: " << endl;
    cin >> ele;
}

// Function to insert element
void Insertion::insert()
{
    if(pos > n || pos < 0)
    {
        cout << "Position out of array limits!!!" << endl;
        exit(0);
    }
    else
    {
        for(i = n; i >= pos; i--)
            a[i + 1] = a[i];
        a[pos] = ele;
        n = n + 1;
    }
}

// Function to display the array
void Insertion::display()
{
    cout << "Array elements after insertion are: " << endl;
    for(i = 0; i < n; i++)
        cout << a[i] << "\t";
    cout << endl;
}

int main()
{
    Insertion i;
    i.readdata();
    i.insert();
    i.display();
    return 0;
}
