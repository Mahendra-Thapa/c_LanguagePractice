#include <iostream>
#include <stack>

// Define a struct to represent a book with ISBN, title, and author
struct Book {
  int ISBN;
  std::string title;
  std::string author;
};

// Function to compare two books based on their ISBNs
bool compareBooks(const Book& book1, const Book& book2) {
  return book1.ISBN < book2.ISBN;
}

// Function to add a new book to the sorted stack
void addToSortedStack(std::stack<Book>& bookStack, const Book& newBook) {
  // If the stack is empty or the new book has a higher ISBN than the top book, push it directly
  if (bookStack.empty() || compareBooks(newBook, bookStack.top())) {
    bookStack.push(newBook);
    return;
  }

  // Create a temporary stack to hold elements while finding the insertion point
  std::stack<Book> tempStack;

  // Move elements from the main stack to the temporary stack until we find the correct position
  while (!bookStack.empty() && compareBooks(bookStack.top(), newBook)) {
    tempStack.push(bookStack.top());
    bookStack.pop();
  }

  // Insert the new book at the correct position
  bookStack.push(newBook);

  // Move elements back from the temporary stack to the main stack
  while (!tempStack.empty()) {
    bookStack.push(tempStack.top());
    tempStack.pop();
  }
}

int main() {
  // Example usage
  std::stack<Book> bookStack;

  Book book1{1234, "Book 1", "Author 1"};
  Book book2{5678, "Book 2", "Author 2"};
  Book book3{2345, "Book 3", "Author 3"};

  addToSortedStack(bookStack, book1);
  addToSortedStack(bookStack, book2);
  addToSortedStack(bookStack, book3);

  // Print the books in the sorted stack (sorted by ISBN)
  while (!bookStack.empty()) {
    Book book = bookStack.top();
    std::cout << "ISBN: " << book.ISBN << ", Title: " << book.title << ", Author: " << book.author << std::endl;
    bookStack.pop();
  }

  return 0;
}
