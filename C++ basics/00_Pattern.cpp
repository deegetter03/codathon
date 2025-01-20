#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    // * * *
    // * * *
    // * * *

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    // *
    // * *
    // * * *

    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    // 1
    // 1 2
    // 1 2 3
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    // 1
    // 2 2
    // 3 3 3

    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    // * * *
    // * *
    // *
    int i, j;
    for (i = n; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    // 1 2 3
    // 1 2
    // 1
    int i, j;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    //   *
    //  ***
    // *****
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++) // for space
        {
            cout << " ";
        }
        for (j = 0; j < 2 * i + 1; j++) // for star
        {
            cout << "*";
        }
        for (j = 0; j < n - i - 1; j++) // again for space
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    // *****
    //  ***
    //   *
    int i, j;
    for (i = n; i > 0; i--)
    {
        for (j = n - i; j > 0; j--) // for space
        {
            cout << " ";
        }
        for (j = 2 * i - 1; j > 0; j--) // for star
        {
            cout << "*";
        }
        for (j = n - i; j > 0; j--) // again for space
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    //   *
    //  ***
    // *****
    // *****
    //  ***
    //   *
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++) // for space
        {
            cout << " ";
        }
        for (j = 0; j < 2 * i + 1; j++) // for star
        {
            cout << "*";
        }
        for (j = 0; j < n - i - 1; j++) // again for space
        {
            cout << " ";
        }
        cout << endl;
    }
    for (i = n; i > 0; i--)
    {
        for (j = n - i; j > 0; j--) // for space
        {
            cout << " ";
        }
        for (j = 2 * i - 1; j > 0; j--) // for star
        {
            cout << "*";
        }
        for (j = n - i; j > 0; j--) // again for space
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern10(int n)
{
    //   *
    //   **
    //   ***
    //   **
    //   *
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i + 1; j++) // for star
        {
            cout << "*";
        }
        for (j = 0; j < n - i - 1; j++) // again for space
        {
            cout << " ";
        }
        cout << endl;
    }
    for (i = n; i > 0; i--)
    {
        for (j = i - 1; j > 0; j--) // for star
        {
            cout << "*";
        }
        for (j = n - i; j > 0; j--) // again for space
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    // 1
    // 01
    // 101
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) // for even row
            start = 1;
        else
            start = 0; // for odd row
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    // 1    1
    // 12  21
    // 123321
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        { // numbers
            cout << j << " ";
        }
        for (j = 1; j <= 2 * (n - i); j++)
        { // space
            cout << " ";
        }

        for (j = 2 * (n - i); j >= 1; j--)
        { // space
            cout << " ";
        }

        for (j = i; j >= 1; j--)
        { // numbers
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern13(int n)
{
    // 1
    // 2 3
    // 4 5 6
    int i, j, num = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    // A
    // A B
    // A B C
    int i, j;
    char ch;
    // char ch = 'A';
    for (i = 1; i <= n; i++)
    {
        ch = 'A';
        for (j = 1; j <= i; j++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }
}

void pattern15(int n)
{
    // A B C
    // A B
    // A
    int i, j;
    char ch;
    for (i = n; i >= 1; i--)
    {
        ch = 'A';
        for (j = 1; j <= i; j++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }
}

void pattern16(int n)
{
    // A
    // B B
    // C C C
    int i, j;
    char ch = 'A';
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch = ch + 1;
        cout << endl;
    }
}

void pattern17(int n)
{
    //   A
    //  ABA
    // ABCBA
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++) // for space
        {
            cout << " ";
        }

        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (j = 1; j <= 2 * i + 1; j++) // for alphabet
        {
            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }

        for (j = 0; j < n - i - 1; j++) // again for space
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern18(int n)
{
    // C
    // CB
    // CBA
    int i;
    for (i = 0; i < n; i++)
    {
        for (char ch = ('A' + n - 1); ch >= ('A' + n - 1) - i; ch--)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern19(int n)
{
    // ******
    // **  **
    // *    *
    // *    *
    // **  **
    // ******

    int forSpace = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 1; j <= n - i; j++) // for stars
        {
            cout << "* ";
        }

        for (int j = 0; j < forSpace; j++) // for spaces
        {
            cout << "  ";
        }

        for (int j = 1; j <= n - i; j++) // for stars
        {
            cout << "* ";
        }

        forSpace += 2;

        // As soon as the stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }

    // for lower half of the pattern

    // initial spaces.
    forSpace = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) // for stars
        {
            cout << "* ";
        }

        for (int j = 0; j < forSpace; j++) // for space
        {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++) // for stars
        {
            cout << "* ";
        }

        // The spaces decrease by 2 every time we hit a new row.
        forSpace -= 2;

        // As soon as the stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }
}

void pattern20(int n)
{
    // *    *
    // **  **
    // ******
    // **  **
    // *    *
    int spaces = 2 * n - 2;

    for (int i = 1; i <= 2 * n - 1; i++) // for row
    {
        // stars for first half
        int stars = i;
        // stars for the second half.
        if (i > n)
            stars = 2 * n - i;

        for (int j = 1; j <= stars; j++) // for printing the stars
        {
            cout << "* ";
        }

        for (int j = 1; j <= spaces; j++) // for printing the space
        {
            cout << "  ";
        }

        for (int j = 1; j <= stars; j++) // for printing the stars
        {
            cout << "* ";
        }

        // As soon as the stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
        if (i < n)
            spaces -= 2;
        else
            spaces += 2;
    }
}

void pattern21(int n)
{
    // ******
    // *    *
    // *    *
    // *    *
    // *    *
    // ******
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

void pattern22(int n)
{
    // 3 3 3 3 3
    // 3 2 2 2 3
    // 3 2 1 2 3
    // 3 2 2 2 3
    // 3 3 3 3 3
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int bottom = (2 * n - 2) - i;
            int left = j;
            int right = (2 * n - 2) - j;

            cout << (n - min(min(top, bottom), min(left, right)));
        }
        cout << endl;
    }
}

void pattern23(int n)
{
    // *
    // * *
    // * * *

    int i, j;
    int space = 0;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    space += 3;
}

int main()
{
    int n;
    cin >> n;

    pattern7(n);

    return 0;
}