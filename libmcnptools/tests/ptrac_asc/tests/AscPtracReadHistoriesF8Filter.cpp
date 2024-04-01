#include "AscPtracFixture.hpp"

TEST_F(AscPtracFixtureTally8Filter, AscPtracReadHistoriesF8Filter) {
  std::vector<mcnptools::PtracHistory> hists = ptrac_F8_filtered.ReadHistories(100);

  EXPECT_EQ(hists.size(), 80);

  // check first history
  // check NPS line
  EXPECT_EQ(hists.at(0).GetNPS().NPS(), 837);
  EXPECT_EQ(hists.at(0).GetNPS().Tally(), 8);
  EXPECT_FLOAT_EQ(hists.at(0).GetNPS().Value(), 1.0);
  EXPECT_EQ(hists.at(0).GetNumEvents(), 5);
  // check first event
  mcnptools::PtracEvent e = hists.at(0).GetEvent(0);
  EXPECT_EQ(e.Type(), mcnptools::Ptrac::BNK);
  EXPECT_EQ(e.BankType(), mcnptools::Ptrac::BNK_N_XG);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::ZAID), 82208);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::RXN), 0);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::CELL), 22);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::MATERIAL), 4);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::X),  0.33046E+02);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::Y), -0.29926E+02);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::Z), -0.15524E+02);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::U), -0.69715E+00);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::V), -0.59338E+00);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::W),  0.40235E+00);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::ENERGY), 0.42602E+01);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::WEIGHT), 0.13199E-01);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::TIME), 0.13620E+01);
  // check last event
  e = hists.at(0).GetEvent(hists.at(0).GetNumEvents()-1);
  EXPECT_EQ(e.Type(), mcnptools::Ptrac::TER);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::TERMINATION_TYPE), mcnptools::Ptrac::TER_ESCAPE);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::CELL), 999);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::MATERIAL), 0);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::X), -0.21028E+02);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::Y),  0.19660E+03);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::Z), -0.36823E+02);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::U), -0.23123E+00);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::V),  0.96863E+00);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::W), -0.91075E-01);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::ENERGY), 0.42378E+01);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::WEIGHT), 0.13199E-01);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::TIME), 0.21420E+01);


  // check last history
  EXPECT_EQ(hists.at(hists.size()-1).GetNPS().NPS(), 98306);
  EXPECT_EQ(hists.at(hists.size()-1).GetNPS().Tally(), 8);
  EXPECT_FLOAT_EQ(hists.at(hists.size()-1).GetNPS().Value(), 1.0);
  EXPECT_EQ(hists.at(hists.size()-1).GetNumEvents(), 5);
  // check first event
  e = hists.at(hists.size()-1).GetEvent(0);
  EXPECT_EQ(e.Type(), mcnptools::Ptrac::BNK);
  EXPECT_EQ(e.BankType(), mcnptools::Ptrac::BNK_N_XG);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::ZAID), 82208);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::RXN), 0);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::CELL), 22);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::MATERIAL), 4);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::X),  0.35161E+02);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::Y), -0.22356E+02);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::Z), -0.30538E+02);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::U),  0.52006E+00);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::V), -0.11247E+00);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::W), -0.84670E+00);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::ENERGY), 0.55141E+01);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::WEIGHT), 0.45204E-01);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::TIME), 0.15578E+01);
  // check last event
  e = hists.at(hists.size()-1).GetEvent(hists.at(hists.size()-1).GetNumEvents()-1);
  EXPECT_EQ(e.Type(), mcnptools::Ptrac::TER);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::TERMINATION_TYPE), mcnptools::Ptrac::TER_ENERGY_CUTOFF);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::CELL), 22);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::MATERIAL), 4);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::X),  0.34473E+02);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::Y), -0.28967E+02);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::Z), -0.18165E+02);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::U), -0.38792E+00);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::V),  0.25682E+00);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::W),  0.88519E+00);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::ENERGY), 0.20891E+01);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::WEIGHT), 0.13199E-01);
  EXPECT_FLOAT_EQ(e.Get(mcnptools::Ptrac::TIME), 0.14174E+01);
}