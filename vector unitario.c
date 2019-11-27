#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int main()
{
    int vx,vy,x1,x2,y1,y2,enter,vm;
    float vm2,parteentero,partedecimal;

    printf("\n Selecciona las siguientes opciones 1 o 2: ");
    printf("1.- Para obtener un vector de los puntos (x,y),(x2,y2) y obtener su vector , su \n vector magnitud |V| y vector unitario.");
    printf("3.- EXIT para salir de la aplicacion nOpcion: ");
    scanf("%d",&enter);

        if (enter==1)
        {
            printf("\n introduce x: ");
            scanf("%d",&x1);
            printf("\n introduce y: ");
            scanf("%d",&y1);
            printf("\n introduce x2: ");
            scanf("%d",&x2);
            printf("\n introduce y2: ");
            scanf("%d",&y2);
            vx=x2-x1;
            vy=y2-y1;
            printf(" El vector es:%d,%d",vx,vy);

            vm= (vx*vx)+(vy*vy);
            vm2=sqrt(vm);
            parteentero=(int)vm2;
            partedecimal=vm2-parteentero;
            if(partedecimal==0)
                {
                printf(" El vector magnitud es:%f",vm2);
                printf(" El vector unitario es:%d,%d",vx,vy);
                

                }
            else
            {
                printf(" El vector magnitud es:%f",vm2);
                cout<<" El vector unitario es:%d",vx,vy);
               
            }
    
        }




        else
        {
            if(enter==2)
            {
                cout<<"introduce x: ";
                scanf("%d",&x1);
                printf("introduce y: ";
                scanf("%d",&y1;
                

                vm=(x1*x1)+(y1*y1);
                vm2=sqrt(vm);
                parteentero=(int)vm2;
                partedecimal=vm2-parteentero;
                if (partedecimal==0)
                {
                    printf("La magnitud |V| del vector es:%f",vm2);
                    printf(" El vector unitario es:%d,%f",x1,y1/vm2);
                    
                }
                else
                {
                    printf("La magnitud |V| del vector es: /Raiz de %d ",vm;
                    printf(" El vector unitario es: <%d,%d",x1,y1);
                

                }
            
            }
        }


        if(enter>3)
        {
            
        ¿
        }
        else
        {
            if(enter==3)
            {
        
            }

        }





    fin:
    getch();
    return 0;
}
