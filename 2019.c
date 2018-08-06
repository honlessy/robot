//    ���в� CHGC www.chgckj.com	
#include <includes.h> 
int CHGCi; 

#define a1 analog(1)
#define a2 analog(2)
#define a3 analog(3)
#define a4 analog(4)
#define a5 analog(5) 
#define a6 analog(6)
#define a7 analog(7)
#define a8 analog(8)
#define a9 analog(9)
#define a10 analog(10)
#define a11 analog(11)
#define a12 analog(12)
#define a13 analog(13)
#define a14 analog(14)
#define a15 analog(15)
#define a16 analog(16)
#define a17 analog(17)
#define a18 analog(18)


///////////////////////////////////////////////////////����򻯶���
///////////////////////////////////////////////////////
///////////////////////////////////////////////////////
#define   ws   while(1){stop();}
#define   w while	
#define  st stop
#define  r  run
#define   s sleep	
#define   ms msleep
#define   rec digit_recognize()	
#define   com compass()



#define  maxa1   ((a1>=a2)&&(a1>=a3)&&(a1>=a4)&&(a1>=a5)&&(a1>=a6)&&(a1>=a7)&&(a1>=a8))
#define  maxa2   ((a2>=a1)&&(a2>=a3)&&(a2>=a4)&&(a2>=a5)&&(a2>=a6)&&(a2>=a7)&&(a2>=a8))
#define  maxa3   ((a3>=a1)&&(a3>=a2)&&(a3>=a4)&&(a3>=a5)&&(a3>=a6)&&(a3>=a7)&&(a3>=a8))
#define  maxa4   ((a4>=a1)&&(a4>=a2)&&(a4>=a3)&&(a4>=a5)&&(a4>=a6)&&(a4>=a7)&&(a4>=a8))	
#define  maxa5   ((a5>=a1)&&(a5>=a2)&&(a5>=a3)&&(a5>=a4)&&(a5>=a6)&&(a5>=a7)&&(a5>=a8))
#define  maxa6   ((a6>=a1)&&(a6>=a2)&&(a6>=a3)&&(a6>=a4)&&(a6>=a5)&&(a6>=a7)&&(a6>=a8))
#define  maxa7   ((a7>=a1)&&(a7>=a2)&&(a7>=a3)&&(a7>=a4)&&(a7>=a5)&&(a7>=a6)&&(a7>=a8))
#define  maxa8   ((a8>=a1)&&(a8>=a2)&&(a8>=a3)&&(a8>=a4)&&(a8>=a5)&&(a8>=a6)&&(a8>=a7))

#define  min1   ((a1<=a2)&&(a1<=a3)&&(a1<=a4)&&(a1<=a5)&&(a1<=a6)&&(a1<=a7)&&(a1<=a8))
#define  min2   ((a2<=a1)&&(a2<=a3)&&(a2<=a4)&&(a2<=a5)&&(a2<=a6)&&(a2<=a7)&&(a2<=a8))
#define  min3  ((a3<=a1)&&(a3<=a2)&&(a3<=a4)&&(a3<=a5)&&(a3<=a6)&&(a3<=a7)&&(a3<=a8))
#define  min4   ((a4<=a2)&&(a4<=a1)&&(a4<=a8)&&(a4<=a5)&&(a4<=a6)&&(a4<=a7)&&(a4<=a4))	
#define  min5   ((a5<=a2)&&(a5<=a1)&&(a5<=a8)&&(a5<=a5)&&(a5<=a6)&&(a5<=a7)&&(a5<=a3))
#define  min6   ((a6<=a8)&&(a6<=a1)&&(a6<=a2)&&(a6<=a3)&&(a6<=a4)&&(a6<=a5)&&(a6<=a7))
#define  min7   ((a7<=a8)&&(a7<=a1)&&(a7<=a2)&&(a7<=a3)&&(a7<=a4)&&(a7<=a5)&&(a7<=a6))
	

#define d1 digital(1)
#define d2 digital(2)
#define d3 digital(3)
#define d4 digital(4)

#define ws while(1){stop();}
#define max1 ((a1>a8)&& (a1>a2)&& (a1>a3)&& (a1>a4)&& (a1>a5)&& (a1>a6)&& (a1>a7))

#define  outline  ((a8<aaaa)&&(a1<aaaa))//ǰ������
#define  outline2 ((a1<a_val)&&(a2<a_val)&&(a3<a_val)&&(a4<a_val)&&(a5<a_val)&&(a6<a_val)&&(a7<a_val)&&(a8<a_val))


int c;
int v;
int a=510;
int ab=610;
int a_val=390;
int aaaa=580;
int ar;
int b;
int br;
int v0;
int v1;
int q;
int m;
int a_t;
int a_v;
int t;
int o;

void start(void);

void runp(unsigned a, unsigned b);
void run(int c, int b);
void alter_v_5(unsigned a, unsigned b, unsigned c);
void alter_v_2(unsigned a, unsigned b, unsigned c);
void alter_v_50(unsigned a, unsigned b, unsigned c);
void alter_v_circle2(unsigned a, unsigned b, unsigned c);
void alter_v(unsigned a, unsigned b, unsigned c);
void alter_v_dt(unsigned a, unsigned b, unsigned c);
void alter_v_right(unsigned a,unsigned b,unsigned c);
void alter_v_left(unsigned a,unsigned b,unsigned c);
void alter_v_78(unsigned a, unsigned b, unsigned c);
void loulou(unsigned q);
void gaogao(unsigned q);
void quickly(unsigned q);
void fast(unsigned q);
void jq(float a ,float b );

