/**
 * COPYRIGHT 2024 Trent Braley UofSC
 */

#ifndef SHORTANSWERQUESTION_H
#define SHORTANSWERQUESTION_H

#include "question.h"
#include <string>

namespace csce240_program5 {

// Represents short answer question
class ShortAnswerQuestion : public Question {
 private:
  std::string answer_;  // Correct answer

 public:
  explicit ShortAnswerQuestion(std::string q = "?", std::string a = "");

  std::string GetAnswer() const;  // Returns answer
  void SetAnswer(const std::string& a);  // Sets answer
  void Print(bool show_answer) const;  // Prints question and answer
};

}  // namespace csce240_program5

#endif  // SHORTANSWERQUESTION_H
