#include <stdio.h>
#include <stdlib.h>
#include "perceptron.h"

int main(int argc, char *argv[])
{
    char *fname = argv[1];
    

    // Building
    Data data = new_Data(fname);

    Model model = new_Model();
    initialize_model(model);

    // Training
    fit_model(model, xcoords, ycoords, targets, number_of_examples);

    // Testing
    evaluate_model(model, data);

    // Scoring
    run_scoring_engine(model);

    free(data);

    return 0;
}