void cruise_1(void);
void cruise_2(void);
void cruise_50(void);
void cruise_1_1(void);
void cruise_ms(void);
void cruise_yy(void);
void check_outline(void); 
void cruise_pass_bridge(void);
void cruise_max(void);
void cruise_circle1(void);
void cruise_circle2(void);
void cruise_back(void);

void start_servo(void);
void p_servo(void);
void bao_servo(void);
void pup(void);
void pdown(void);
void pup1(void);
void pup2(void);
void pup3(void);
void pup4(void);
void pup5(void);
void pup7(void);
void pup8(void);
void p1_p2(void);
void p2_p4(void);
void p2_p3(void);
void p4_p3(void);
void p3_p4(void);
void p4_path_p5(void);
void p3_home(void);
void p3_p5_1(void);
void p3_p5_3(void);
void p3_p5_4(void);
void p3_p5_check(void);
void p5_pp(void);
void p8_home(void);
void pp_p7(void);
void pp_p8(void);
void p8_pp(void);
void p7_pp(void);
void pp_left_1(void);
void pp_right_1(void);
void pp_straight(void);
void pp_left_90(void);
void pp_right_90(void);
void pp_d1_home(void);
void pp_d3_home(void);
void pp_d4_home(void);
void pp_path_home(void);
	
void check_1(void);
void check_1plus(void);
void check_1_8pp(void);
void check3_1(void);
void check_6(void);
void check_8(void);
void check_pup8(void);
void check_17(void);
void check_18(void);
void check_18_back(void);

void door1(void);
void door2(void);
void door3(void);
void door4(void);
void door1_2(void);
void door4_2(void);
void round1(void);
void round2(void);
void rec1(void);
void rec2(void);
void rec3(void);
void choose_door(void);
		
void znz(int a);
void zhuan(unsigned a);
void right(unsigned a);
void right_90(void);
void left(unsigned a);
void left_90(void);



void run(int b, int a){//run �ֲ�       1��2��
     ar=b-1307*b/30000; 
	motor(3,a);motor(1,ar);         
}

void check_outline(void){
	while(!outline2){cruise_50();}
}

void alter_v_dt(unsigned a, unsigned b, unsigned c){//������ʱ�߼���
	reset_system_time( );t=0;
	v0=a;
	v1=b;
	a_t=c;
	while(1){
		t=mseconds();
		if(t>a_t){break;}
		else{
			a_v=(v1-v0)*t/a_t;
			v=v0+a_v;
			run(-10*v,-10*v);
		}
	}
}

void alter_v_50(unsigned a, unsigned b, unsigned c){//���Ը��ٱ���Ѱ��ϵͳ-2��vֵ�ı䣩
	reset_system_time( );t=0;
	v0=a;
	v1=b;
	a_t=c;
	while(1){
		t=mseconds();
		if(t>a_t){break;}
		else{
			a_v=(v1-v0)*t/a_t;
			v=v0+a_v;
			cruise_50();
		}
	}
}

void alter_v_circle2(unsigned a, unsigned b, unsigned c){//���Ը��ٱ���Ѱ��ϵͳ-2��vֵ�ı䣩
	reset_system_time( );t=0;
	v0=a;
	v1=b;
	a_t=c;
	while(1){
		t=mseconds();
		if(t>a_t){break;}
		else{
			a_v=(v1-v0)*t/a_t;
			v=v0+a_v;
			cruise_circle2();
		}
	}
}

void alter_v_78(unsigned a, unsigned b, unsigned c){//7,8��ƽ̨����ϵͳ
	reset_system_time( );t=0;
	v0=a;
	v1=b;
	a_t=c;
	while(1){
		t=mseconds();
		if(t>a_t){break;}
		else{
			a_v=(v1-v0)*t/a_t;
			v=v0+a_v;
			cruise_1_1();
		}
	}
}

void alter_v_2(unsigned a, unsigned b, unsigned c){//���Ը��ٱ���Ѱ��ϵͳ-2��vֵ�ı䣩
	reset_system_time( );t=0;
	v0=a;
	v1=b;
	a_t=c;
	while(1){
		t=mseconds();
		if(t>a_t){break;}
		else{
			a_v=(v1-v0)*t/a_t;
			v=v0+a_v;
			cruise_2();
		}
	}
}

void loulou(unsigned q){
  alter_v_50(3,4,488);
  alter_v_50(4,4,q);
  alter_v_50(4,3,286);
}

void gaogao(unsigned q){
  alter_v_50(3,7,588);
  alter_v_50(7,7,q);
  alter_v_50(7,3,386);
}

void quickly(unsigned q){
  alter_v_50(3,8,588);
  alter_v_50(8,8,q);
  alter_v_50(8,3,386);
}

void fast(unsigned q){
  alter_v_50(3,9,588);
  alter_v_50(9,9,q);
  alter_v_50(9,3,386);
}

void jq(float a ,float b ){
	m=a;
	reset_system_time();t=0;
	while(t<b){
		t=mseconds();
		if(maxa4){run(10*m,0*m);}
		else if(maxa5){run(0*m,10*m);}
		else if(maxa3){run(10*m,-5*m);}
		else if(maxa6){run(-5*m,10*m);}
		else if(maxa2){run(10*m,-8*m);}
		else if(maxa7){run(-8*m,10*m);}
		else if(maxa1){run(10*m,-10*m);}
		else if(maxa8){run(-10*m,10*m);}
		else {run(10*m,10*m);}
	}
}

