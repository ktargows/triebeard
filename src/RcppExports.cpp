// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// radix_create_str
SEXP radix_create_str(std::vector < std::string > keys, std::vector < std::string > values);
RcppExport SEXP triebeard_radix_create_str(SEXP keysSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type keys(keysSEXP);
    Rcpp::traits::input_parameter< std::vector < std::string > >::type values(valuesSEXP);
    __result = Rcpp::wrap(radix_create_str(keys, values));
    return __result;
END_RCPP
}
// radix_create_int
SEXP radix_create_int(std::vector < std::string > keys, std::vector < int > values);
RcppExport SEXP triebeard_radix_create_int(SEXP keysSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type keys(keysSEXP);
    Rcpp::traits::input_parameter< std::vector < int > >::type values(valuesSEXP);
    __result = Rcpp::wrap(radix_create_int(keys, values));
    return __result;
END_RCPP
}
// radix_create_double
SEXP radix_create_double(std::vector < std::string > keys, std::vector < double > values);
RcppExport SEXP triebeard_radix_create_double(SEXP keysSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type keys(keysSEXP);
    Rcpp::traits::input_parameter< std::vector < double > >::type values(valuesSEXP);
    __result = Rcpp::wrap(radix_create_double(keys, values));
    return __result;
END_RCPP
}
// radix_create_bool
SEXP radix_create_bool(std::vector < std::string > keys, std::vector < bool > values);
RcppExport SEXP triebeard_radix_create_bool(SEXP keysSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type keys(keysSEXP);
    Rcpp::traits::input_parameter< std::vector < bool > >::type values(valuesSEXP);
    __result = Rcpp::wrap(radix_create_bool(keys, values));
    return __result;
END_RCPP
}
// get_keys_str
std::vector < std::string > get_keys_str(SEXP radix);
RcppExport SEXP triebeard_get_keys_str(SEXP radixSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type radix(radixSEXP);
    __result = Rcpp::wrap(get_keys_str(radix));
    return __result;
END_RCPP
}
// get_keys_int
std::vector < std::string > get_keys_int(SEXP radix);
RcppExport SEXP triebeard_get_keys_int(SEXP radixSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type radix(radixSEXP);
    __result = Rcpp::wrap(get_keys_int(radix));
    return __result;
END_RCPP
}
// get_keys_bool
std::vector < std::string > get_keys_bool(SEXP radix);
RcppExport SEXP triebeard_get_keys_bool(SEXP radixSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type radix(radixSEXP);
    __result = Rcpp::wrap(get_keys_bool(radix));
    return __result;
END_RCPP
}
// get_keys_double
std::vector < std::string > get_keys_double(SEXP radix);
RcppExport SEXP triebeard_get_keys_double(SEXP radixSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type radix(radixSEXP);
    __result = Rcpp::wrap(get_keys_double(radix));
    return __result;
END_RCPP
}
// get_values_str
std::vector < std::string > get_values_str(SEXP radix);
RcppExport SEXP triebeard_get_values_str(SEXP radixSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type radix(radixSEXP);
    __result = Rcpp::wrap(get_values_str(radix));
    return __result;
END_RCPP
}
// get_values_int
std::vector < int > get_values_int(SEXP radix);
RcppExport SEXP triebeard_get_values_int(SEXP radixSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type radix(radixSEXP);
    __result = Rcpp::wrap(get_values_int(radix));
    return __result;
END_RCPP
}
// get_values_bool
std::vector < bool > get_values_bool(SEXP radix);
RcppExport SEXP triebeard_get_values_bool(SEXP radixSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type radix(radixSEXP);
    __result = Rcpp::wrap(get_values_bool(radix));
    return __result;
END_RCPP
}
// get_values_double
std::vector < double > get_values_double(SEXP radix);
RcppExport SEXP triebeard_get_values_double(SEXP radixSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type radix(radixSEXP);
    __result = Rcpp::wrap(get_values_double(radix));
    return __result;
END_RCPP
}
// radix_len_str
int radix_len_str(SEXP radix);
RcppExport SEXP triebeard_radix_len_str(SEXP radixSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type radix(radixSEXP);
    __result = Rcpp::wrap(radix_len_str(radix));
    return __result;
END_RCPP
}
// radix_len_int
int radix_len_int(SEXP radix);
RcppExport SEXP triebeard_radix_len_int(SEXP radixSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type radix(radixSEXP);
    __result = Rcpp::wrap(radix_len_int(radix));
    return __result;
END_RCPP
}
// radix_len_bool
int radix_len_bool(SEXP radix);
RcppExport SEXP triebeard_radix_len_bool(SEXP radixSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type radix(radixSEXP);
    __result = Rcpp::wrap(radix_len_bool(radix));
    return __result;
END_RCPP
}
// radix_len_double
int radix_len_double(SEXP radix);
RcppExport SEXP triebeard_radix_len_double(SEXP radixSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type radix(radixSEXP);
    __result = Rcpp::wrap(radix_len_double(radix));
    return __result;
END_RCPP
}
// longest_str
CharacterVector longest_str(SEXP radix, CharacterVector to_match);
RcppExport SEXP triebeard_longest_str(SEXP radixSEXP, SEXP to_matchSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type radix(radixSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type to_match(to_matchSEXP);
    __result = Rcpp::wrap(longest_str(radix, to_match));
    return __result;
END_RCPP
}
// longest_bool
LogicalVector longest_bool(SEXP radix, CharacterVector to_match);
RcppExport SEXP triebeard_longest_bool(SEXP radixSEXP, SEXP to_matchSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type radix(radixSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type to_match(to_matchSEXP);
    __result = Rcpp::wrap(longest_bool(radix, to_match));
    return __result;
END_RCPP
}
// longest_int
IntegerVector longest_int(SEXP radix, CharacterVector to_match);
RcppExport SEXP triebeard_longest_int(SEXP radixSEXP, SEXP to_matchSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type radix(radixSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type to_match(to_matchSEXP);
    __result = Rcpp::wrap(longest_int(radix, to_match));
    return __result;
END_RCPP
}
// longest_double
NumericVector longest_double(SEXP radix, CharacterVector to_match);
RcppExport SEXP triebeard_longest_double(SEXP radixSEXP, SEXP to_matchSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type radix(radixSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type to_match(to_matchSEXP);
    __result = Rcpp::wrap(longest_double(radix, to_match));
    return __result;
END_RCPP
}
