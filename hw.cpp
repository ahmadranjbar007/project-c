//مستطیل
// #include <iostream>
// using namespace std;

// int main() {
//   // Declare variables.
//   int length, width, perimeter, area;

//   // Prompt the user to enter the length and width of the rectangle.
//   cout << "Enter the length of the rectangle: " << endl;
//   cin >> length;

//   cout << "Enter the width of the rectangle: " << endl;
//   cin >> width;

//   // Calculate the perimeter and area of the rectangle.
//   perimeter = 2 * (length + width);
//   area = length * width;

//   // Display the perimeter and area of the rectangle.
//   cout << "The perimeter of the rectangle is " << perimeter << endl;
//   cout << "The area of the rectangle is " << area << endl;

//   return 0;
// }

//دایره
// #include <iostream>
// #include <conio.h>
// using namespace std;
// int main()
// {10
//     double r, s, p;
//     cout << "Shoa Dayereh:";
//     cin >> r;
//     s = 3.14 * r * r;
//     p = 2 * 3.14 * r;
//     cout << s << endl
//          << p << endl;
//     getch();
//     return 0;
// }
// مثلث
// #include <iostream>4

// using namespace std;

// int main() {
//   // Declare variables.
//   int base, height, perimeter, area;

//   // Prompt the user to enter the base and height of the triangle.
//   cout << "Enter the base of the triangle: " << endl;
//   cin >> base;

//   cout << "Enter the height of the triangle: " << endl;
//   cin >> height;

//   // Calculate the perimeter and area of the triangle.
//   perimeter = base + 2 * height;
//   area = (base * height) / 2;

//   // Display the perimeter and area of the triangle.
//   cout << "The perimeter of the triangle is " << perimeter << endl;
//   cout << "The area of the triangle is " << area << endl;

//   return 0;
// }




  // جذر 

// #include<iostream>
// #include<conio.h>
// #include<math.h>
// using namespace std;

// main()
// {
// float n;
// cout<<"please enter a number:";
// cin>>n;
// cout<<"\n"<<"square of "<<n<<"="<<sqrt(n);
// cout<<"\n\n"<<"press any key to exit...";
// getch();
// return 0;
// }

// قدرمطلق


// 3عدد

// #include <iostream>

// using namespace std;

// int main() {
//   // Declare variables.
//   int number1, number2, number3, largest_number;

//   // Prompt the user to enter three numbers.
//   cout << "Enter three numbers: " << endl;
//   cin >> number1 >> number2 >> number3;

//   // Initialize the largest number to the first number.
//   largest_number = number1;

//   // Compare the first number to the second number.
//   if (number1 > number2) {
//     largest_number = number1;
//   } else {
//     largest_number = number2;
//   }

//   // Compare the largest number to the third number.
//   if (largest_number < number3) {
//     largest_number = number3;
//   }

//   // Declare the largest number.
//   cout << "The largest number is " << largest_number << endl;

//   return 0;
// }


// // مقلوب عدد 3
// #include <iostream> 
// using namespace std;

// int main()
// {
//     int n, reverse = 0;
//     cout << "Enter a three-digit number: ";
//     cin >> n;

//     // check if the number is valid
//     if (n < 100 || n > 999)
//     {
//         cout << "Invalid input" << endl;
//         return 0;
//     }

//     // extract the digits and add them to the reverse
//     reverse += (n % 10) * 100; // add the last digit as the first digit of the reverse
//     n /= 10; // remove the last digit of n
//     reverse += (n % 10) * 10; // add the last digit of n as the second digit of the reverse
//     n /= 10; // remove the last digit of n
//     reverse += n; // add the remaining digit of n as the third digit of the reverse

//     cout << "The reverse of the number is " << reverse << endl;

//     return 0;
// }

// برنامه ای بنویسید با ++c ک یک عدد سه رقمی را دریافت کند و بگوید آیا این عدد با مقلوب آن برابر است یا خیر ؟

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, reverse = 0;
//     cout << "Enter a three-digit number: ";
//     cin >> n;

//     // check if the number is valid
//     if (n < 100 || n > 999)
//     {
//         cout << "Invalid input" << endl;
//         return 0;
//     }

//     // store the original number in a temporary variable
//     int temp = n;

//     // extract the digits and add them to the reverse
//     reverse += (n % 10) * 100; // add the last digit as the first digit of the reverse
//     n /= 10; // remove the last digit of n
//     reverse += (n % 10) * 10; // add the last digit of n as the second digit of the reverse
//     n /= 10; // remove the last digit of n
//     reverse += n; // add the remaining digit of n as the third digit of the reverse

//     // compare the original number and the reverse
//     if (temp == reverse)
//     {
//         cout << "The number is equal to its reverse" << endl;
//     }
//     else
//     {
//         cout << "The number is not equal to its reverse" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {

//   int m ;

//   m = 13;

//   // m ++;

//   // m += 3;

//   m %12;

//   cout << m ;

//   return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {

//   int x,y;

//   x=7; y=9;

//   y=!(x<=5) || (y>=x) ;

//   cout <<x,y;

//   return 0;
// }


//x^y
// #include <iostream>
// #include <math.h>
// using namespace std;

// int main(){
//   double x,n;
//   double y =1;
//   double i=2;
//   cout << "enter x and n:" ;
//   cin >> x >> n;
//   while (i<=n)
//   {
//     y += pow(x,i) / (i*x);
//     i++;
//   }
//   cout << "y = " << y << endl ;
//   return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//   int n = 9;
//   int i = 1;
//   while (i <= n)
//   {
//     int j = 1;
    
//   while (j <= i){
//     cout << i << " " ;
//     j++;
//   }
//   cout << endl;
//   i++;
//   }
//   return 0 ;
// }


// #include <iostream>
//  using namespace std;

// int main(){
//   int n = 8;
//   int i = 1;
//   while ( i <= n ){
//     int j = n-i;
//     while (j > 0){
//       cout << "  ";
//       j--;
//     }
//     int k = 1;
//     while (k <= i){
//       cout << "* ";
//       k++;
//     }
//     cout << endl;
//     i++;
//   }
//   return 0;
// }


// #include <iostream>
// #include <cmath>
// #include <SFML/Graphics.hpp>


// using namespace std;

// int main() {
//     // Create the window
//     sf::RenderWindow window(sf::VideoMode(800, 600), "Graphical Calculator");

//     // Set thickness of lines
//     sf::Vertex line[2];
//     line[0].color = sf::Color::Red;
//     line[1].color = sf::Color::Red;
//     float thickness = 3.f;

//     // Define function to plot
//     string function = "sin(x)";

//     // Calculate range of x and y values to plot
//     float xMin = -10.f;
//     float xMax = 10.f;
//     float xStep = 0.1f;
    
//     float yMin;
//     float yMax;
//     if (function == "sin(x)") {
//         yMin = -1.f;
//         yMax = 1.f; 
//     } else if (function == "cos(x)") {
//         // Calculate yMin and yMax for cos(x)
//     }

//     // Main loop
//     while (window.isOpen()) {
//         // Check all the window's events that were triggered since the last iteration of the loop
//         sf::Event event;
//         while (window.pollEvent(event)) {
//             // Close window: exit
//             if (event.type == sf::Event::Closed) 
//                 window.close(); 
//         }

//         // Clear screen
//         window.clear();

//         // Calculate points and plot function 
//         for (float x = xMin; x <= xMax; x += xStep) {
//             float y = sin(x);
//             line[0].position = sf::Vector2f(x*50, -y*50+300);
//             line[1].position = sf::Vector2f((x+xStep)*50, -(sin(x+xStep))*50+300);
//             window.draw(line, 2, sf::Lines);
//         }

//         // Draw axis
//         sf::Vertex axis[] = {
//             sf::Vertex(sf::Vector2f(0, 300)),
//             sf::Vertex(sf::Vector2f(800, 300))
//         };
//         window.draw(axis, 2, sf::Lines);

//         window.display(); 
//     }
// }




  //bray mabani nis in proje

// #include <iostream>
//  #include <cmath>
//   #include <time.h>
//    using namespace std;
//    int main() { 
//      int Length = 120; 
//       int Height = 28;
//       cout << "\noat's graphing calculator tm!\nEnter graph length (120): ";
//       cin >> Length;  cout << "Enter graph height (28): ";
//      cin >> Height; 
//      cout << "Ok! Hold on...\n";  
//      float *vals = new float[Length]; 
//     float *vals2 = new float[Length]; 
//     // calculating 
//      clock_t calcStart = clock(); 
//      for (int i = 1; i < Length; i++) {   float y;   float y2;  
//     float x = float(i)/Length;   y = 0.3/x; 
//    //enter formula(s) here!  
//     y2 = sqrt(x);   vals[i] = y;   vals2[i] = y2;  } 
//     cout << "Calculating took " << clock() -calcStart << "ms\n\n";
//    // rendering (?) 
//      clock_t renderStart = clock();  for (int y = Height-1; y > -1; y--) {   cout << '|'; 
//    for (int x = 1; x < Length; x++) {    bool firstRender = floor(vals[x]*Height) == float(y);  
//      bool secondRender = floor(vals2[x]*Height) == float(y); 
//     if(firstRender || secondRender) {     if (firstRender && secondRender) 
//    {      cout << '$';    
//     } else {      cout << '#';     }   
//      } else 
//     {     if (y == 0) 
//     {      cout << '-';   
//     } else {      cout << ' ';      } 
//      } 
//      }  
//       cout << '\n';  }
//       cout << "Rendering took " << clock()-renderStart << "ms"; 
                            
//      return 0; }







// asadi







// #include <iostream>
// using namespace std;
// int main()
// {
//  int n = 0 , sum = 0 ;