//////////////////////Ѳ��

void cruise_50(void){
	if(v<5.1){cruise_ms();}
	else {cruise_yy();}

}
void cruise_ms(void){                                   
	/*if(maxa4||maxa5){cruise_yy();}
	else if(maxa3){run(10*v,9*v);}
	else if(maxa2){run(10*v,7*v);}
	else if(maxa1){run(10*v,5*v);}
	else if(maxa6){run(9*v,10*v);}
	else if(maxa7){run(7*v,10*v);}
	else if(maxa8){run(5*v,10*v);}
	else {run(10*v,10*v);}*/
	if(maxa4||maxa5){cruise_yy();}
	else if(maxa3){while(a5<a){run(10*v,9*v);break;}}
	else if(maxa2){while(a5<a){run(10*v,8*v);break;}}
	else if(maxa1){while(a5<a){run(10*v,7*v);break;}}
	else if(maxa6){while(a4<a){run(9*v,10*v);break;}}
	else if(maxa7){while(a4<a){run(8*v,10*v);break;}}
	else if(maxa8){while(a4<a){run(7*v,10*v);break;}}
	else {run(10*v,10*v);}                                    
}
void cruise_yy(void){
	 
	    float c=0.97;	//0.97
	 	float aa1=a1;
	 	float aa2=a2;
	 	float aa3=a3;
	 	float aa4=a4;
	 	float aa5=a5;
	 	float aa6=a6;
	 	float aa7=a7;
		float aa8=a8;
	 	
  if(v<5.1)	 
  {
  	if(maxa5)
   {
   	   if((a4>a)||(aa4<a4)) {motor(3,c*v*10);motor(1,10*v);}
   	   else {motor(3,c*v*9.8);motor(1,10*v);}   	   
   }
   else if(maxa4)
   {
   	   if((a5>a)||(aa5<a5)) {motor(3,c*v*10);motor(1,10*v);}
   	   else {motor(3,c*v*10);motor(1,9.8*v);}   	   
   }
   else if(maxa3)
   {
   	   if(aa4<a4) {motor(3,c*v*10);motor(1,10*v);}
   	   else {motor(3,c*v*10);motor(1,8*v);}   	   
   }  
    else if(maxa6)
   {
   	   if(aa5<a5) {motor(3,c*v*10);motor(1,10*v);}
   	   else {motor(3,c*v*8);motor(1,10*v);}   	   
   }  
     else if(maxa2)
   {
   	   if(aa3<a3) {motor(3,c*v*10);motor(1,10*v);}
   	   else {motor(3,c*v*9);motor(1,7*v);}   	   
   }  
     else if(maxa7)
   {
   	   if(aa6<a6) {motor(3,c*v*10);motor(1,10*v);}
   	   else {motor(3,c*v*7);motor(1,9*v);}   	   
   }  
     else if(maxa8)
   {
   	   if(aa7<a7) {motor(3,c*v*10);motor(1,10*v);}
   	   else {motor(3,c*v*4);motor(1,6*v);}   	   
   }  
      else if(maxa1)
   {
   	   if(aa2<a2) {motor(3,c*v*10);motor(1,10*v);}
   	   else {motor(3,c*v*6);motor(1,4*v);}   	   
   }  
      else 
   {
   	   motor(3,c*v*6);motor(1,6*v);	   
   } 
  }	
   else 
   {
   	   
   	if(maxa5)
   {
   	   if((a4>a)||(aa4<a4)) {motor(3,c*v*10);motor(1,10*v);}
   	   else {motor(3,c*v*9.8);motor(1,10*v);}   	   
   }
   else if(maxa4)
   {
   	   if((a5>a)||(aa5<a5)) {motor(3,c*v*10);motor(1,10*v);}
   	   else {motor(3,c*v*10);motor(1,9.8*v);}   	   
   }
   else if(maxa3)
   {
   	   if(aa4<a4) {motor(3,c*v*10);motor(1,10*v);}
   	   else {motor(3,c*v*10);motor(1,9*v);}   	   
   }  
    else if(maxa6)
   {
   	   if(aa5<a5) {motor(3,c*v*10);motor(1,10*v);}
   	   else {motor(3,c*v*9);motor(1,10*v);}   	   
   }  
     else if(maxa2)
   {
   	   if(aa3<a3) {motor(3,c*v*10);motor(1,10*v);}
   	   else {motor(3,c*v*9);motor(1,7*v);}   	   
   }  
     else if(maxa7)
   {
   	   if(aa6<a6) {motor(3,c*v*10);motor(1,10*v);}
   	   else {motor(3,c*v*7);motor(1,9*v);}   	   
   }  
     else if(maxa8)
   {
   	   if(aa7<a7) {motor(3,c*v*10);motor(1,10*v);}
   	   else {motor(3,c*v*4);motor(1,6*v);}   	   
   }  
      else if(maxa1)
   {
   	   if(aa2<a2) {motor(3,c*v*10);motor(1,10*v);}
   	   else {motor(3,c*v*6);motor(1,4*v);}   	   
   }  
      else 
   {
   	   motor(3,c*v*6);motor(1,6*v);	   
   } 
   }
}


void cruise_back(void){//   ���ŻҶ�Ѳ��
	if((a12>ab)&&(a13>ab)){run(10*v,10*v);}
	else if(a13>ab){run(10*v,9*v);}	
	else if((a14>ab)||(a15>ab)){run(10*v,8*v);}
	else if(a16>ab){run(10*v,6*v);}
	else if(a12>ab){run(9*v,10*v);}
	else if((a11>ab)||(a10>a)){run(8*v,10*v);}
	else if(a9>ab){run(6*v,10*v);}
	else {run(10*v,10*v);}
}


