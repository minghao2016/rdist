// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// canberra_rdist
NumericVector canberra_rdist(NumericMatrix A);
RcppExport SEXP rdist_canberra_rdist(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(canberra_rdist(A));
    return rcpp_result_gen;
END_RCPP
}
// canberra_pdist
NumericMatrix canberra_pdist(NumericMatrix A);
RcppExport SEXP rdist_canberra_pdist(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(canberra_pdist(A));
    return rcpp_result_gen;
END_RCPP
}
// canberra_cdist
NumericMatrix canberra_cdist(NumericMatrix A, NumericMatrix B);
RcppExport SEXP rdist_canberra_cdist(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(canberra_cdist(A, B));
    return rcpp_result_gen;
END_RCPP
}
// euclidean_rdist
NumericVector euclidean_rdist(NumericMatrix A);
RcppExport SEXP rdist_euclidean_rdist(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(euclidean_rdist(A));
    return rcpp_result_gen;
END_RCPP
}
// euclidean_pdist
NumericMatrix euclidean_pdist(NumericMatrix A);
RcppExport SEXP rdist_euclidean_pdist(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(euclidean_pdist(A));
    return rcpp_result_gen;
END_RCPP
}
// euclidean_cdist
NumericMatrix euclidean_cdist(NumericMatrix A, NumericMatrix B);
RcppExport SEXP rdist_euclidean_cdist(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(euclidean_cdist(A, B));
    return rcpp_result_gen;
END_RCPP
}
// hamming_rdist
NumericVector hamming_rdist(NumericMatrix A);
RcppExport SEXP rdist_hamming_rdist(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(hamming_rdist(A));
    return rcpp_result_gen;
END_RCPP
}
// hamming_pdist
NumericMatrix hamming_pdist(NumericMatrix A);
RcppExport SEXP rdist_hamming_pdist(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(hamming_pdist(A));
    return rcpp_result_gen;
END_RCPP
}
// hamming_cdist
NumericMatrix hamming_cdist(NumericMatrix A, NumericMatrix B);
RcppExport SEXP rdist_hamming_cdist(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(hamming_cdist(A, B));
    return rcpp_result_gen;
END_RCPP
}
// jaccard_rdist
NumericVector jaccard_rdist(NumericMatrix A);
RcppExport SEXP rdist_jaccard_rdist(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(jaccard_rdist(A));
    return rcpp_result_gen;
END_RCPP
}
// jaccard_pdist
NumericMatrix jaccard_pdist(NumericMatrix A);
RcppExport SEXP rdist_jaccard_pdist(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(jaccard_pdist(A));
    return rcpp_result_gen;
END_RCPP
}
// jaccard_cdist
NumericMatrix jaccard_cdist(NumericMatrix A, NumericMatrix B);
RcppExport SEXP rdist_jaccard_cdist(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(jaccard_cdist(A, B));
    return rcpp_result_gen;
END_RCPP
}
// manhattan_rdist
NumericVector manhattan_rdist(NumericMatrix A);
RcppExport SEXP rdist_manhattan_rdist(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(manhattan_rdist(A));
    return rcpp_result_gen;
END_RCPP
}
// manhattan_pdist
NumericMatrix manhattan_pdist(NumericMatrix A);
RcppExport SEXP rdist_manhattan_pdist(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(manhattan_pdist(A));
    return rcpp_result_gen;
END_RCPP
}
// manhattan_cdist
NumericMatrix manhattan_cdist(NumericMatrix A, NumericMatrix B);
RcppExport SEXP rdist_manhattan_cdist(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(manhattan_cdist(A, B));
    return rcpp_result_gen;
END_RCPP
}
// maximum_rdist
NumericVector maximum_rdist(NumericMatrix A);
RcppExport SEXP rdist_maximum_rdist(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(maximum_rdist(A));
    return rcpp_result_gen;
END_RCPP
}
// maximum_pdist
NumericMatrix maximum_pdist(NumericMatrix A);
RcppExport SEXP rdist_maximum_pdist(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(maximum_pdist(A));
    return rcpp_result_gen;
END_RCPP
}
// maximum_cdist
NumericMatrix maximum_cdist(NumericMatrix A, NumericMatrix B);
RcppExport SEXP rdist_maximum_cdist(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(maximum_cdist(A, B));
    return rcpp_result_gen;
END_RCPP
}
// minkowski_rdist
NumericVector minkowski_rdist(NumericMatrix A, double p);
RcppExport SEXP rdist_minkowski_rdist(SEXP ASEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(minkowski_rdist(A, p));
    return rcpp_result_gen;
END_RCPP
}
// minkowski_pdist
NumericMatrix minkowski_pdist(NumericMatrix A, double p);
RcppExport SEXP rdist_minkowski_pdist(SEXP ASEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(minkowski_pdist(A, p));
    return rcpp_result_gen;
END_RCPP
}
// minkowski_cdist
NumericMatrix minkowski_cdist(NumericMatrix A, NumericMatrix B, double p);
RcppExport SEXP rdist_minkowski_cdist(SEXP ASEXP, SEXP BSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type B(BSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(minkowski_cdist(A, B, p));
    return rcpp_result_gen;
END_RCPP
}
