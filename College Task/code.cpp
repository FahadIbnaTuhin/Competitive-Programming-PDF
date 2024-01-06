1.
#include <stdio.h>

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    int ans = 1;

    for (int i = 1; i <= y; i++)
    {
        ans = ans * x;
    }

    printf("%d\n", ans);

    return 0;
}

2.
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        printf("%c", ch);
    }

    return 0;
}

3.
#include <stdio.h>

int main()
{
    int x;

    scanf("%d", &x);

    while (x >= 0)
    {
        printf("%d\n", x);
        x--;
    }

    return 0;
}

4.
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    char a[n][m];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf(" %c", &a[i][j]);
            if (a[i][j] == '#')
            {
                cnt++;
            }
        }
    }

    printf("%d\n", cnt);

    return 0;
}

5.
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    char a[n][m];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf(" %c", &a[i][j]);
            if (a[i][j] == '#')
            {
                cnt++;
            }
        }
    }

    printf("%d\n", cnt);

    return 0;
}

6.
#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int ans= 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            ans = i;
            break;
        }
    }

    printf("%d\n", ans+1);

    return 0;
}

7.
#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    scanf("%s", s);

    int ind = -2;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a')
        {
            ind = i;
        }
    }

    printf("%d\n", ind + 1); // 0 based

    return 0;
}

8.
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int chk = -1;
    int ind = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > chk)
        {
            ind = i;
            chk = a[i];
        }
    }

    printf("%d\n", ind + 1);

    return 0;
}

9.
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    double ans = (double)b / a;
    printf("%.3lf\n", ans);


    return 0;
}

10.
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("%d\n", sum);

    return 0;
}

11.
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>> n ;
   int a , b ; // a diye vagfol b diye reminder calculate hobe

   a = n / 16 ;
   b = n % 16 ;

   if ( a < 10 )
   {
       cout << a ;
   }
   else
   {
       cout << char( a + 55 );
   }

   if ( b < 10 )
   {
       cout << b ;
   }
   else
   {
       cout << char( b + 55 ) ;
   }

    return 0;
}

12.
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a ,b ; 
   cin>> a >> b ; // a possible er jonno or newa 
   cout << ( a | b ) << '\n';

    return 0;
}

13.
#include <stdio.h>

int main()
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int result = (a + b) * (c - d);
    printf("%d\n", result);

    printf("Takahashi\n");

    return 0;
}

14.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set < int > st ;

    int a,b,c,d, e ;
    cin>> a >>b>>c >> d >> e ;
    st.insert(a);
    st.insert(b);
    st.insert(c);
    st.insert(d);
    st.insert(e);

    cout << st.size() ;

    return 0 ;
}

15.
#include <stdio.h>
#include <string.h>

int main()
{
    char s[20];
    scanf("%s", s);

    if ( s[0] == 'M' && s[1] == 'o')
    {
        printf("5\n");
    }
    else if ( s[0] == 'T' && s[1] == 'u')
    {
        printf("4\n");
    }
    else if ( s[0] == 'W' && s[1] == 'e')
    {
        printf("3\n");
    }
    else if ( s[0] == 'T' && s[1] == 'h')
    {
        printf("2\n");
    }
    else 
    {
        printf("1\n");
    }

    return 0;
}

16.
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s", s);

    int n = strlen(s);

    if (n % 2 == 0)
    {
        printf("%c\n", s[(n / 2) - 1]);
    }
    else
    {
        printf("%c\n", s[(n / 2)]);
    }

    return 0;
}

17.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    int ans;
    if (x * 3 > y)
    {
        ans = (z / 3) * y ; // z er vitor 3 quantity r jotogola pari nibo y taka diye
        ans = ans +  (z % 3) * x ; // extra jegola thakbe ogola x dam diye nibo
    }
    else
    {
        ans = x * z;
    }

    cout << ans << '\n';

    return 0;
}

18.
#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    char s[] = "atcoder";

    for (int i = x - 1; i < y; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}

19.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector < int > v(5);
    for ( int i = 0 ; i< 5 ; i++ )
    {
        cin>> v[i];
    }

    sort ( v.begin() , v.end() );

    if (( v[0] == v[2] && v[3] == v[4] ) || ( v[0] == v[1] && v[2] == v[4]))
    {
        cout << "Yes" << '\n';
    }
    else
    {
        cout << "No" << '\n';
    }

    return 0;
}

20.
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n % 4 == 2)
    {
        printf("%d\n", n);
    }
    else
    {
        while (1)
        {
            n++;
            if (n % 4 == 2)
            {
                printf("%d\n", n);
                break;
            }
        }
    }

    return 0;
}

