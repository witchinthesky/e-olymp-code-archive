#include <iostream>
#include <string>

using namespace std;

const int track = 6;
void numbt(int numb);

int main(){

    int n; cin >> n;
    //число спортсменів
    string *name = new string[n+1];
    double** speed = new double*[n+1];
    for (int i = 1; i <= n; i++)
        speed[i] = new double[2];
    // виділення пам.яті під інфу про спортсмнів
    for (int i=1; i<=n; i++){
        cin >> name[i]; // ім.я
        cin >> speed[i][0]; // швидкість
        speed[i][1]=i; // порядковий номер
    }
    string fav; // спортсмен для якого вик. розрахунок
    cin >> fav;
    int favvv; // його пор. номер

    for (int i = 1; i <= n; i++) // сортування масиву з даними про швидкості
    { if (name[i]==fav) favvv=i; // пошук спортсмена в масиві імен
        for (int k = i + 1; k <= n; k++)
        {  if (speed[i][0] > speed[k][0])
            {     swap(speed[i][0], speed[k][0]);
                swap(speed[i][1], speed[k][1]);
            }
        }
    }

    int numb, numbr;
    for (int i=1; i<=n; i++)
        if (favvv==speed[i][1]) numb=i;
        //знаходження рейтингового номера спортсмена

            int xz= (n/track)-(numb/track);
            if(numb%track!=0) xz--;
            if (n%track!=0) xz++;
   //номер запливу
    if (n%track>=3 || n%track==0 || xz>2) {
        if (numb <= track) numbr = 1;
        else if (numb % track != 0) numbr = (numb / track) + 1;
        else numbr = numb / track;
        numb = numb - (track*(numbr-1));
        cout << numbr << ' ';
        numbt(numb);//номер доріжки
    }
    else if (n-numb>(3-(n%track)))
    {
        if (numb <= track) numbr = 1;
        else if (numb % track != 0) numbr = (numb / track) + 1;
        else numbr = numb / track;
        numb = numb - (track*(numbr-1));
        cout << numbr << ' ';
        numbt(numb);//номер доріжки
    }



    else cout << "Missing";

}

void numbt(int numb){

  switch(numb) {
        case 1:
            cout << 3;
            break;
        case 2:
            cout << 4;
            break;
        case 3:
            cout << 2;
            break;
        case 4:
            cout << 5;
            break;
        case 5:
            cout << 1;
            break;
        case 6:
            cout << 6;
            break;
    }
}
