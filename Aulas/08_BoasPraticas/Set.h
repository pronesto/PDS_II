#ifndef SET_H
#define SET_H

/**
 * \struct Set
 *
 * \brief Implementation of the Set ADT
 *
 * This struct implements the Set abstract data type. This definition of set
 * receives integers only, and assumes that the maximum integer is known, and
 * that every integer is non-negative.
 */
struct Set {
  /**
   * \brief The constructor method.
   * \param capacity The largest integer (minus one) that can be stored.
   */
  Set (unsigned capacity);
  /**
   * \brief Determines if an element belongs into the set.
   * \param e The element that will be checked.
   * \return True if the element is in the set, and false otherwise.
   */
  bool contains(unsigned e);
  /**
   * \brief Adds an element to the set.
   * \param e The element that will be inserted in the set.
   */
  void insert(unsigned e);
  /**
   * \brief Removes an element from the set.
   * \param e The element that will be removed from the set.
   */
  void remove(unsigned e);
  private:
  char *_data; ///< An array that will store the elements as a bitmap.
  unsigned _capacity; ///< The largest integer (-1) that can be stored.
};

#endif
