#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
  // Seed the random number generator with current time
  std::srand(std::time(0));

  // Yo mama joke database
  const char *jokes[] = {
      "Yo mama's so fat, when she sat on a rainbow, she made Skittles!",
      "Yo mama's so ugly, she threw a boomerang and it refused to come back!",
      "Yo mama's so dumb, she put paper on the TV and called it paper view!",
      "Yo mama's so lazy, she thinks a two-income family is where yo daddy has ",
      "two jobs!",
      "Yo mama's so short, she can't even smoke a cigar!",
      "Yo mama's so clumsy, she got tangled up in a cordless phone!",
  };

  int numJokes = sizeof(jokes) / sizeof(jokes[0]);

  // Generate a random joke index
  int jokeIndex = std::rand() % numJokes;

  // Print the joke
  std::cout << "Yo mama joke: " << jokes[jokeIndex] << std::endl;

  return 0;
}
