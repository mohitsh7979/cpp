#include <iostream>

using namespace std;

void A(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= (i * 2) - 1; j++)
        {

            cout << "*";
        }
        for (int k = 1; k <= rows - i; k++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}

void B(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == rows || i == (rows + 1) / 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

void C(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i == 1 || i == rows || j == 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

void D(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i)
            {
            }
            else
            {
                cout << " ";
            }
        }
    }
}

void E(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (j == 1 || i == 1 || i == (rows + 1) / 2 || i == rows)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

void F(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (j == 1 || i == 1 || i == (rows + 1) / 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

void G(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i)
            {
            }
            else
            {
                cout << " ";
            }
        }
    }
}

void H(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (j == 1 || j == rows || i == (rows + 1) / 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << "\n";
    }
}

void I(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i == 1 || i == rows || j == (rows + 1) / 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

void J(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i)
            {
            }
            else
            {
                cout << " ";
            }
        }
    }
}

void K(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (j == 1 || (i + j) == (rows + 1) / 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

void L(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (j == 1 || i == rows)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

void M(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i)
            {
            }
            else
            {
                cout << " ";
            }
        }
    }
}

void N(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (j == 1 || j == rows || i - j == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << "\n";
    }
}

void O(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i == 1 || j == 1 || i == rows || j == rows)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

void P(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i)
            {
            }
            else
            {
                cout << " ";
            }
        }
    }
}

void Q(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

void R(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i)
            {
            }
            else
            {
                cout << " ";
            }
        }
    }
}

void S(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i)
            {
            }
            else
            {
                cout << " ";
            }
        }
    }
}

void T(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i == 1 || j == (rows + 1) / 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

void U(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (j == 1 || j == rows || i == rows)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

void V(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i)
            {
            }
            else
            {
                cout << " ";
            }
        }
    }
}

void W(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i)
            {
            }
            else
            {
                cout << " ";
            }
        }
    }
}

int main()
{

    int rows;
    cout << "Enter your rows :";
    cin >> rows;
    A(rows);
}