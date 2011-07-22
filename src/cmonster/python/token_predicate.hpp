/*
Copyright (c) 2011 Andrew Wilkins <axwalk@gmail.com>

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
of the Software, and to permit persons to whom the Software is furnished to do
so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef _CSNAKE_PYTHON_TOKENPREDICATE_HPP
#define _CSNAKE_PYTHON_TOKENPREDICATE_HPP

#include "../core/token_predicate.hpp"

namespace cmonster {
namespace python {

class Preprocessor;

/**
 */
class TokenPredicate : public cmonster::core::TokenPredicate
{
public:
    TokenPredicate(Preprocessor *pp, PyObject *callable);
    ~TokenPredicate();

    bool operator()(cmonster::core::Token const& token) const;

private:
    Preprocessor *m_preprocessor;
    PyObject *m_callable;
};

}}

#endif
