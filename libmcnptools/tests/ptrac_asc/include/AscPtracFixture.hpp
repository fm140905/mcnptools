#include "gtest/gtest.h"
#include "mcnptools/McnpTools.hpp"

class AscPtracFixture : public ::testing::Test {
public:
  mcnptools::Ptrac ptrac;

  AscPtracFixture() : ptrac("test_ptrac", mcnptools::Ptrac::ASC_PTRAC) {};
};

class AscPtracFixtureNoHeader : public ::testing::Test {
public:
  mcnptools::Ptrac ptrac_prdmp_neg_1;

  AscPtracFixtureNoHeader() : ptrac_prdmp_neg_1("test_ptrac_prdmp_neg_1", mcnptools::Ptrac::ASC_PTRAC) {}
};

class AscPtracFixtureTally8Filter : public ::testing::Test {
public:
  mcnptools::Ptrac ptrac_F8_filtered;

  AscPtracFixtureTally8Filter() : ptrac_F8_filtered("test_ptrac_asc_F8_filter", mcnptools::Ptrac::ASC_PTRAC) {}
};
