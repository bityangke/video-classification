#include "evaluation.hpp"

namespace ic {

    Evaluation::Evaluation(int nrClasses) {
        _nrClasses = nrClasses;
    }

    int Evaluation::nrClasses() {
        return _nrClasses;
    }

    void Evaluation::prediction(int pred, int actual) {
        if (pred == actual)
            _correct += 1;
        _nr += 1;
    }

    float Evaluation::accuracy() {
        return static_cast<float>(_correct) / _nr;
    }

    int Evaluation::nr() {
        return _nr;
    }

    int Evaluation::correct() {
        return _correct;
    }

}

