// Kristy Li
// Critical Section Problem: Stimulate classical synchronization // by using binary and counting semaphores.

#include <iostream>
#include <stdlib.h>
#include <time.h>
//#include <random>

using namespace std;

int readerSemaphore = 2;
int writerSemaphore = 1;

int readerCounter = 0;
int writerCounter = 0;

int r1counter = 0;
int r2counter = 0;
int r3counter = 0;
int w1counter = 0;
int w2counter = 0;

void readerwait()
{
    if (readerSemaphore <= 0 || writerSemaphore != 1);
    else
    {
        readerSemaphore--;
        readerCounter++;
    }
}

void readersignal()
{
    readerSemaphore++;
    readerCounter--;
}

void writerwait()
{
    if (readerSemaphore <= 1 || writerSemaphore != 1);
    else
    {
        writerSemaphore--;
        writerCounter++;
    }
}

void writersignal()
{
    writerSemaphore++;
    writerCounter--;
}

int i = 0;

void panic()
{
    cout << "Panic." << endl;
}

void R1()
{
    switch(r1counter)
    {
    case 0:
        r1counter++;
        break;
    case 1:
        r1counter++;
        break;
    case 2:
        r1counter++;
        break;
    case 3:
        r1counter++;
        break;
    case 4:
        r1counter++;
        break;
    case 5:
        r1counter++;
        break;
    case 6:
        r1counter++;
        break;
    case 7:
        r1counter++;
        break;
    case 8:
        r1counter++;
        break;
    case 9:
        r1counter++;
        break;
    case 10:
        r1counter++;
        break;
    case 11:
        if(readerSemaphore == 0 || writerSemaphore == 0);
        else
        {
            readerwait();
            r1counter++;
        }
        if (readerSemaphore > 2 || writerSemaphore > 1)
            panic();
        break;
    case 12:
        cout << "I'm r1. I'm in CS. There are " << readerCounter << "readers and " << writerCounter << " writers in CS" << endl;
        r1counter++;
        break;
    case 13:
        i = 0;
        r1counter++;
        break;
    case 14:
        if(i < 100)
            r1counter++;
        else
            r1counter = 16;
        break;
    case 15:
        i++;
        r1counter--;
        break;
    case 16:
        readersignal();
        r1counter++;
        break;
    case 17:
        cout << "I'm r1. I'm out of the CS. " << readerCounter << " readers and " << writerCounter << " writers in CS" << endl;
        r1counter = 0;
        break;
    }
}

void R2()
{
    switch(r2counter)
    {
    case 0:
        r2counter++;
        break;
    case 1:
        r2counter++;
        break;
    case 2:
        r2counter++;
        break;
    case 3:
        r2counter++;
        break;
    case 4:
        r2counter++;
        break;
    case 5:
        r2counter++;
        break;
    case 6:
        r2counter++;
        break;
    case 7:
        r2counter++;
        break;
    case 8:
        r2counter++;
        break;
    case 9:
        r2counter++;
        break;
    case 10:
        r2counter++;
        break;
    case 11:
        if (readerSemaphore == 0 || writerSemaphore == 0);
        else
        {
            readerwait();
            r2counter++;
        }
        if (readerSemaphore > 2 || writerSemaphore > 1)
            panic();
        break;
    case 12:
        cout << "I'm r2. I'm in CS. There are " << readerCounter << " readers and " << writerCounter << " writers in CS" << endl;
        r2counter++;
        break;
    case 13:
        i = 0;
        r2counter++;
        break;
    case 14:
        if(i < 100)
            r2counter++;
        else
            r2counter = 16;
        break;
    case 15:
        i++;
        r2counter--;
        break;
    case 16:
        readersignal();
        r2counter++;
        break;
    case 17:
        cout << "I'm r2. I'm out of the CS. " << readerCounter << " readers and " << writerCounter << " writers in CS" << endl;
        r2counter= 0;
        break;
    }
}

