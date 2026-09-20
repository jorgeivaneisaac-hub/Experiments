#pragma once

// LICENSE: MIT
/**
This fileis
part of the mate-ai project,
which is licensed under
the MIT License.*/

#include <string>
#include <vector>

namespace ai_predict {
namespace lexer {
struct Token {};
class Lexer {
public:
  Lexer(const std::string &input);
  std::vector<Token> tokenize();
}
} // namespace lexer
} // namespace ai_predict