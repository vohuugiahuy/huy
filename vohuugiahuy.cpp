import java.util.Scanner;
public class Lab_B2 
{
     public static void main(String[] args){
      float a,b,c,x,x1,x2,delta;
      int sd,tien;
        do {            
        System.out.println("+============================+");
        System.out.println("1. Giai phuong trinh bac 1");
        System.out.println("2. Giai phuong trinh bac 2");
        System.out.println("3. Tinh tien dien");
        System.out.println("4. Ket thuc");
        System.out.println("+============================+");
         
        System.out.print(" Chon chuc nang: ");
        Scanner n = new Scanner(System.in);
        int nhapchucnang = n.nextInt();
        Scanner nhap= new Scanner(System.in);
        
        switch (nhapchucnang) {
            case 1: 
                System.out.print(" Nhap a: ");             
                a = nhap.nextFloat();
                
                System.out.print(" Nhap b: ");              
                b = nhap.nextFloat();
                
                
                if(a==0){
                    if(b==0){
                        System.out.println("Vo so nghiem");
                    }
                    else{
                        System.out.println("Vo nghiem");
                    }
                }
                else{
                    x = (-b)/a;
                    System.out.println("Nghiem phuong trinh: "+ "x"+ "="+ x);
                }                   
                break;
            case 2:
                System.out.print(" Nhap a: ");               
                a = nhap.nextFloat();
                
                System.out.print(" Nhap b: ");               
                b = nhap.nextFloat();
                
                System.out.print(" Nhap c: ");               
                c = nhap.nextFloat();
                
                delta = (float) (Math.pow(b,2) - 4*a*c);
                if(delta < 0){
                    System.out.println("Phuong trinh vo nghiem");
                }else if(delta==0){
                    x = (-b)/(a*2);
                    System.out.println("Phuong trinh co nghiem kep: "+ "x= "+ x);
                }else{
                    x1 = (float) ((-b - Math.sqrt(delta))/(2*a));
                    x2 = (float) ((-b + Math.sqrt(delta))/(2*a));
                    System.out.println("Phuong trinh co 2 nghiem phan biet: ");
                    System.out.println("X1 = "+ x1);
                    System.out.println("X2 = "+ x2);
                }                                
                break;
            case 3:
                System.out.print(" Nhap so dien cua thang nay: ");               
                sd = nhap.nextInt();
                
                if(sd < 50){
