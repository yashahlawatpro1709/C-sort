/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2015 Morwenn
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef CPPSORT_DETAIL_LOW_COMPARISONS_SORT6_H_
#define CPPSORT_DETAIL_LOW_COMPARISONS_SORT6_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <functional>
#include <cpp-sort/utility/functional.h>
#include "../front_insert.h"

namespace cppsort
{
namespace detail
{
    template<>
    struct low_comparisons_sorter_impl<6u>
    {
        template<
            typename RandomAccessIterator,
            typename Compare = std::less<>,
            typename Projection = utility::identity
        >
        auto operator()(RandomAccessIterator first, RandomAccessIterator,
                        Compare compare={}, Projection projection={}) const
            -> void
        {
            low_comparisons_sorter<5u>{}(first+1u, first+6u, compare, projection);
            front_insert<6u>(first, compare, projection);
        }
    };
}}

#endif // CPPSORT_DETAIL_LOW_COMPARISONS_SORT6_H_
