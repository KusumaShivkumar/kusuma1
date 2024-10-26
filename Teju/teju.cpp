#include <iostream>

class frequency
{
private:
    int a[10], n, ele, count;
public:
    void readdata();
    void findfreq();
    void display();
};

void frequency::readdata()
{
    std::cout << "Enter the size of the array: " << std::endl;
    std::cin >> n;
    std::cout << "Enter the array elements: " << std::endl;
    for(int i = 0; i < n; i++)
        std::cin >> a[i];
    std::cout << "Enter the element to find the frequency: " << std::endl;
    std::cin >> ele;
}

void frequency::findfreq()
{
    count = 0;
    for(int i = 0; i < n; i++)
        if(ele == a[i])
            count++;
}

void frequency::display()
{
    if(count > 0)
        std::cout << ele << " occurs " << count << " times." << std::endl;
    else
        std::cout << ele << " does not exist." << std::endl;
}

int main()
{
    frequency f;
    f.readdata();
    f.findfreq();
    f.display();
    return 0;
}