void R3()
{
    switch(r3counter)
    {
    case 0:
        r3counter++;
        break;
    case 1:
        r3counter++;
        break;
    case 2:
        r3counter++;
        break;
    case 3:
        r3counter++;
        break;
    case 4:
        r3counter++;
        break;
    case 5:
        r3counter++;
        break;
    case 6:
        r3counter++;
        break;
    case 7:
        r3counter++;
        break;
    case 8:
        r3counter++;
        break;
    case 9:
        r3counter++;
        break;
    case 10:
        r3counter++;
        break;
    case 11:
        if (readerSemaphore == 0 || writerSemaphore == 0);
        else
        {
            readerwait();
            r3counter++;
        }
        if (readerSemaphore > 2 || writerSemaphore > 1)
            panic();
        break;
    case 12:
        cout << "I'm r3. I'm in CS. There are " << readerCounter << " readers and " << writerCounter << " writers in CS" << endl;
        r3counter++;
        break;
    case 13:
        i = 0;
        r3counter++;
        break;
    case 14:
        if(i < 100)
            r3counter++;
        else
            r3counter = 16;
        break;
    case 15:
        i++;
        r3counter--;
        break;
    case 16:
        readersignal();
        r3counter++;
        break;
    case 17:
        cout << "I'm r3. I'm out of the CS. " << readerCounter << " readers and " << writerCounter << " writers in CS" << endl;
        r3counter= 0;
        break;
    }
}

void W1()
{
    switch(w1counter)
    {
    case 0:
        w1counter++;
        break;
    case 1:
        w1counter++;
        break;
    case 2:
        w1counter++;
        break;
    case 3:
        w1counter++;
        break;
    case 4:
        w1counter++;
        break;
    case 5:
        w1counter++;
        break;
    case 6:
        w1counter++;
        break;
    case 7:
        w1counter++;
        break;
    case 8:
        w1counter++;
        break;
    case 9:
        w1counter++;
        break;
    case 10:
        w1counter++;
        break;
    case 11:
        if (readerSemaphore <= 1 || writerSemaphore == 0);
        else
        {
            writerwait();
            w1counter++;
        }
        if (readerSemaphore > 2 || writerSemaphore > 1)
            panic();
        break;
    case 12:
        cout << "I'm w1. I'm in CS. There are " << readerCounter << " readers and " << writerCounter << " writers in CS" << endl;
        w1counter++;
        break;
    case 13:
        i = 0;
        w1counter++;
        break;
    case 14:
        if(i < 100)
            w1counter++;
        else
            w1counter = 16;
        break;
    case 15:
        i++;
        w1counter--;
        break;
    case 16:
        writersignal();
        w1counter++;
        break;
    case 17:
        cout << "I'm w1. I'm out of the CS. " << readerCounter << " readers and " << writerCounter << " writers in CS" << endl;
        w1counter= 0;
        break;
    }
}

void W2()

{
    switch(w2counter)
    {
    case 0:
        w2counter++;
        break;
    case 1:
        w2counter++;
        break;
    case 2:
        w2counter++;
        break;
    case 3:
        w2counter++;
        break;
    case 4:
        w2counter++;
        break;
    case 5:
        w2counter++;
        break;
    case 6:
        w2counter++;
        break;
    case 7:
        w2counter++;
        break;
    case 8:
        w2counter++;
        break;
    case 9:
        w2counter++;
        break;
    case 10:
        w2counter++;
        break;
    case 11:
        if (readerSemaphore <= 1 || writerSemaphore == 0);
        else
        {
            writerwait();
            w2counter++;
        }
        if (readerSemaphore > 2 || writerSemaphore > 1)
            panic();
        break;
    case 12:
        cout << "I'm w2. I'm in CS. There are " << readerCounter << " readers and " << writerCounter << " writers in CS" << endl;
        w2counter++;
        break;
    case 13:
        i = 0;
        w2counter++;
        break;
    case 14:
        if(i < 100)
            w2counter++;
        else
            w2counter = 16;
        break;
    case 15:
        i++;
        w2counter--;
        break;
    case 16:
        writersignal();
        w2counter++;
        break;
    case 17:
        cout << "I'm w2. I'm out of the CS. " << readerCounter << " readers and " << writerCounter << " writers in CS" << endl;
        w2counter = 0;
        break;
    }
}

int main()
{
    /*
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> distribution(0, 4); */
    srand(time(0));
    for(int i = 0; i <= 50000; i++)
    {
        // int coin = distribution(mt);
        int coin = rand() % 4 + 1;
        switch(coin)
        {
        case 0:
            R1();
            break;
        case 1:
            R2();
            break;
        case 2:
            R3();
            break;
        case 3:
            W1();
            break;
        case 4:
            W2();
            break;
        default:
            cout << "Error." << endl;
            break;
        }
    }

    system("pause");
    return 0;
}
