/*
MIT License

Copyright (c) 2022 m!haly4

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include "neuron.h"

//menu function
void menu()
{
    printf("Choose an option:\n1) Convert your score from a twelve-point scale to a five-point scale\n2) Convert your score from a five-point scale to a twelve-point scale\n3) Info about the creator and license\n0) Stop the program\n");
}

//function for calculating the result
double program_input(double input, struct Neuron *neuron)
{
    return input * neuron->weight;
}

//function for calculating the result by reverse algorithm
double restore_input(double output, struct Neuron *neuron)
{
    return output / neuron->weight;
}

//function for neuron training
void train_neuron(double input, double expected_result, struct Neuron *neuron)
{
    double result = input * neuron->weight;
    neuron->last_error = expected_result - result;

    double corretion = (neuron->last_error / result) * neuron->smoothing;
    neuron->weight += corretion;
}