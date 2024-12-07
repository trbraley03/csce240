/**
 * COPYRIGHT 2024 Trent Braley UofSC
 */

#include "multiplechoicequestion.h"
#include <iostream>

namespace csce240_program5 {

MultipleChoiceQuestion::MultipleChoiceQuestion(
    std::string q, int num_choices, std::string* choices, bool* correct)
    : Question(q), num_choices_(num_choices) {
  if (num_choices_ > 0) {
    choices_ = new std::string[num_choices_];
    correct_ = new bool[num_choices_];
    for (int i = 0; i < num_choices_; ++i) {
      choices_[i] = choices ? choices[i] : "";
      correct_[i] = correct ? correct[i] : true;
    }
  } else {
    choices_ = nullptr;
    correct_ = nullptr;
  }
}

MultipleChoiceQuestion::MultipleChoiceQuestion(
    const MultipleChoiceQuestion& other)
    : Question(other.GetQuestion()), num_choices_(other.num_choices_) {
  if (num_choices_ > 0) {
    choices_ = new std::string[num_choices_];
    correct_ = new bool[num_choices_];
    for (int i = 0; i < num_choices_; ++i) {
      choices_[i] = other.choices_[i];
      correct_[i] = other.correct_[i];
    }
  } else {
    choices_ = nullptr;
    correct_ = nullptr;
  }
}

MultipleChoiceQuestion& MultipleChoiceQuestion::operator=(
    const MultipleChoiceQuestion& other) {
  if (this != &other) {
    delete[] choices_;
    delete[] correct_;

    num_choices_ = other.num_choices_;
    if (num_choices_ > 0) {
      choices_ = new std::string[num_choices_];
      correct_ = new bool[num_choices_];
      for (int i = 0; i < num_choices_; ++i) {
        choices_[i] = other.choices_[i];
        correct_[i] = other.correct_[i];
      }
    } else {
      choices_ = nullptr;
      correct_ = nullptr;
    }
    SetQuestion(other.GetQuestion());
  }
  return *this;
}

MultipleChoiceQuestion::~MultipleChoiceQuestion() {
  delete[] choices_;
  delete[] correct_;
}

void MultipleChoiceQuestion::SetAnswerChoices(
    int num_choices, std::string* choices, bool* correct) {
  delete[] choices_;
  delete[] correct_;

  num_choices_ = num_choices;
  if (num_choices_ > 0) {
    choices_ = new std::string[num_choices_];
    correct_ = new bool[num_choices_];
    for (int i = 0; i < num_choices_; ++i) {
      choices_[i] = choices ? choices[i] : "";
      correct_[i] = correct ? correct[i] : true;
    }
  } else {
    choices_ = nullptr;
    correct_ = nullptr;
  }
}

void MultipleChoiceQuestion::Print(bool show_answer) const {
  Question::Print();
  std::cout << "Answer Choices:" << std::endl;
  for (int i = 0; i < num_choices_; ++i) {
    std::cout << choices_[i];
    if (show_answer) {
      std::cout << " - " << (correct_[i] ? "correct" : "incorrect");
    }
    std::cout << std::endl;
  }
}

}  // namespace csce240_program5