void cruise_1(void){    //Ѱ��   ����
	if(maxa5||maxa4)
	  {
	   if(maxa5)run(10*v,10.6*v);	
	   else if(maxa4)run(10.2*v,10*v);
	}////////////////run(10*v,10.3*v);//v=5,10.6 v=3,10.7
    else if(maxa6)run(8.5*v,10*v);
  	else if(maxa3)run(10*v,8*v);	
  	else if(maxa7)run(6*v,7.5*v);
  	else if(maxa2)run(7.5*v,6*v);
   	else run(8*v,8.2*v);
}

void cruise_1_1(void){//����Ѱ��1��ǰ��v�����ı�v��  ����
	if((a4<a)&&(a5<a)){run(10*v,10*v);}
	else if(a5>a){run(8*v,10*v);}	
	else if((a6>a)||(a7>a)){run(8*v,10*v);}
	else if(a8>a){run(6*v,10*v);}
	else if(a4>a){run(10*v,8*v);}
	else if((a3>a)||(a2>a)){run(10*v,8*v);}
	else if(a1>a){run(10*v,6*v);}
	else {run(10*v,10*v);}
}

void cruise_2(void){///////����Ѱ��{
	if((a4>a)&&(a5>a)){run(10*v,10*v);}
	else if(a4>a){run(10*v,9*v);}
	else if(a5>a){run(9*v,10*v);}
	else if(a3>a){run(10*v,7*v);}
	else if(a6>a){run(7*v,10*v);}
	else if(a2>a){run(10*v,6*v);}
	else if(a7>a){run(6*v,10*v);}
	else if(a1>a){run(10*v,5*v);}
	else if(a8>a){run(5*v,10*v);}
	else {run(10*v,10*v);}
}

void cruise_pass_bridge(void){
	reset_system_time();
    t=0;
  while(t<2400){
  	  	t=mseconds();
	if(a1>350)run(30,35);
	 else  if(a8>440)run(35,30);	
	   else  run(30,30);
	}
	
}

void cruise_max(void){
            if(maxa5||maxa4) run(10*v,10*v);
            else if(maxa3)run(8*v,6*v); 
            else if(maxa2||maxa1)run(8*v,5*v);  
            else if(maxa6)run(6*v,8*v);  
            else if(maxa7||maxa8)run(5*v,8*v);  
}

void cruise_circle1(void){////////////////////////////Բѭ����ʱ��
            if(maxa5) run(5*v,10*v);//7
			else if(maxa4)run(80*v/11,7*v); 
            else if(maxa3)run(8*v,7*v); 
            else if(maxa2||maxa7)run(8*v,5*v);  
            else if(maxa6)run(4*v,10*v);  //6
            else if(maxa7||maxa8)run(1*v,10*v);  //3
}

void cruise_circle2(void){////////////////////////////Բѭ��˳ʱ��
            if(maxa5) run(10*v,7*v);
			else if(maxa4)run(7*v,80*v/11);
            else if(maxa3)run(10*v,4*v); 
            else if(maxa2||maxa1)run(10*v,3*v);  
            else if(maxa6)run(4*v,10*v);  
            else if(maxa7||maxa8)run(3*v,10*v);  
}

void check_1(void){//Ѱ��+���б�£�ǰ��v�����ı�v��
	while(a1<450){cruise_50();}
}

void check_1plus(void){    //���pp
	while(a1<500||a8<520){cruise_50();}
}

void check_1_8pp(void){    //8��pp���pp
	while(a1<450){cruise_50();}
}


void check3_1(void){  //�Ҳ��˰�ȥ�ķֲ�ڣ���˼
     while(a1<450){
     cruise_50();
     }
}


void check_6(void){//���˲��˰�ķֲ��
     while(a8<400){
     cruise_1();
     }
}

void check_8(void){                  /////////////a8���pp
while(a8<460){
     cruise_50();
     }
}

void check_pup8(void){
	while(a8<500){
     cruise_50();
     }
}

void check_17(void){     
while(a17<600){
     cruise_50();
     }
}

void check_18(void){     
while(a18<700){
     cruise_50();
     }
}

void check_18_back(void){     
  while(a18<700){
     cruise_back();
     }
}

////////////////////////
void alter_v(unsigned a, unsigned b, unsigned c){//���Ա���Ѱ��ϵͳ-1��vֵ�ı䣩
	reset_system_time( );t=0;
	v0=a;
	v1=b;
	a_t=c;
	if(v0<v1){
		while(1){
			t=mseconds();
			if(t>a_t){break;}
			else{
				a_v=(v1-v0)*t/a_t;
				v=v0+a_v;
				cruise_1_1();
			}
		}
	}
	else{
		while(1){
			t=mseconds();
			if(t>a_t){break;}
			else{
				a_v=(v0-v1)*t/a_t;
				v=v0-a_v;
				cruise_1_1();
			}
		}
	}
}

void start(void){//����
	/*while(1){
	if(d3==0){stop();msleep(111);}
	else{break;}
	}*/
	/* while(d3==1){stop();msleep(111);}
	while(d3==0){stop();msleep(111);} */
while(digital(1)==1){stop();msleep(15);}
while(digital(1)==0){stop();msleep(15);}
	}


