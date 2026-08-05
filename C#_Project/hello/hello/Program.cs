using System;

namespace hello
{
    internal class Program
    {
        //static void greet(string name)
        // {
        //    Console.WriteLine($"You must be {name}, it's a pleasure meeting you here!");
        // }

        // static int average(int a, int b, int c)
        // {
        //    int sum = (a + b + c);
        //    return sum / 3;


        // }

        static void Main(string[] args)
        {
            /* string hi = Console.ReadLine();
             Console.WriteLine(hi); */

            /* int a = 34;
             float b = 34.4F;
             double c = 44.3;
             bool d = false;

             // Type casting
             // 1.implicit type casting

             int x = (int)3.44;
             double y = x;
             string f = "34 is amazing";
              float v = Convert.ToInt32(5.44);
             Console.WriteLine(f);
             Console.WriteLine(x);
             Console.WriteLine(y);

             Console.WriteLine(a);
             Console.WriteLine(b);
             Console.WriteLine(a + b);
             Console.WriteLine(c);
             Console.WriteLine(d); */

            // Console.WriteLine("Enter your name!");
            // string name = Console.ReadLine();
            // Console.WriteLine("Hello " + name);

            // Console.WriteLine("how many more candies do you want?");
            // string can = Console.ReadLine();
            // Console.WriteLine("Here are extra 4 candies: " + (Convert.ToInt16(can) + 4));

            // int a = Math.Max(34, 345);
            // Console.WriteLine(a);

            // string h = Console.ReadLine();
            // string i = Console.ReadLine();
            // Console.WriteLine(h.Length);
            // Console.WriteLine(h.ToUpper());
            // Console.WriteLine(i.Length);
            // Console.WriteLine(i.ToLower());
            // Console.WriteLine($"your name is {h}. Ah! i see so, you are {i}");

            // Console.WriteLine("Enter your age!");
            // string age = Console.ReadLine();
            // int a = Convert.ToInt32(age);
            // bool isban = false;
            // if (a < 18 && a<=0)
            // {
            //    Console.WriteLine("Your are underaged!");
            // }
            // else if(a>18 || isban)
            // {
            //    Console.WriteLine("Voting for CR in class");
            // }
            // else
            // {
            //     Console.WriteLine("Welcome, Dear voter");
            // }

            // Console.WriteLine("Enter your age!");
            // string age = Console.ReadLine();
            // int a = Convert.ToInt32(age);
            // if (a >= 16) {
            //    switch (a)
            //    {
            //        case 16:
            //            Console.WriteLine("Please!, come after you're 18 or higher");
            //            break;

            //        case 20:
            //            Console.WriteLine("Sufficient age for s*x");
            //            break;
            //        default:
            //            Console.WriteLine("HAGS NOT ALOUD!!!!");
            //            break;

            //    }

            // }

            // for(int i = 0; i < 5; i++)
            // {
            //    Console.WriteLine(i);

            // }
            // int y = 0;
            // Console.WriteLine("While loop ");
            // while(y < 8)
            // {
            //    Console.WriteLine(y);
            //    y++;
            // }
            // int z = 0;
            // Console.WriteLine(" do While loop ");
            // while (z < 9)
            // {
            //    Console.WriteLine(z);
            //    z++;
            // }
            // greet("Dhruv");
            // Console.WriteLine(average(4, 6, 8));
            Player a = new Player();
            Console.WriteLine(a.health);
        }
    }
}
