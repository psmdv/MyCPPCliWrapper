// MyCSharpApp/Program.cs
using System;
using System.Collections.Generic;
using MyCppCliWrapper;

class Program
{
    static void Main()
    {
        WrapperClass wrapper = new WrapperClass();

        List<float> input = new List<float> { 1.0f, 2.0f, 3.0f };
        List<float> output = wrapper.ProcessVector(input);

        Console.WriteLine("Output:");
        foreach (float value in output)
        {
            Console.WriteLine(value);
        }
    }
}