void runp(unsigned a, unsigned b){//runpƽ̨ת
	br=b*30/31;
	motor(3,a);motor(1,br);
}


void pup1(void){                           //��ƽ̨1��ת
	alter_v(3,2,350);
	alter_v(2,2,900);
    zhuan(1510);
	/* znz(248); */
	stop();
}

void pup2(void){                      //��ƽ̨2��ת
	pup();
/* 	znz(122);  */
    pdown(); 
	stop();
}

void pup3(void){                  //��ƽ̨3��ת
    pup();
    pdown(); 
	stop();
}

void pup4(void){                       //��ƽ̨4��ת
    pup();
	/* znz(212); */
    pdown();
	stop();
}

void pup5(void){                     //��ƽ̨5��ת
    pup();
    pdown();  
	stop();
}

void pup7(void){                    //��ƽ̨7��ת
    alter_v(2,3,400);
	alter_v(3,0,300);
	alter_v_dt(0,2,200);
	alter_v_dt(2,2,150);
	alter_v_dt(2,0,200);
	 p_servo();
    zhuan(1550);
 /*    znz(278);  */
	stop();
}

void pup8(void){                   //��ƽ̨8��ת
    alter_v(2,3,300);
	alter_v(3,0,300);
	alter_v_dt(0,2,200);
	alter_v_dt(2,2,150);
	alter_v_dt(2,0,200);
	p_servo();
    zhuan(1550);
	/* znz(148); */
	stop();
}

void znz(int a){                         //ָ����
	int c=compass();
	while(1){
		if (c>a){motor(1,10); motor(3,-10*0.96);msleep(20);}
		else if(c<a) {motor(1,-10);motor(3,10*0.96); msleep(20);}
		else {break;}
		c=compass();}
 }
 
void zhuan(unsigned a){
   stop();msleep(100);
  alter_v_right(0,2,a/3);
  alter_v_right(2,4,a/6); 
  alter_v_right(4,2,a/6);
  alter_v_right(2,0,a/3);
  stop();msleep(100);
	
}

void alter_v_right(unsigned a,unsigned b,unsigned c){
	reset_system_time( );t=0;
	v0=a;
	v1=b;
	a_t=c;
	while(1){
		t=mseconds();
		if(t>a_t){break;}
		else{
			a_v=(v1-v0)*t/a_t;
			v=v0+a_v;
		    run(v*10,-v*10-1);
           }
     	}
	}
	
void alter_v_left(unsigned a,unsigned b,unsigned c){
	reset_system_time( );t=0;
	v0=a;
	v1=b;
	a_t=c;
	while(1){
		t=mseconds();
		if(t>a_t){break;}
		else{
			a_v=(v1-v0)*t/a_t;
			v=v0+a_v;
		    run(-v*10,v*10);
           }
     	}
	}

void right(unsigned a){
  alter_v_right(3,3,a); 
}
void right_90(void){
    right(365);
}
void left(unsigned a){
  /*stop();msleep(100);
  alter_v_left(0,2,a/3);
  alter_v_left(2,3,a/6); 
  alter_v_left(3,2,a/6);
  alter_v_left(2,0,a/3);////���ԭ��880
  stop();msleep(100);*/
  alter_v_left(3,3,a);
}
void left_90(void){
    left(400);
}
 
 
 ///////////////////����
void door1(void){
	quickly(450);
    check_18();
    stop();msleep(100);
 if(digital(2)==1){ 
    o=1; 
    right_90();
	jq(3,456);
	loulou(30);
	check_1();
	alter_v_50(3,2,100);
	reset_system_time();t=0;
	  while(t<1200){t=mseconds();cruise_50();}
	check_18();
	left_90();
	alter_v_50(1,3,100);
    quickly(1900);
	check_1();
	pup5();
	p5_pp();
   pp_left_1();
   pp_p7();
   p7_pp();
   pp_straight();
   pp_p8();
   p8_pp();
   pp_left_90();
   pp_d1_home();
	stop();
  }
  else if(digital(2)==0){
	door4();
  }

 }

void door4(void){
	 alter_v_50(0,3,300);
	 quickly(800);
    check_18();
    alter_v(3,3,100);
	stop();msleep(100);
 	  if(digital(2)){
		  o=2;
	right_90();
	jq(3,456);
	loulou(0);
	alter_v_50(3,2,100);
	check_1();
	reset_system_time();t=0;
	  while(t<1100){t=mseconds();cruise_50();}
	check_17();
	left_90();
	alter_v_50(1,3,100);
	gaogao(800);
	check_1();
	pup5();
   p5_pp();
   pp_left_1();
   pp_p7();
   p7_pp();
   pp_straight();
   pp_p8();
   p8_pp();
   pp_left_90();
   pp_d4_home();
	stop();
  }
  else if(digital(2)==0){
	  o=3;
  	 right(515);          
	 alter_v_50(1,3,200);
	 jq(3,567);
     loulou(0);
	alter_v_50(3,2,100);
	check_1();
	reset_system_time();t=0;
	  while(t<1100){t=mseconds();cruise_50();}
	 quickly(480);
	 check_18();
	 alter_v_50(3,3,20);
	 left(600);
	 alter_v_50(1,3,100);
     quickly(1900);
	 check_1();
	 pup5();
	 p5_pp();
   pp_left_1();
   pp_p7();
   p7_pp();
   pp_straight();
   pp_p8();
   p8_pp();
   pp_left_90();
   pp_d3_home();
	stop();
 }
 }
 
  ///////////////////����  ��ײ��
