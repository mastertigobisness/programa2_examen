#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(){
char alumno[25];
int edad;
char sexo[10];
int NOTA1, NOTA2, NOTA3;
int profesion;

cout<<"escriba nombre del alumno: "<<endl;
cin>>alumno;

cout<<"escriba la edad: "<<endl; 
cin>>edad;

cout<<"Genero: [Masculino] o [Femenino] "<<endl; 
cout<<"escribalo: "<<endl;
cout<<" "<<endl;
cin>>sexo;

cout<<"nota 1: "<<endl; 
cin>>NOTA1;

cout<<"nota 2: "<<endl; 
cin>>NOTA2;

cout<<"nota 3: "<<endl; 
cin>>NOTA3;

cout<<"¿Cual es su profesion academica? "<<endl; 
cout<<"Escriba el numero de su profesion: "<<endl; 
cout<<"[1] medicina "<<endl; 
cout<<"[2] Ingenieria "<<endl; 
cout<<"[3] otra "<<endl; 
cin>>profesion;

if(profesion == 1){
cout<<"Boleta de calificaciones"<<endl;
cout<<"Nota 1: "<<NOTA1<<endl;
cout<<"Nota 2: "<<NOTA2<<endl;
cout<<"Nota 3: "<<NOTA3<<endl;
}else{
cout<<"ESTIMADOS PADRES DE FAMILIA:"<<endl;
cout<<"LO INVITAMOS A UNA PLATICA AMISTOSA CON CAFE Y PAN"<<endl;
cout<<"CON LOS MAESTROS DE LA ESCUELA EL DIA DOM 1 DE MAYO"<<endl;
}
system("pause");
return 0;
}
