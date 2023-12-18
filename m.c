	#include <stdio.h>
	int main(){
		int i,j,z,x,t=2,det=0;
		int veta[5][5], vetb[5][5], vetbb[5][5];
		printf("Entre com os elementos da matriz A(2x2)\n");
		for(i=0;i<t;i++){
			for(j=0;j<t;j++){
				scanf("%d", &veta[i][j]);
			};
		};
		printf("Entre com os elementos da matriz B(2x2)\n");
		for(i=0;i<t;i++){
			for(j=0;j<t;j++){
				scanf("%d", &vetb[i][j]);
			};
		};

		if(t==2){
			det=(vetb[0][0]*vetb[1][1])-(vetb[0][1]*vetb[1][0]);
			
		};

		vetbb[0][0]=vetb[1][1];
		vetbb[1][1]=vetb[0][0];
		vetbb[0][1]=vetb[0][1]-(vetb[0][1]*2);
		vetbb[1][0]=vetb[1][0]-(vetb[1][0]*2);

		for(i=0;i<t;i++){
			for(j=0;j<t;j++){
				vetbb[i][j]=vetbb[i][j]*(1/det);
			};
		};



		int mb[5][5];
for(i=0;i<t;i++){
    for(j=0;j<t;j++){
       mb[i][j]=0;
    };
};
        for(i=0;i<t;i++){
            for(j=0;j<t;j++){
                for(z=0;z<t;z++){
                     mb[i][j]=  mb[i][j] + (veta[i][z]*vetbb[z][j]);
                };
               
            };
           
        };
printf("A matriz mudança de base é:\n");
for(i=0;i<t;i++){
	printf("|");
	for(j=0;j<t;j++){
		printf("%.2d ", mb[i][j]);
	};
	 printf("|");
	printf("\n");

};







	};