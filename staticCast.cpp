/**
 * @brief This code snippet demonstrates the usage of static_cast in C++.
 *
 * The static_cast operator is used to perform explicit type conversions in C++.
 * It can be used to convert between related types, such as converting a pointer
 * to a base class to a pointer to a derived class, or to perform numeric
 * conversions.
 *
 * It is important to note that static_cast performs only compile-time type
 * checking and does not provide any runtime checks. Therefore, it should be
 * used with caution to avoid potential undefined behavior.
 *
 * Example usage:
 * \code{cpp}
 * int num = 10;
 * double result = static_cast<double>(num);
 * \endcode
 *
 * In the above example, static_cast is used to convert an integer value to a
 * double.
 *
 * @see dynamic_cast, reinterpret_cast, const_cast
 */
