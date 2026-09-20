#pragma once

// LICENSE: MIT
/**
This fileis
part of the mate-ai project,
which is licensed under
the MIT License.*/

#include <string>
#include <vector>

namespace ai_predict::lexer {
struct Token {};
class Lexer {
public:
  Lexer(const std::string &input);
  std::vector<Token> tokenize();
};
} // namespace ai_predict::lexer