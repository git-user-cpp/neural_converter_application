/*
MIT License

Copyright (c) 2022 Andrew Kushyk

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

int main()
{
    /*necessary values ​​for the training of neurons*/
    double highest_score_on_a_twelve_point_system = 12.0;
    double highest_score_on_a_five_point_system = 5.0;

    /*delimiter for menu*/
    char single_delimiter[] = "--------------------------------------------------------------------\n";

    /*setting neuron weight and smoothing*/
    struct Neuron neuron;
    neuron.weight = 0.50;
    neuron.smoothing = 0.01;

    /*the process of training neurons*/
    int i = 0;
    do
    {
        ++i;

        train_neuron(highest_score_on_a_twelve_point_system, highest_score_on_a_five_point_system, &neuron);

#ifdef test
            printf("Iteration: %i,\tError: %.6lf\n", i, neuron.last_error);
#endif

    } while ((neuron.last_error > neuron.smoothing) || (neuron.last_error < -neuron.smoothing));
    
    printf("\nNeuron training is complete\n\n");

    /*outputting the example*/
    printf("An example of converting estimates from one system to another: \n");
    printf("%.1lf = %.1lf\n\n", highest_score_on_a_twelve_point_system, program_input(highest_score_on_a_twelve_point_system, &neuron));

    /*menu*/
    int choise = 1;
    double value;
    int scanning_value = 0;

    while(choise != 0)
    {
        printf("%s", single_delimiter);

        menu();
        printf("Your choise: ");
        scanning_value = scanf("%i", &choise);

        /*checking the correctness of the input*/
        if(scanning_value == 1)
        {
            printf("%s", single_delimiter);

            if(choise == 1)
            {
                printf("%s", single_delimiter);

                printf("Enter a value: ");
                scanning_value = scanf("%lf", &value);

                /*checking the correctness of the input*/
                if(scanning_value == 1)
                {
                    printf("%s", single_delimiter);
                    
                    /*outputting the result*/
                    printf("%.1lf = %.1lf\n", value, program_input(value, &neuron));
                }
                else
                {
                    printf("Error: invalid input");
                }
            }
            else if(choise == 2)
            {
                printf("%s", single_delimiter);

                printf("Enter a value: ");
                scanning_value = scanf("%lf", &value);

                /*checking the correctness of the input*/
                if(scanning_value == 1)
                {
                    printf("%s", single_delimiter);

                    /*outputting the result*/
                    printf("%.1lf = %.1lf\n", value, restore_input(value, &neuron));
                }
                else
                {
                    printf("Error: invalid input");
                }
            }
            else if(choise == 3)
            {
                printf("---> Creator of this program: git-user-cpp (m!haly4) <---\n"
                "     ---> Link: https://github.com/git-user-cpp <---\n"
                "---> License: https://github.com/git-user-cpp/neural_converter_application/blob/main/LICENSE <---\n");
            }
        }
        else
        {
            printf("Error: invalid input");
        }
    }

    printf("The program is stopped\n");

    return 0;
}
