//fibonacci till n terms
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, i, n;
    a = 0;
    b = 1;
    cout << "enter the no. of terms ";
    cin >> n;
    cout << a << "\n" << b << "\n";

    i = 3;
    while (i <= n)
    {

        c = a + b;
        cout << c << "\n";
        a = b;
        b = c;
        i++;
    }
    return 0;
}





Apurva Sinha <sinhaapurva25@gmail.com>
Feb 19



to me


//prime number or not
#include <iostream>
using namespace std;
int main()
{
    int n, i, f;
    cout << "enter a no.";
    cin >> n;

    i = 2, f = 1;
    while (i <= n / 2)
    {
        if (n % i == 0)
        {
            f = 0;
            break;
        }
        i++;
    }

    if (f == 0)
        cout << "composite no. ";
    else
        cout << "prime no. ";

    return 0;
}


Apurva Sinha <sinhaapurva25@gmail.com>
Feb 19



to me


//prime number in range s to e
#include <iostream>
using namespace std;
int main()
{
    int s, e, i, f, n;
    cout << "enter start and end values" << "\n";
    cin >> s >> e;


    for (n = s; n <= e; n++)
    {
        if (n >= 3)
        {
            i = 2, f = 1;
            while (i <= n / 2)
            {
                if (n % i == 0)
                {
                    f = 0;
                    break;
                }
                i++;
            }

            if (f == 0)
                cout << n << " is a composite no." << "\n";
            else
                cout << n << " is a prime no." << "\n";
        }

    }

    return 0;
}



Apurva Sinha <sinhaapurva25@gmail.com>
Feb 19



to me


//sum of prime number in range s to e
#include <iostream>
using namespace std;
int main()
{
    int s, e, i, f, n, sum = 0;
    cout << "enter start and end values" << "\n";
    cin >> s >> e;


    for (n = s; n <= e; n++)
    {
        if (n >= 3)
        {
            i = 2, f = 1;
            while (i <= n / 2)
            {
                if (n % i == 0)
                {
                    f = 0;
                    break;
                }
                i++;
            }

            if (f == 0)
            {
                //cout<<n<<" is a composite no."<<"\n";
            }
            else
                sum = sum + n;
            //cout<<n<<" is a prime no."<<"\n";
        }
    }

    cout << sum;

    return 0;
}




Apurva Sinha <sinhaapurva25@gmail.com>
Feb 19



to me


//prime factors of a number

#include <iostream>
using namespace std;
int main()
{
    int num, n, i, f;
    cout << "enter a no.";
    cin >> num;

    for (n = 1; n <= num / 2; n++)
    {
        if (n >= 3)
        {
            if (num % n == 0)
            {
                i = 2, f = 1;
                while (i <= n / 2)
                {
                    if (n % i == 0)
                    {
                        f = 0;
                        break;
                    }
                    i++;
                }

                if (f == 0)
                {
                    //cout<<"composite no. ";
                }
                else
                    cout << n << "\n";
            }
        }
    }
    return 0;
}

fibonacci till n terms
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, i, n;
    a = 0;
    b = 1;
    cout << "enter the no. of terms ";
    cin >> n;
    cout << a << "\n" << b << "\n";

    i = 3;
    while (i <= n)
    {

        c = a + b;
        cout << c << "\n";
        a = b;
        b = c;
        i++;
    }
    return 0;
}





Apurva Sinha <sinhaapurva25@gmail.com>
Feb 19



to me


//prime number or not
#include <iostream>
using namespace std;
int main()
{
    int n, i, f;
    cout << "enter a no.";
    cin >> n;

    i = 2, f = 1;
    while (i <= n / 2)
    {
        if (n % i == 0)
        {
            f = 0;
            break;
        }
        i++;
    }

    if (f == 0)
        cout << "composite no. ";
    else
        cout << "prime no. ";

    return 0;
}


Apurva Sinha <sinhaapurva25@gmail.com>
Feb 19



to me


//prime number in range s to e
#include <iostream>
using namespace std;
int main()
{
    int s, e, i, f, n;
    cout << "enter start and end values" << "\n";
    cin >> s >> e;


    for (n = s; n <= e; n++)
    {
        if (n >= 3)
        {
            i = 2, f = 1;
            while (i <= n / 2)
            {
                if (n % i == 0)
                {
                    f = 0;
                    break;
                }
                i++;
            }

            if (f == 0)
                cout << n << " is a composite no." << "\n";
            else
                cout << n << " is a prime no." << "\n";
        }

    }

    return 0;
}



Apurva Sinha <sinhaapurva25@gmail.com>
Feb 19



to me


//sum of prime number in range s to e
#include <iostream>
using namespace std;
int main()
{
    int s, e, i, f, n, sum = 0;
    cout << "enter start and end values" << "\n";
    cin >> s >> e;


    for (n = s; n <= e; n++)
    {
        if (n >= 3)
        {
            i = 2, f = 1;
            while (i <= n / 2)
            {
                if (n % i == 0)
                {
                    f = 0;
                    break;
                }
                i++;
            }

            if (f == 0)
            {
                //cout<<n<<" is a composite no."<<"\n";
            }
            else
                sum = sum + n;
            //cout<<n<<" is a prime no."<<"\n";
        }
    }

    cout << sum;

    return 0;
}




Apurva Sinha <sinhaapurva25@gmail.com>
Feb 19



to me


//prime factors of a number

#include <iostream>
using namespace std;
int main()
{
    int num, n, i, f;
    cout << "enter a no.";
    cin >> num;

    for (n = 1; n <= num / 2; n++)
    {
        if (n >= 3)
        {
            if (num % n == 0)
            {
                i = 2, f = 1;
                while (i <= n / 2)
                {
                    if (n % i == 0)
                    {
                        f = 0;
                        break;
                    }
                    i++;
                }

                if (f == 0)
                {
                    //cout<<"composite no. ";
                }
                else
                    cout << n << "\n";
            }
        }
    }
    return 0;
}


#include<iostream.h>
#include<conio.h>

int main(void)
{
    int i, a[20], b[20], c[20], n, m, k = 0;

    cout << "enter n ";
    cin >> n;
    cout << "enter array a\n";
    for (i = 0; i < n; i++)
        cin >> a[i];

    cout << "enter m ";
    cin >> m;
    cout << "enter array b\n";
    for (i = 0; i < m; i++)
        cin >> b[i];

    for (i = 0; i < n; i++)
        c[i] = a[i];

    for (i = n; i < n + m; i++)
    {
        c[i] = b[k];
        k++;
    }

    for (i = 0; i < n + m; i++)
        cout << c[i] << "\n";

    getch();
    return 0;
}