void door1_2(void){
	quickly(450);
    check_18();
    stop();msleep(100);                                              
    right_90();
	loulou(30);
	check_1();
	run(20,20);
	msleep(900);
	 if(digital(1)==1){ 
	 o=1;
	 run(20,20);
	msleep(800);
	v=3;
	check_18();
	left_90();
	alter_v_50(1,3,100);
    fast(1700);
	check_1();
	pup5();
	p5_pp();
   pp_left_1();
   pp_p7();
   p7_pp();
   pp_straight();
   pp_p8();
   p8_pp();
   pp_left_90();
   pp_d1_home();
	stop();
  }
  else if(digital(1)==0){
	v=-3;
	reset_system_time();t=0;
	  while(t<1100){t=mseconds();cruise_back();}
	check_18_back();
	left_90();
	door4_2();
  }

 }

void door4_2(void){
	 alter_v_50(0,3,300);
	 quickly(800);
    check_18();
    alter_v(3,3,100);
	stop();msleep(100);
	right_90();
	jq(3,456);
	loulou(0);
	check_1();
	run(20,20);
	msleep(900);
	if(digital(1)==1){ 
	o=2;
	run(20,20);
	msleep(800);
	v=3;
	check_17();
	left_90();
	alter_v_50(1,3,100);
	gaogao(800);
	check_1();
	pup5();
   p5_pp();
   pp_left_1();
   pp_p7();
   p7_pp();
   pp_straight();
   pp_p8();
   p8_pp();
   pp_left_90();
   pp_d4_home();
	stop();
  }
  else if(digital(1)==0){
	  o=3;
	v=-3;
	reset_system_time();t=0;
	  while(t<1100){t=mseconds();cruise_back();}
	check_18_back();
	right(199);
	 alter_v_50(1,3,200);
	 jq(3,567);
     loulou(0);
	alter_v_50(3,2,100);
	check_1();
	v=2;
	reset_system_time();t=0;
	  while(t<1300){t=mseconds();cruise_50();}
	 quickly(440);
	 check_18();
	 alter_v_50(3,3,20);
	 stop();msleep(100);
	 left(600);
	 alter_v_50(1,3,100);
     fast(1700);
	 check_1();
	 pup5();
	 p5_pp();
   pp_left_1();
   pp_p7();
   p7_pp();
   pp_straight();
   pp_p8();
   p8_pp();
   pp_left_90();
   pp_d3_home();
	stop();
 }
 }

 void round1(void){
	start();
	start_servo();
	p1_p2();
    p2_p4();
    p4_p3();
    door1_2();
    	
	 
 }
 
 void round2(void){
	start();
	start_servo();
	 if(o==1){
		 rec1();}
      else if(o==2){
		 rec2();}
		else if(o==3){
		 rec3();}
 }
 
 void rec1(void){     /////��1��
   p1_p2();
   p2_p4();
   p4_p3();
   p3_p5_1();
   p5_pp();
   pp_left_1();
   pp_p7();
   p7_pp();
   pp_straight();
   pp_p8();
   p8_pp();
   pp_left_90();
   pp_d1_home();
	stop();
 }
 
 void rec2(void){     //////��4��
   p1_p2();
   p2_p4();
   p4_p3();
   p3_p5_4();
   p5_pp();
   pp_left_1();
   pp_p7();
   p7_pp();
   pp_straight();
   pp_p8();
   p8_pp();
   pp_left_90();
   pp_d4_home();
	stop();
 }
 
 void rec3(void){     //////��3��
   p1_p2();
   p2_p4();
   p4_p3();
   p3_p5_3();
   p5_pp();
   pp_left_1();
   pp_p7();
   p7_pp();
   pp_straight();
   pp_p8();
   p8_pp();
   pp_left_90();
   pp_d3_home();
	stop();
 }
 
void choose_door(void){
	 
	  
  }
 
 ///////////////////ƽ̨ת��
void pup(void){
	alter_v(3,2,350);
	while(digital(1)==1){
	cruise_50();}
	alter_v(2,3,400);
	alter_v(3,3,100);
	alter_v_dt(0,3,200);
	alter_v_dt(3,3,50);
	alter_v_dt(3,0,200);
	p_servo();
	zhuan(1550);
}

void pdown(void){
	alter_v(0,2,300);
	alter_v(2,3,300);
	alter_v(3,3,500);
}


void p1_p2(void){
   pdown();
   loulou(150);
   check_1();
   run(28,32); msleep(500);                          //////////������
   cruise_pass_bridge();
   loulou(900);
   check_1();                                         ////////////////��⵽ƽ̨2
   pup2();
   stop();

}

void p2_p4(void){
    check3_1();
	right(150);
	alter_v_50(2,3,200);
	jq(3,456);
	alter_v_50(3,3,500);
	alter_v_50(3,2,200);
	  reset_system_time();t=0;
	while(t<2200){t=mseconds();cruise_50();}
	check_17();
	stop();msleep(100);
	left(100);
	alter_v_50(3,3,300);
	gaogao(1600);
	check_1();
	pup4(); 
	stop();
}

void p2_p3(void){
    check3_1();
	right(113);
	jq(3,567);
	alter_v_50(2,2,300);
	  reset_system_time();t=0;
	while(t<3200){t=mseconds();cruise_50();}
	loulou(400);
	check_17();
	right(545);
	quickly(1300);
	check_1();
	pup3();
	stop();
}

void p4_p3(void){
  fast(2900);
	check_1();                                         
    pup3();
	stop();  
}