//  while (n >= 0 )
//   {
//   cin>> n;
//   if(n<0)
//   break;
//   sum = sum+n;
//   }
//   cout<< sum;
//   return 0;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//  int n = 0 , sum = 0 ;

//  while (n >= 0 )
//   {
//     sum+=n;
//    cin>> n;
//   }
//   cout<< sum;
// //   return 0;
// // }

//  #include <iostream>
// using namespace std;
// int main()
// {
//  int i , k , t=1 ;
// k=7;
// while (2>1)
// {
//   t=1;
//   for (i=1;i<k;i++)
//   t*=i;
//   cout<<t*k;
//   if (t<120)
//   break;
//   k--;
// }
//   return 0;
// }

// را چاپ کند nf را چاپ  کند در غیر اینصورت  f اول بود در خروجی n را از ورودی گرفته اگر  n برنامه ای بنویسیدکه عدد صحیح

//  #include <iostream>
// using namespace std;
// int main()
// {
//   int n , i , counter ;
//   cin>> n;
//   counter = 0 ;
//   for ( i = 2; i < n/2 ; i++)
//     if(n % i==0)
//     {
//       counter ++;
//       break;
//     }
//   if(counter)
//     cout<< "nf";
//     else
//       cout<< "f";
  
//   return 0;
// }


// agar adad zooje bod "even" , v agar fard bod "odd" 
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin>> n ;
//   if (n % 2== 0)
//     cout<< "even";
//     else
//       cout<<"odd";
//   return 0;
// }


// a,b , adad zoje beyn anha

// #include <iostream>
// using namespace std;
// int main()
// {
//   int a,b,temp,first,j;
//   cin>>a>>b;
//   if(a>b)
//   {
//     temp = a;
//     a = b;
//     b = temp;
//   }
//   if(a % 2 == 0 )
//     first = a + 2;
//   else 
//     first = a + 1;
//   for (j = first; j < b;j += 2)
//     cout<< j;
//   return 0;
// }


// 100 adad , max 

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n, max, i;
//   cin>> n;
//   max = n;
//   for ( i = 1; i < 3; i++)
//   {
//     cin>> n ;
//     if(n > max)
//       max = n;
//   }
//   cout<< max;

//   return 0;
// }


// a,b , adad aval beyn anha

// #include <iostream>
// using namespace std;
// int main()
// {
//   int a, b, counter, n, j, temp;

//   cin>>a>>b;
//   if(a > b)
//     {
//       temp = a;
//       a = b;
//       b = temp;
//     }
//   for(n = a+1; n < b; n++)
//   {
//     counter = 0;
//       for ( j = 2; j < n/2; j++)
//         if(n % j==0)
//         {
//           counter++;
//           break;
//         }
//     if(counter==0)
//       cout<< n;
//   }
//   return 0;
// }


// 1 adad , hasel jame tamami adad beyn 0 ta an adad

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n, sum, s, i;
//   cin>> n;
//   sum=0 ; s=0;
//   if (n < 0)
//   {
//     s = 1;
//     n =-n;
//   }
//   for(i=0 ; i<=n ; i++)
//     sum +=i;
//   if(s)
//     cout<< -sum;
//   else
//     cout<<sum;
  
//   return 0;
// }


// adad n , ba halghe while  "n!"  ra mohasebe konid   "fact"

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n, fact=1;
//   cin>> n;
//   while( n>1)
//   {
//     fact = fact*n;
//     n--;
//   }
//   cout<<fact;

//   return 0;
// }  


// karbar adadi ra gerfte v adad " - " vared kard az halghe kharej v , " hasel jame adad + "
// **********
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n=0, sum=0;
//   while (n>=0)
//   {
//     cin>>n;
//     sum= sum+n;
//   }
//   cout<<sum;

//   return 0;
// }


// araye ba 100 vorodi, "max ??"

// #include <iostream>
// using namespace std;
// int main()
// {
//   int A[100], i, max;
//   for ( i = 0; i < 100; i++)
//     cin>> A[i];
//   max = A[0];
//   for ( i = 1; i < 100; i++)
//     if (A[i] > max)
//       max =A[i];
      
//   cout<<max;

//   return 0;
// }


// adad 'kamel' beyn a , b 

// #include <iostream>
// using namespace std;
// int main()
// {
//   int a,b,i,temp,sum,n;

//   cin>>a>>b;
//   if (a>b)
//   {
//     temp=a;
//     a=b;
//     b=temp;
//   }
//   for(n=1; n<b; n++)
//   {
//     sum=0;
//     for(i=1; i<=n; i++)
//       if(n%i==0)
//         sum+=i;
//     if(sum==2*n)
//       cout<<n;
//   }

//   return 0;
// }


// adadi sahih , if aval bod 'True' ! 'False'

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n,i,sum=0;
//   cin>>n;
//   for(i=1; i<=n; i++)
//     if(n%i == 0)
//       sum+=i;

//   if(sum==2*n)
//     cout<<"True";
//   else
//     cout<<"False";

//   return 0;
// }