using System;
using System.Runtime.InteropServices;
namespace ConsoleApp4
{
    class Program
    {
        [DllImport("C:\\dllForC#\\sumofarray.dll", CallingConvention = CallingConvention.Cdecl)]
        static extern int Sum(int[] x, int n);
        static void Main(string[] args)
        {
            int[] a = { 1, 2, 3, 4, 5 };
            int c = Sum(a,a.Length);
            Console.WriteLine("{0}", c);
        }
    }
}
