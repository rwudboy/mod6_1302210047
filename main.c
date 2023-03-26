#include <stdio.h>
#include <stdlib.h>

namespace tpmodul6_1302210047;
using System;
using System.Diagnostics.Contracts;

class Program
{
    static void Main(String[] args)
    {
        SayaTubeVideo video = new SayaTubeVideo("Tutorial Design by Contract - [ROZAN KURNIA PRATAMA_PRAKTIKAN]");

        for (int i = 0; i < 1000000000; i += 10000000)
        {
            video.IncreasePlayCount(10000000);
        }
        video.PrintVideoDetails();
    }
}
