#ifndef MATH_PROBLEMS_H
#define MATH_PROBLEMS_H

#include <vector>
#include <string>

using sexy_primes_pairs = std::vector<std::pair<unsigned int, unsigned int>>;
using amicable_numbers_pairs = std::vector<std::pair<unsigned int, unsigned int>>;

unsigned int sum_multiples(int num);
unsigned int sum_multiples_alt(int num);
int greatest_common_denominator(int a, int b);
unsigned int least_common_multiple(int a, int b);
std::vector<unsigned int> generate_primes(unsigned int num);
unsigned int find_largest_prime(unsigned int num);
sexy_primes_pairs calculate_sexy_primes_pairs(unsigned int num);
unsigned int sum_of_factors(unsigned int num);
std::vector<unsigned int> calculate_abundant_numbers(unsigned int num);
amicable_numbers_pairs calculate_amicable_numbers(unsigned int num);
std::vector<unsigned int> calculate_three_digit_amrstrong_numbers();
std::vector<unsigned int> generate_prime_factorization(unsigned int num);
std::vector<unsigned int> generate_binary_numbers(unsigned int num);
std::vector<unsigned int> convert_bin_to_gray(std::vector<unsigned int>& bin_nums);
std::vector<unsigned int> convert_gray_to_bin(std::vector<unsigned int>& gray_nums);
std::string convert_dec_to_roman_numeral(int dec);
unsigned int collatz_stopping_length(unsigned int num);
unsigned int num_max_collatz_stopping_length(unsigned int num);
double calculate_pi_to_n_decimals(unsigned int n);
bool validate_ISBN_10(std::string_view isbn);

#endif // !MATH_PROBLEMS_H