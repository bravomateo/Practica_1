#include <iostream>

using namespace std;


int potencia(int b); //Funcion para el problema 9 (elevear a^a)

int primo(int n); //Funcion para el problema 13 (verificar si es primo)

int pal(int n); //Funcion para el problema 14 (vverificar si es palindromo)

int div(int n); //Funcion para el problema 17 (contar los divisores)

void problema2();

void problema4();

void problema5();

void problema7();

void problema9();

void problema11();

void problema13();

void problema14();

void problema15();

void problema17();

int main()
{
    int opcion=1;

    while(opcion!=0)
    {
        cout<<endl;
        cout<<" +------------------------------------+"<<endl;
        cout<<" |   Menu de selecccion de problemas  |"<<endl;
        cout<<" +------------------------------------+"<<endl;
        cout<<" |  1. Problema 2                     |"<<endl;
        cout<<" |  2. Problema 4                     |"<<endl;
        cout<<" |  3. Problema 5                     |"<<endl;
        cout<<" |  4. Problema 7                     |"<<endl;
        cout<<" |  5. Problema 9                     |"<<endl;
        cout<<" |  6. Problema 11                    |"<<endl;
        cout<<" |  7. Problema 13                    |"<<endl;
        cout<<" |  8. Problema 14                    |"<<endl;
        cout<<" |  9. Problema 15                    |"<<endl;
        cout<<" |  10.Problema 17                    |"<<endl;
        cout<<" |  0. Para salir                     |"<<endl;
        cout<<" +------------------------------------+"<<endl;
        cout<<endl;
        cout<<" -> Escoga un programa del menu: ";
        cin>>opcion;
        cout<<endl;
        cout<<endl;

        switch (opcion) {
        case 1:
            cout<<" +----------------------------+" <<endl;
            cout<<" + Ejecutando el problema 2.  +" <<endl;
            cout<<" +----------------------------+" <<endl;
            cout<<endl;
            problema2();
            break;

        case 2:
            cout<<" +----------------------------+" <<endl;
            cout<<" + Ejecutando el problema 4.  +" <<endl;
            cout<<" +----------------------------+" <<endl;
            cout<<endl;
            problema4();
            break;

        case 3:
            cout<<" +---------------------------+" <<endl;
            cout<<" + Ejecutando el problema 5. +" <<endl;
            cout<<" +---------------------------+" <<endl;
            cout<<endl;
            problema5();
            break;

        case 4:
            cout<<" +----------------------------+" <<endl;
            cout<<" + Ejecutando el problema 7.  +" <<endl;
            cout<<" +----------------------------+" <<endl;
            cout<<endl;
            problema7();
            break;

        case 5:
            cout<<" +----------------------------+" <<endl;
            cout<<" + Ejecutando el problema 9.  +" <<endl;
            cout<<" +----------------------------+" <<endl;
            cout<<endl;
            problema9();
            break;

        case 6:
            cout<<" +----------------------------+" <<endl;
            cout<<" + Ejecutando el problema 11. +" <<endl;
            cout<<" +----------------------------+" <<endl;
            cout<<endl;
            problema11();
            break;

        case 7:
            cout<<" +----------------------------+" <<endl;
            cout<<" + Ejecutando el problema 13. +" <<endl;
            cout<<" +----------------------------+" <<endl;
            cout<<endl;
            problema13();
            break;

        case 8:
            cout<<" +----------------------------+" <<endl;
            cout<<" + Ejecutando el problema 14. +" <<endl;
            cout<<" +----------------------------+" <<endl;
            cout<<endl;
            problema14();
            break;

        case 9:
            cout<<" +----------------------------+" <<endl;
            cout<<" + Ejecutando el problema 15. +" <<endl;
            cout<<" +----------------------------+" <<endl;
            cout<<endl;
            problema15();
            break;

        case 10:
            cout<<" +----------------------------+" <<endl;
            cout<<" + Ejecutando el problema 17. +" <<endl;
            cout<<" +----------------------------+" <<endl;
            cout<<endl;
            problema17();
            break;
        case 0:
            break;
        default:
            cout<<"Opcion no valido"<<endl;
            break;
        }
    }
    return 0;
}



int potencia(int b)
{
    if (b==0){
        return 0;
        }
    int res = 1;
    for (int i=0;i<b;i++){
        res *=b;
        }
    return res;
}

int primo(int n){
    int c=0;
    for(int i=1;i<=n;i++){
        if (n%i==0){
            c++;
        }
    }
    if (c==2){
        return 1;
    }
    else{
        return 0;
    }
}

int pal(int n){
    int res,coc,ncopy,np;
    ncopy = n;
    np = 0;
    while (n>0){
        res = n%10;
        coc = n/10;
        n = coc;
        np = res+np*10;
    }
    if (np==ncopy){
        return 1;
    }
    else {
        return 0;
    }
}

int div(int n){
    int cnt =0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cnt++;
        }
    }
    return cnt;
}

