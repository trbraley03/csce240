/**
 * COPYRIGHT 2024 Trent Braley UofSC
 */

#include "shortanswerquestion.h"
#include <iostream>

namespace csce240_program5 {

ShortAnswerQuestion::ShortAnswerQuestion(std::string q, std::string a)
    : Question(q), answer_(a) {}

std::string ShortAnswerQuestion::GetAnswer() const {
  return answer_;
}

void ShortAnswerQuestion::SetAnswer(const std::string& a) {
  answer_ = a;
}

void ShortAnswerQuestion::Print(bool show_answer) const {
  Question::Print();
  if (show_answer) {
    std::cout << "Correct Answer: " << answer_ << std::endl;
  }
}

}  // namespace csce240_program5
