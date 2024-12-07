/**
 * COPYRIGHT 2024 Trent Braley UofSC
 */

#ifndef MULTIPLECHOICEQUESTION_H
#define MULTIPLECHOICEQUESTION_H

#include "question.h"
#include <string>

namespace csce240_program5 {

// Represents multiple-choice question
class MultipleChoiceQuestion : public Question {
 private:
  int num_choices_;  // Number of choices
  std::string* choices_;  // Array of choices
  bool* correct_;  // Array of correct/incorrect flags

 public:
  explicit MultipleChoiceQuestion(
      std::string q = "?", int num_choices = 0,
      std::string* choices = nullptr, bool* correct = nullptr);

  MultipleChoiceQuestion(const MultipleChoiceQuestion& other);
  MultipleChoiceQuestion& operator=(const MultipleChoiceQuestion& other);
  ~MultipleChoiceQuestion();

  void SetAnswerChoices(int num_choices, std::string* choices, bool* correct);  // Sets choices
  void Print(bool show_answer) const;  // Prints question and choices
};

}  // namespace csce240_program5

#endif  // MULTIPLECHOICEQUESTION_H
