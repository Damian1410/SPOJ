 #include <iostream> #include <cstring>
   using namespace std;
   #define T_SIZE 1001
   char* string_merge(char *, char *);

int main()
{
    int t,n;
    char S1[T_SIZE], S2[T_SIZE], *S;
    n=0;
    cin >> t; /* wczytaj liczb� test�w */
    cin.getline(S1,T_SIZE);
    while(t)
    {
        cin.getline(S1,T_SIZE,' ');
        cin.getline(S2,T_SIZE);
        S=string_merge(S1,S2);
        cout << S1[n] <<endl;
        cout << S2[n] <<endl;
        //cout << S << endl;
        delete[] S;
        t--;
        n++;
    }

    return 0;
    }

    char* string_merge(char *, char *)
    {


    }
