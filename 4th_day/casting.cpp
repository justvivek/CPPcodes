/*
 * Type casting
 * In C++, there are 5 different types of casts: C-style casts, static casts, const casts, dynamic casts, and reinterpret casts.
 * Rule: Avoid const casts and reinterpret casts unless you have a very good reason to use them.
 * Implicit cnversion
 * int i1 = 10;
 * int i2 = 4;
 * float f = i1 / i2;
 * 
 * C-style casts
 * C-style casts are not checked by the compiler at compile time, 
 * C-style casts can be inherently misused, because they will let you do things that may not make sense,
 *  such as getting rid of a const or changing a data type without changing the underlying representation (leading to garbage results).
 * Consequently, C-style casts should generally be avoided.
 * int i1 = 10;
 * int i2 = 4;
 * float f = (float)i1 / i2;
 * 
 * static casts
 * The main advantage of static_cast is that it provides compile-time type checking, 
 * making it harder to make an inadvertent error. 
 * Static_cast is also (intentionally) less powerful than C-style casts, 
 * so you can’t inadvertently remove const or do other things you may not have intended to do.
 * int i1 = 10;
 * int i2 = 4;
 * float f = static_cast<float>(i1) / i2;
*/
