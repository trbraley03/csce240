/**
 * COPYRIGHT 2024 Trent Braley UofSC
 */

#include "truefalsequestion.h"
#include <iostream>

namespace csce240_program5 {

TrueFalseQuestion::TrueFalseQuestion(std::string q, bool a)
    : Question(q), answer_(a) {}

bool TrueFalseQuestion::GetAnswer() const {
  return answer_;
}

void TrueFalseQuestion::SetAnswer(bool a) {
  answer_ = a;
}

void TrueFalseQuestion::Print(bool show_answer) const {
  Question::Print();
  if (show_answer) {
    std::cout << "Correct Answer: " << (answer_ ? "true" : "false")
              << std::endl;
  }
}

}  // namespace csce240_program5
