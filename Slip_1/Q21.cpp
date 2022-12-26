#include <vector>

using namespace std;

class Array
{

private:
    vector<float> array;

public:
    friend void operator++(Array &obj); // prefix increment

    friend void operator++(Array &obj, int var); // postfix increment

    friend void operator--(Array &obj); // prefix decrement

    friend void operator--(Array &obj, int var); // postfix decrement
};

void operator++(Array &obj)
{

    for (int i = 0; i < obj.array.size(); i++)

        obj.array[i] += 1;
}

void operator++(Array &obj, int var)
{

    for (int i = 0; i < obj.array.size(); i++)

        obj.array[i] += 1;
}

void operator--(Array &obj)
{

    for (int i = 0; i < obj.array.size(); i++)

        obj.array[i] -= 1;
}

void operator--(Array &obj, int var)
{

    for (int i = 0; i < obj.array.size(); i++)

        obj.array[i] -= 1;
}

int main()
{
    Array ar;
}