void p3_p4(void){
  quickly(3300);
	check_1();                                         
    pup4();
	stop();  
}

void p4_path_p5(void){
	quickly(200);
	check_17();
	left(375);
	alter_v_50(1,3,200);
	jq(3,345);
	alter_v_50(3,5,200);
	check_1plus();
    alter_v(2,2,205);	
	pp_left_1();
	jq(3,678);
	check_18();
	alter_v_50(2,3,200);
	right(545);
	alter_v_50(3,5,200);
	jq(3,345);
	alter_v_50(5,3,600);
	alter_v_circle2(3,5,500);
	while(a17<630){
    cruise_circle2();
     }
	left(500);
	alter_v_50(0,3,200);
	quickly(200);
	check_1();
	pup5();
	stop();
}

void p3_home(void){
	
}

void p3_p5_1(void){                            ///////////////////������⣬ָ����ͨ�У��������Ҫдһ��
	quickly(450);
    check_18();
    stop();msleep(100);                                             
    right_90();
	jq(3,456);
    loulou(30);
	check_1();
	v=2;
	reset_system_time();t=0;
	  while(t<1400){t=mseconds();cruise_50();}
	check_18();
	left_90();
	alter_v_50(1,3,100);
    fast(1700);
	check_1();
	pup5();
	stop();
	
}

void p3_p5_3(void){
	quickly(2000);
    check_18();
    alter_v(3,3,150);
	right(525);
	/* alter_v_50(1,3,200);
	*/
    loulou(30);
	alter_v_50(3,2,100);
	check_1();
	v=2;
	reset_system_time();t=0;
	  while(t<1400){t=mseconds();cruise_50();}
	gaogao(400);
	check_18();
	alter_v_50(3,3,100);
	left(600);
	alter_v_50(1,3,100);
      fast(1700);
	  check_1();
	  pup5();
	stop();
}

void p3_p5_4(void){
	quickly(2000);
    check_18();
    alter_v(3,3,100);
	stop();msleep(100);
	right_90();
	jq(3,456);
	loulou(0);
	alter_v_50(3,2,100);
	check_1();
	v=2;
	reset_system_time();t=0;
	  while(t<1400){t=mseconds();cruise_50();}
	check_17();
	left_90();
	alter_v_50(1,3,100);
	gaogao(800);
	 check_1();
	  pup5();
	stop();
}

void p5_pp(void){
	 fast(1000);
	check_17();
	stop();msleep(100);
	left_90();
	alter_v_50(1,3,200);
	loulou(500);
	check_1plus();
    alter_v(3,3,205);	

}

void pp_left_1(void){
	run(30,5);
	sleep(1);
	alter_v(2,2,1300);
}

void pp_right_1(void){
	run(5,30);
	sleep(1);
	alter_v(2,2,700);
}

void pp_straight(void){
	
	run(28,32);msleep(600);
	reset_system_time();
	t=0;
	while(t<1200){
    t=mseconds();
	if(a1>360) run(30,25);//aq=550;
	else if(a8>420) run(25,30);
	else  run(30,30);
	}
	run(32,28);msleep(300);
	
	// �����غ� �����
}

void pp_left_90(void){              
	/* alter_v(0,3,100);
	alter_v(3,3,600); */
	run(31,29);msleep(530);
	reset_system_time();
	t=0;
	while(t<350){
    t=mseconds();
	if(a1>360) run(30,25);
	else if(a8>450) run(25,30);
	else  run(30,30);
	}
	left_90();
	alter_v(2,3,500);
}

void pp_right_90(void){              
	/* alter_v(0,3,100);
	alter_v(3,3,600); */
	run(31,29);msleep(530);
	reset_system_time();
	t=0;
	while(t<350){
    t=mseconds();
	if(a1>260) run(30,25);
	else if(a8>450) run(25,30);
	else  run(30,30);
	}
	right_90();
	alter_v(2,3,500);
}

void pp_p7(void){
	check_18();
	right_90();
	alter_v_2(3,3,300);
	check_17();
	left_90();
	jq(3,456);
	alter_v_2(2,2,4000);
	alter_v_2(2,3,300);
	jq(3,456);
    check_1();
	while(digital(1)==1){
	cruise_1_1();}
	pup7();
}

void pp_p8(void){
	v=3;
	check_pup8();
	while(digital(1)==1){
	cruise_1_1();}
	pup8();
}

void p7_pp(void){
	 pdown();
     reset_system_time();t=0;
     while(t<1500){t=mseconds();cruise_1_1();}
	 alter_v_50(3,2,200);
	 alter_v_50(2,2,3500);
	 alter_v_50(2,3,200);
	 check_18();
	 right_90();
	 jq(3,345);
	 check_17();
	 left_90();
	 jq(3,345);
	 check_8();
	 stop();
}

void p8_pp(void){
	pdown();
	reset_system_time();t=0;
     while(t<3500){t=mseconds();cruise_50();}
	 check_1_8pp();
	  stop();msleep(100);
}

void pp_d1_home(void){
	loulou(0);
	check_17();
	left_90();
	/* jq(3,456); */
	loulou(400);
	check_18();
	right_90();
    jq(3,456);
    check_17();
	left_90();
	alter_v_50(3,3,1000);
	v=-3;
	check_18_back();
	right_90();
	jq(3,345);
    loulou(400);
	check_1();
	v=2;
	reset_system_time();t=0;
	  while(t<1300){t=mseconds();cruise_50();} 
	alter_v_50(2,4,100);
	check_17();
	right_90();
	alter_v_50(0,3,300);
	loulou(330);
	check_8();
	alter_v_50(3,3,300);
	left(110);
	loulou(80);
   alter_v_2(3,2,100);
   alter_v_2(2,2,2500);
   alter_v_2(2,3,300);
	check_17();
	alter_v_50(3,3,100);
	right(150);
	check_1();
	pup1();
}