void problema2(){
    int tot,res,a,b,c,d,e,f,a_1,b_1,c_1,d_1;
    cout <<"Ingrese la cantidad del dinero: ";
    cin >> tot;

    a = tot/50000;
    res = tot%50000;
    cout <<"50000: "<<a<<endl;

    b = res/20000;
    res = res%20000;
    cout <<"20000: "<<b<<endl;

    c = res/10000;
    res = res%10000;
    cout <<"10000: "<<c<<endl;

    d = res/5000;
    res = res%5000;
    cout <<"5000: "<<d<<endl;

    e = res/2000;
    res = res%2000;
    cout <<"2000: "<<e<<endl;

    f = res/1000;
    res = res%1000;
    cout <<"1000: "<<f<<endl;

    a_1 = res/500;
    res = res%500;
    cout <<"500: "<<a_1<<endl;

    b_1= res/200;
    res = res%200;
    cout <<"200: "<<b_1<<endl;

    c_1 = res/100;
    res = res%100;
    cout <<"100: "<<c_1<<endl;

    d_1 = res/50;
    res = res%50;
    cout <<"50: "<<d_1<<endl;
    cout <<"Faltante: "<<res<<endl;
}

void problema4(){
    int x,y,hourx,houry,minx,miny,hourf,minu;
    cout << "Hora del dia: ";
    cin >> x;
    cout << "Tiempo de duracion: ";
    cin >> y;

    if ((x<2400) and ((x%100)<60))
    {
       if ((y<2400) and ((y%100)<60)){
          hourx = x/100;
          minx = x%100;
          houry = y/100;
          miny = y%100;
          hourf = hourx + houry + ((miny+minx)/60);

          if (hourf>=24)
                {
                hourf = hourf-24;
                }
          minu = (miny+minx)%60;
          cout <<"La hora es: "<<hourf<<minu<<endl;

          }
        else{cout<<y<<" es un tiempo invalido"<<endl;}
   }
   else{cout<<x<<" es un tiempo invalido"<<endl;}
}

void problema5(){
    int n,es_a,ch_a,es_l,ch_l;
    cout<<"Ingrese un numero impar: ";
    cin>>n;

    if (n%2==0){
        n++;
        cout<<"El numero ingresado se aproximo a: "<<n<<endl;
        cout<<endl;
    }

    es_a = n/2;
    ch_a = 1;
    es_l = 1;
    ch_l = n-2;

    for (int i=0;i<n-1;i++){
        if (es_a>=0){
            for (int i=0;i<es_a;i++){
                cout<<" ";
            }
            for (int i=0;i<ch_a;i++){
                cout<<"*";
            }
            for (int i=0;i<es_a;i++){
                cout<<" ";
            }
            es_a -=1;
            ch_a +=2;
            cout<<endl;
        }

        if (es_a<=-1){
            for (int i=0;i<es_l;i++){
                cout<<" ";
            }
            for (int i=0;i<ch_l;i++){
                cout<<"*";
            }
            for (int i=0;i<es_l;i++){
                cout<<" ";
            }
            es_l += 1;
            ch_l -= 2;
            cout<<endl;
        }
    }
}

void problema7(){
    int lim, ant=0, act=1, sig=1,suma=0;
    cout<<"Ingrese un numero: ";
    cin>> lim;
    while (sig<lim){
        ant = act;
        act = sig;
        sig = ant+act;

        if (act%2==0){
            suma += act;
        }
    }
    cout<<"El resultado de la suma es: "<<suma<<endl;
}

void problema9(){
    int n, acu=0,c=0;

    cout<<"Ingrese un numero: ";
    cin>>n;

    while (n!=0){
         c = n%10;
         n = n/10;
         acu+=potencia(c);
    }

    cout<<"El resultado de la suma es: "<<acu<<endl;
}

void problema11(){
    int num,k=1,cnt=0,n=0;
    cout<<"Ingrese un numero: ";
    cin >>num;

    while (cnt!=num){
        n = k*num;
        cnt = 0;

        for (int i=1;i<=num;i++){
            if (n%i==0){
                cnt++;
            }
        }
        k++;
        if (cnt==num){
            cout<<"El minimo comun multiplo es: "<<n<<endl;
        }

    }
}

void problema13(){
    int n, acu=0;
    cout<<"Ingrese un numero: ";
    cin>>n;

    for (int i=1;i<n;i++){
        if (primo(i)==1){
            acu += i;
        }
    }
    cout<<"El resultado de la suma es: "<<acu<<endl;
}

void problema14(){
    int maxi=0,max_f1=0,max_f2=0,res;

    for(int i=100;i<1000;i++){
        for(int k=100;k<1000;k++){
            res = i*k;
            if (pal(res)==1){
                if (res>maxi){
                    maxi=res;
                    max_f1=i;
                    max_f2=k;
                }
            }
        }
    }
    cout<<max_f1<<"*"<<max_f2<<"="<<maxi<<endl;
}

void problema15(){
    int dim,cnt=0,change=2,num=1,acu=1;
    cout<<"Ingrese un numero impar: ";
    cin>>dim;

    if (dim%2==0){
        dim++;
        cout<<"El numero ingresado se aproximo a: "<<dim<<endl;
        cout<<endl;
    }

    while(cnt<(dim/2)){
        int cnt_2=0;

        while (cnt_2<4){
            num += change;
            acu += num;
            cnt_2++;
        }
        change += 2;
        cnt++;
    }
    cout<<"En una espiral de "<<dim<<"x"<<dim<<", la suma es: "<<acu<<endl;
}

void problema17(){
    int n,a=0,i=1;
    cout<<"Ingrese  un numero:";
    cin>>n;
    while(div(a)<=n){
        a=i*(i+1)/2;
        i++;
    }
    cout<<"El numero es "<<a<<" que tiene "<<div(a)<<" divisores"<<endl;
}


