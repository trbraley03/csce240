/**
 * COPYRIGHT 2024 Trent Braley UofSC
 */

#ifndef TRUEFALSEQUESTION_H
#define TRUEFALSEQUESTION_H

#include "question.h"
#include <string>

namespace csce240_program5 {

// Represents a true/false question.
class TrueFalseQuestion : public Question {
 private:
  bool answer_;  // True or false answer.

 public:
  explicit TrueFalseQuestion(std::string q = "?", bool a = true);

  bool GetAnswer() const;  // Returns the answer.
  void SetAnswer(bool a);  // Sets the answer.
  void Print(bool show_answer) const;  // Prints question and answer.
};

}  // namespace csce240_program5

#endif  // TRUEFALSEQUESTION_H