void pp_d3_home(void){
	 loulou(0);
	check_17();
	left_90();
	/* jq(3,456); */
	loulou(400);
	check_18();
	right_90();
    jq(3,456);
    check_17();
	left_90();
	alter_v_50(3,3,1000);
	v=-3;
	check_18_back();
	right_90();
	check_18();
	stop();msleep(100);
	right(190);
	alter_v_50(3,3,300);
	quickly(400);
	alter_v_50(3,2,200);
	check_1();
	v=2;
	reset_system_time();t=0;
	  while(t<1300){t=mseconds();cruise_50();}   
	v=3;
	check_18();
	alter_v(3,2,180);
	left(600);
	stop();msleep(100);
	alter_v_50(3,3,200);
	loulou(330);
	check_18();
	alter_v_50(3,3,100);
	 right(550);
	loulou(80);
   alter_v_2(3,2,100);
   alter_v_2(2,2,2500);
   alter_v_2(2,3,300);
	check_17();
	alter_v_50(3,3,120);
	right(113);
	check_1();
	pup1();
	stop();
	
}

void pp_d4_home(void){
	 loulou(0);
	check_17();
	right_90();
	loulou(0);
	check_17();
	left_90();
	alter_v_50(3,3,800);
    v=-3;
	check_18_back();
	right_90();
	loulou(0);
	check_17();
	left_90();
    gaogao(0);
	alter_v_50(3,3,500);
	alter_v_50(3,2,200);
	reset_system_time();t=0;
	  while(t<2300){t=mseconds();cruise_50();} 
    v=3;	  
	check_18();
	left_90();
	loulou(350);
	check_18();
	alter_v_50(3,3,100);
	 right(550);
	loulou(80);
   alter_v_2(3,2,100);
   alter_v_2(2,2,2500);
   alter_v_2(2,3,300);
	check_17();
	alter_v_50(3,3,100);
	right(113);
	check_1();
	pup1();
}

void pp_path_home(void){
	check_17();
	left_90();
	alter_v_circle2(0,5,300);
	alter_v_circle2(5,5,500);
	alter_v_50(5,5,800);
	check_17();
	alter_v_50(5,3,150);
	left(610);
	alter_v_50(3,3,300);
	jq(3,345);
	check_8();
	pp_right_90();
	check_17();
	left_90();
	loulou(400);
	check_18();
	alter_v_50(3,3,300);
	 right(550);
	loulou(80);
   alter_v_2(3,2,100);
   alter_v_2(2,2,2500);
   alter_v_2(2,3,300);
	check_17();
	alter_v_50(3,3,100);
	right(113);
	check_1();
	pup1();
     stop();
 
}

void p3_p5_check(void){                           //////////////////�����ͨ��
   run(30,30);msleep(900);
   v=4;
   check_1();
  run(30,31);msleep(150);
  stop();msleep(100);
  door1();
  door4();
  stop();
}                         

void p8_home(void){
  
}

///////////////////////////////////////////////////////
 void start_servo(void){
	 stop();msleep(100);
     servo(1,400); msleep(100);     
     servo(2,375);msleep(100);   
     servo(3,750); msleep(100);       //////��ʼ����״̬
     stop();msleep(300);
	 servo(2,75); msleep(300);   ///////��ͷ
     servo(2,675); msleep(150);	
     servo(2,75); msleep(300);
     servo(2,675); msleep(150);	
     servo(2,375);msleep(300);    	 
     
 }
 void p_servo(void){
	 stop();msleep(300);
/* 	 servo(1,400); msleep(100);     
     servo(2,375);msleep(100);   
     servo(3,750); msleep(100);
	 stop();msleep(300); */
     servo(1,700); msleep(300);
	 servo(1,400); msleep(150);
	 servo(3,100); msleep(300); 
	 servo(3,750); msleep(150); 
     stop();msleep(300);
 }
 void bao_servo(void){
	 stop();msleep(300);
     servo(3,400); msleep(300);
	  reset_system_time();
     t=0;
    while(t<300)
    {
	  t=mseconds();
	  servo(4,900); servo(5,100);//ͬʱ����
     }
    reset_system_time();
	 t=0;
    while(t<300)
   {
	t=mseconds();
	servo(4,500);servo(5,500);//ͬʱ����
   }
     servo(3,800);msleep(300);
     stop();msleep(300);
 }


///////////////////////////main
void mainX1(void)
{ 
   start();
   p1_p2();
   p2_p4();
   p4_p3();
   door1();
   stop();
}

void mainX2(void)
{
      test();
}

void mainX3(void)
{ 
     p1_p2();
	 p2_p4();
	  stop();
 
 }

void mainX4(void)
{   
    right_90();
	  stop();
 
}

void mainX5(void)
{
   round1();
   round2();
   stop();
}

void mainX6(void)
{

}


void mainX7(void)
{
  
}



	
void mainX(void *p_arg) 
{
  set_name(MAINX1,"main1");
  set_name(MAINX2,"test");
  set_name(MAINX3,"main3");
  set_name(MAINX4,"main4");
  set_name(MAINX5,"main5");
 
  // .... x7
   
  select_main();
  
}