21.
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int l1 , r1 , l2 , r2 ;
    cin>> l1 >> r1 >> l2 >> r2 ;



        int x = max ( l1 , l2 );
        int y = min( r1 , r2 ); 
        int ans = max ( 0 , ( y - x ));

        cout << ans ;

    return 0;
}

22.
#include <stdio.h>

int main()
{
    char ch[3];

    scanf("%c %c %c", &ch[0], &ch[1], &ch[2]);

    if (ch[0] != ch[1] && ch[1] != ch[2] && ch[2] != ch[0])
    {
        printf("%c", ch[0]);
    }
    else if (ch[0] == ch[1] && ch[1] != ch[2])
    {
        printf("%c", ch[2]);
    }
    else if (ch[1] == ch[2] && ch[2] != ch[0])
    {
        printf("%c", ch[0]);
    }
    else if (ch[2] == ch[0] && ch[0] != ch[1])
    {
        printf("%c", ch[1]);
    }
    else
    {
        printf("-1");
    }

    return 0;
}

23.
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int minute = (n % 60);


    int hour = (n - minute) / 60;


    if (minute > 10)
    {
        printf("%d:%d\n", 21 + hour, minute);
    }
    else
    {
        printf("%d:0%d\n", 21 + hour, minute);
    }

    return 0;
}

24.
#include <stdio.h>

int main()
{
    int copy , k;
    scanf("%d%d", &copy, &k);

    char ch[2600];
    int index = 0;

    for (int i = 'A'; i <= 'Z'; i++)
    {
        for (int j = 0; j < copy; j++)
        {
            ch[index] = i;
            index++;
        }
    }
     printf("%c", ch[k-1]); // 0 based index


    return 0;
}

25.
#include <stdio.h>

int main()
{
    int n;
    scanf("%d" , &n);

    int ans = (1<<n);
    printf("%llu" , ans );

    return 0;
}

26.
#include <stdio.h>

int main()
{
    char x[3];
    scanf("%s", x);

    for (int i = 1; i < 3; i++)
    {
        printf("%c", x[i]);
    }

    return 0;
}

27.
#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    int a, b, c;

    if (x <= y && x <= z)
    {
        a = x;
        if (y <= z)
        {
            b = y;
            c = z;
        }
        else
        {
            b = z;
            c = y;
        }
    }
    else if (y <= x && y <= z)
    {
        a = y;
        if (x <= z)
        {
            b = x;
            c = z;
        }
        else
        {
            b = z;
            c = x;
        }
    }
    else
    {
        a = z;
        if (x <= y)
        {
            b = x;
            c = y;
        }
        else
        {
            b = y;
            c = x;
        }
    }

    if ( y == b )
    {
        printf("Yes\n");
    }
    else 
    {
        printf("No\n");
    }

    return 0;
}

28.
#include <stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);

    printf("%c" , n );


    return 0;
}

29. 
#include <stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);

    printf("%c" , n );


    return 0;
}

30.
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];

    scanf("%s", s);

    int length = strlen(s);

    if ( length == 1 ) printf("%s%s%s%s%s%s", s, s, s, s,s, s );
    else if ( length == 2 ) printf("%s%s%s", s, s, s );
    else  printf("%s%s", s, s );


    return 0;
}

31.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,w;
    int r,c;
    cin >> h >> w;
    cin >> r >> c;
    int res=0;
    if(c!=1)
    {
        res++;
    }
    if(c!=w)
    {
        res++;
    }
    if(r!=1)
    {
        res++;
    }
    if(r!=h)
    {
        res++;
    }
    cout << res << '\n';
    return 0;
}

32.
#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a, b, f, d;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &f, &d);

    if (r == 1 && c == 1)
    {
        printf("%d\n", a);
    }
    else if (r == 1 && c == 2)
    {
        printf("%d\n", b);
    }
    else if (r == 2 && c == 1)
    {
        printf("%d\n", f);
    }
    else
    {
        printf("%d\n", d);
    }

    return 0;
}


33.
#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int chk = x + y;
    if (chk % 2 == 0)
    {
        printf("%d\n", chk / 2);
    }
    else
    {
        printf("%d\n", (chk / 2) + 1);
    }

    return 0;
}

34.
#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a + b == c + d)
    {
        printf("Balanced\n");
    }
    else if (a + b > c + d)
    {
        printf("Left\n");
    }
    else
    {
        printf("Right\n");
    }

    return 0;
}

35.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x ;
    cin>>x ;

    cout << (48 - x) ;

    return 0 ;
}