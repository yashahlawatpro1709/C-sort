/*
 * Copyright (C) 2015 Morwenn
 *
 * array_sort is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * array_sort is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program. If not,
 * see <http://www.gnu.org/licenses/>.
 */
#ifndef CPPSORT_DETAIL_SORT27_H_
#define CPPSORT_DETAIL_SORT27_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <utility>

namespace cppsort
{
namespace detail
{
    template<>
    struct sorter_n<27u>
    {
        template<typename RandomAccessIterator, typename Compare>
        static auto do_it(RandomAccessIterator begin, Compare compare)
            -> void
        {
            using std::swap;

            if (compare(begin[2u], begin[1u])) {
                swap(begin[1u], begin[2u]);
            }
            if (compare(begin[2u], begin[0u])) {
                swap(begin[0u], begin[2u]);
            }
            if (compare(begin[1u], begin[0u])) {
                swap(begin[0u], begin[1u]);
            }
            if (compare(begin[5u], begin[4u])) {
                swap(begin[4u], begin[5u]);
            }
            if (compare(begin[5u], begin[3u])) {
                swap(begin[3u], begin[5u]);
            }
            if (compare(begin[4u], begin[3u])) {
                swap(begin[3u], begin[4u]);
            }
            if (compare(begin[3u], begin[0u])) {
                swap(begin[0u], begin[3u]);
            }
            if (compare(begin[4u], begin[1u])) {
                swap(begin[1u], begin[4u]);
            }
            if (compare(begin[5u], begin[2u])) {
                swap(begin[2u], begin[5u]);
            }
            if (compare(begin[4u], begin[2u])) {
                swap(begin[2u], begin[4u]);
            }
            if (compare(begin[3u], begin[1u])) {
                swap(begin[1u], begin[3u]);
            }
            if (compare(begin[3u], begin[2u])) {
                swap(begin[2u], begin[3u]);
            }
            if (compare(begin[8u], begin[7u])) {
                swap(begin[7u], begin[8u]);
            }
            if (compare(begin[8u], begin[6u])) {
                swap(begin[6u], begin[8u]);
            }
            if (compare(begin[7u], begin[6u])) {
                swap(begin[6u], begin[7u]);
            }
            if (compare(begin[10u], begin[9u])) {
                swap(begin[9u], begin[10u]);
            }
            if (compare(begin[12u], begin[11u])) {
                swap(begin[11u], begin[12u]);
            }
            if (compare(begin[11u], begin[9u])) {
                swap(begin[9u], begin[11u]);
            }
            if (compare(begin[12u], begin[10u])) {
                swap(begin[10u], begin[12u]);
            }
            if (compare(begin[11u], begin[10u])) {
                swap(begin[10u], begin[11u]);
            }
            if (compare(begin[10u], begin[6u])) {
                swap(begin[6u], begin[10u]);
            }
            if (compare(begin[9u], begin[6u])) {
                swap(begin[6u], begin[9u]);
            }
            if (compare(begin[11u], begin[7u])) {
                swap(begin[7u], begin[11u]);
            }
            if (compare(begin[12u], begin[8u])) {
                swap(begin[8u], begin[12u]);
            }
            if (compare(begin[11u], begin[8u])) {
                swap(begin[8u], begin[11u]);
            }
            if (compare(begin[9u], begin[7u])) {
                swap(begin[7u], begin[9u]);
            }
            if (compare(begin[10u], begin[8u])) {
                swap(begin[8u], begin[10u]);
            }
            if (compare(begin[9u], begin[8u])) {
                swap(begin[8u], begin[9u]);
            }
            if (compare(begin[7u], begin[0u])) {
                swap(begin[0u], begin[7u]);
            }
            if (compare(begin[6u], begin[0u])) {
                swap(begin[0u], begin[6u]);
            }
            if (compare(begin[8u], begin[1u])) {
                swap(begin[1u], begin[8u]);
            }
            if (compare(begin[9u], begin[2u])) {
                swap(begin[2u], begin[9u]);
            }
            if (compare(begin[8u], begin[2u])) {
                swap(begin[2u], begin[8u]);
            }
            if (compare(begin[6u], begin[1u])) {
                swap(begin[1u], begin[6u]);
            }
            if (compare(begin[7u], begin[2u])) {
                swap(begin[2u], begin[7u]);
            }
            if (compare(begin[6u], begin[2u])) {
                swap(begin[2u], begin[6u]);
            }
            if (compare(begin[10u], begin[3u])) {
                swap(begin[3u], begin[10u]);
            }
            if (compare(begin[11u], begin[4u])) {
                swap(begin[4u], begin[11u]);
            }
            if (compare(begin[12u], begin[5u])) {
                swap(begin[5u], begin[12u]);
            }
            if (compare(begin[11u], begin[5u])) {
                swap(begin[5u], begin[11u]);
            }
            if (compare(begin[10u], begin[4u])) {
                swap(begin[4u], begin[10u]);
            }
            if (compare(begin[10u], begin[5u])) {
                swap(begin[5u], begin[10u]);
            }
            if (compare(begin[7u], begin[3u])) {
                swap(begin[3u], begin[7u]);
            }
            if (compare(begin[6u], begin[3u])) {
                swap(begin[3u], begin[6u]);
            }
            if (compare(begin[8u], begin[4u])) {
                swap(begin[4u], begin[8u]);
            }
            if (compare(begin[9u], begin[5u])) {
                swap(begin[5u], begin[9u]);
            }
            if (compare(begin[8u], begin[5u])) {
                swap(begin[5u], begin[8u]);
            }
            if (compare(begin[6u], begin[4u])) {
                swap(begin[4u], begin[6u]);
            }
            if (compare(begin[7u], begin[5u])) {
                swap(begin[5u], begin[7u]);
            }
            if (compare(begin[6u], begin[5u])) {
                swap(begin[5u], begin[6u]);
            }
            if (compare(begin[15u], begin[14u])) {
                swap(begin[14u], begin[15u]);
            }
            if (compare(begin[15u], begin[13u])) {
                swap(begin[13u], begin[15u]);
            }
            if (compare(begin[14u], begin[13u])) {
                swap(begin[13u], begin[14u]);
            }
            if (compare(begin[17u], begin[16u])) {
                swap(begin[16u], begin[17u]);
            }
            if (compare(begin[19u], begin[18u])) {
                swap(begin[18u], begin[19u]);
            }
            if (compare(begin[18u], begin[16u])) {
                swap(begin[16u], begin[18u]);
            }
            if (compare(begin[19u], begin[17u])) {
                swap(begin[17u], begin[19u]);
            }
            if (compare(begin[18u], begin[17u])) {
                swap(begin[17u], begin[18u]);
            }
            if (compare(begin[17u], begin[13u])) {
                swap(begin[13u], begin[17u]);
            }
            if (compare(begin[16u], begin[13u])) {
                swap(begin[13u], begin[16u]);
            }
            if (compare(begin[18u], begin[14u])) {
                swap(begin[14u], begin[18u]);
            }
            if (compare(begin[19u], begin[15u])) {
                swap(begin[15u], begin[19u]);
            }
            if (compare(begin[18u], begin[15u])) {
                swap(begin[15u], begin[18u]);
            }
            if (compare(begin[16u], begin[14u])) {
                swap(begin[14u], begin[16u]);
            }
            if (compare(begin[17u], begin[15u])) {
                swap(begin[15u], begin[17u]);
            }
            if (compare(begin[16u], begin[15u])) {
                swap(begin[15u], begin[16u]);
            }
            if (compare(begin[22u], begin[21u])) {
                swap(begin[21u], begin[22u]);
            }
            if (compare(begin[22u], begin[20u])) {
                swap(begin[20u], begin[22u]);
            }
            if (compare(begin[21u], begin[20u])) {
                swap(begin[20u], begin[21u]);
            }
            if (compare(begin[24u], begin[23u])) {
                swap(begin[23u], begin[24u]);
            }
            if (compare(begin[26u], begin[25u])) {
                swap(begin[25u], begin[26u]);
            }
            if (compare(begin[25u], begin[23u])) {
                swap(begin[23u], begin[25u]);
            }
            if (compare(begin[26u], begin[24u])) {
                swap(begin[24u], begin[26u]);
            }
            if (compare(begin[25u], begin[24u])) {
                swap(begin[24u], begin[25u]);
            }
            if (compare(begin[24u], begin[20u])) {
                swap(begin[20u], begin[24u]);
            }
            if (compare(begin[23u], begin[20u])) {
                swap(begin[20u], begin[23u]);
            }
            if (compare(begin[25u], begin[21u])) {
                swap(begin[21u], begin[25u]);
            }
            if (compare(begin[26u], begin[22u])) {
                swap(begin[22u], begin[26u]);
            }
            if (compare(begin[25u], begin[22u])) {
                swap(begin[22u], begin[25u]);
            }
            if (compare(begin[23u], begin[21u])) {
                swap(begin[21u], begin[23u]);
            }
            if (compare(begin[24u], begin[22u])) {
                swap(begin[22u], begin[24u]);
            }
            if (compare(begin[23u], begin[22u])) {
                swap(begin[22u], begin[23u]);
            }
            if (compare(begin[20u], begin[13u])) {
                swap(begin[13u], begin[20u]);
            }
            if (compare(begin[21u], begin[14u])) {
                swap(begin[14u], begin[21u]);
            }
            if (compare(begin[22u], begin[15u])) {
                swap(begin[15u], begin[22u]);
            }
            if (compare(begin[21u], begin[15u])) {
                swap(begin[15u], begin[21u]);
            }
            if (compare(begin[20u], begin[14u])) {
                swap(begin[14u], begin[20u]);
            }
            if (compare(begin[20u], begin[15u])) {
                swap(begin[15u], begin[20u]);
            }
            if (compare(begin[23u], begin[16u])) {
                swap(begin[16u], begin[23u]);
            }
            if (compare(begin[24u], begin[17u])) {
                swap(begin[17u], begin[24u]);
            }
            if (compare(begin[23u], begin[17u])) {
                swap(begin[17u], begin[23u]);
            }
            if (compare(begin[25u], begin[18u])) {
                swap(begin[18u], begin[25u]);
            }
            if (compare(begin[26u], begin[19u])) {
                swap(begin[19u], begin[26u]);
            }
            if (compare(begin[25u], begin[19u])) {
                swap(begin[19u], begin[25u]);
            }
            if (compare(begin[23u], begin[18u])) {
                swap(begin[18u], begin[23u]);
            }
            if (compare(begin[24u], begin[19u])) {
                swap(begin[19u], begin[24u]);
            }
            if (compare(begin[23u], begin[19u])) {
                swap(begin[19u], begin[23u]);
            }
            if (compare(begin[20u], begin[16u])) {
                swap(begin[16u], begin[20u]);
            }
            if (compare(begin[21u], begin[17u])) {
                swap(begin[17u], begin[21u]);
            }
            if (compare(begin[20u], begin[17u])) {
                swap(begin[17u], begin[20u]);
            }
            if (compare(begin[22u], begin[18u])) {
                swap(begin[18u], begin[22u]);
            }
            if (compare(begin[22u], begin[19u])) {
                swap(begin[19u], begin[22u]);
            }
            if (compare(begin[20u], begin[18u])) {
                swap(begin[18u], begin[20u]);
            }
            if (compare(begin[21u], begin[19u])) {
                swap(begin[19u], begin[21u]);
            }
            if (compare(begin[20u], begin[19u])) {
                swap(begin[19u], begin[20u]);
            }
            if (compare(begin[14u], begin[0u])) {
                swap(begin[0u], begin[14u]);
            }
            if (compare(begin[13u], begin[0u])) {
                swap(begin[0u], begin[13u]);
            }
            if (compare(begin[15u], begin[1u])) {
                swap(begin[1u], begin[15u]);
            }
            if (compare(begin[16u], begin[2u])) {
                swap(begin[2u], begin[16u]);
            }
            if (compare(begin[15u], begin[2u])) {
                swap(begin[2u], begin[15u]);
            }
            if (compare(begin[13u], begin[1u])) {
                swap(begin[1u], begin[13u]);
            }
            if (compare(begin[14u], begin[2u])) {
                swap(begin[2u], begin[14u]);
            }
            if (compare(begin[13u], begin[2u])) {
                swap(begin[2u], begin[13u]);
            }
            if (compare(begin[17u], begin[3u])) {
                swap(begin[3u], begin[17u]);
            }
            if (compare(begin[18u], begin[4u])) {
                swap(begin[4u], begin[18u]);
            }
            if (compare(begin[19u], begin[5u])) {
                swap(begin[5u], begin[19u]);
            }
            if (compare(begin[18u], begin[5u])) {
                swap(begin[5u], begin[18u]);
            }
            if (compare(begin[17u], begin[4u])) {
                swap(begin[4u], begin[17u]);
            }
            if (compare(begin[17u], begin[5u])) {
                swap(begin[5u], begin[17u]);
            }
            if (compare(begin[14u], begin[3u])) {
                swap(begin[3u], begin[14u]);
            }
            if (compare(begin[13u], begin[3u])) {
                swap(begin[3u], begin[13u]);
            }
            if (compare(begin[15u], begin[4u])) {
                swap(begin[4u], begin[15u]);
            }
            if (compare(begin[16u], begin[5u])) {
                swap(begin[5u], begin[16u]);
            }
            if (compare(begin[15u], begin[5u])) {
                swap(begin[5u], begin[15u]);
            }
            if (compare(begin[13u], begin[4u])) {
                swap(begin[4u], begin[13u]);
            }
            if (compare(begin[14u], begin[5u])) {
                swap(begin[5u], begin[14u]);
            }
            if (compare(begin[13u], begin[5u])) {
                swap(begin[5u], begin[13u]);
            }
            if (compare(begin[20u], begin[6u])) {
                swap(begin[6u], begin[20u]);
            }
            if (compare(begin[21u], begin[7u])) {
                swap(begin[7u], begin[21u]);
            }
            if (compare(begin[22u], begin[8u])) {
                swap(begin[8u], begin[22u]);
            }
            if (compare(begin[21u], begin[8u])) {
                swap(begin[8u], begin[21u]);
            }
            if (compare(begin[20u], begin[7u])) {
                swap(begin[7u], begin[20u]);
            }
            if (compare(begin[20u], begin[8u])) {
                swap(begin[8u], begin[20u]);
            }
            if (compare(begin[23u], begin[9u])) {
                swap(begin[9u], begin[23u]);
            }
            if (compare(begin[24u], begin[10u])) {
                swap(begin[10u], begin[24u]);
            }
            if (compare(begin[23u], begin[10u])) {
                swap(begin[10u], begin[23u]);
            }
            if (compare(begin[25u], begin[11u])) {
                swap(begin[11u], begin[25u]);
            }
            if (compare(begin[26u], begin[12u])) {
                swap(begin[12u], begin[26u]);
            }
            if (compare(begin[25u], begin[12u])) {
                swap(begin[12u], begin[25u]);
            }
            if (compare(begin[23u], begin[11u])) {
                swap(begin[11u], begin[23u]);
            }
            if (compare(begin[24u], begin[12u])) {
                swap(begin[12u], begin[24u]);
            }
            if (compare(begin[23u], begin[12u])) {
                swap(begin[12u], begin[23u]);
            }
            if (compare(begin[20u], begin[9u])) {
                swap(begin[9u], begin[20u]);
            }
            if (compare(begin[21u], begin[10u])) {
                swap(begin[10u], begin[21u]);
            }
            if (compare(begin[20u], begin[10u])) {
                swap(begin[10u], begin[20u]);
            }
            if (compare(begin[22u], begin[11u])) {
                swap(begin[11u], begin[22u]);
            }
            if (compare(begin[22u], begin[12u])) {
                swap(begin[12u], begin[22u]);
            }
            if (compare(begin[20u], begin[11u])) {
                swap(begin[11u], begin[20u]);
            }
            if (compare(begin[21u], begin[12u])) {
                swap(begin[12u], begin[21u]);
            }
            if (compare(begin[20u], begin[12u])) {
                swap(begin[12u], begin[20u]);
            }
            if (compare(begin[13u], begin[6u])) {
                swap(begin[6u], begin[13u]);
            }
            if (compare(begin[14u], begin[7u])) {
                swap(begin[7u], begin[14u]);
            }
            if (compare(begin[15u], begin[8u])) {
                swap(begin[8u], begin[15u]);
            }
            if (compare(begin[14u], begin[8u])) {
                swap(begin[8u], begin[14u]);
            }
            if (compare(begin[13u], begin[7u])) {
                swap(begin[7u], begin[13u]);
            }
            if (compare(begin[13u], begin[8u])) {
                swap(begin[8u], begin[13u]);
            }
            if (compare(begin[16u], begin[9u])) {
                swap(begin[9u], begin[16u]);
            }
            if (compare(begin[17u], begin[10u])) {
                swap(begin[10u], begin[17u]);
            }
            if (compare(begin[16u], begin[10u])) {
                swap(begin[10u], begin[16u]);
            }
            if (compare(begin[18u], begin[11u])) {
                swap(begin[11u], begin[18u]);
            }
            if (compare(begin[19u], begin[12u])) {
                swap(begin[12u], begin[19u]);
            }
            if (compare(begin[18u], begin[12u])) {
                swap(begin[12u], begin[18u]);
            }
            if (compare(begin[16u], begin[11u])) {
                swap(begin[11u], begin[16u]);
            }
            if (compare(begin[17u], begin[12u])) {
                swap(begin[12u], begin[17u]);
            }
            if (compare(begin[16u], begin[12u])) {
                swap(begin[12u], begin[16u]);
            }
            if (compare(begin[13u], begin[9u])) {
                swap(begin[9u], begin[13u]);
            }
            if (compare(begin[14u], begin[10u])) {
                swap(begin[10u], begin[14u]);
            }
            if (compare(begin[13u], begin[10u])) {
                swap(begin[10u], begin[13u]);
            }
            if (compare(begin[15u], begin[11u])) {
                swap(begin[11u], begin[15u]);
            }
            if (compare(begin[15u], begin[12u])) {
                swap(begin[12u], begin[15u]);
            }
            if (compare(begin[13u], begin[11u])) {
                swap(begin[11u], begin[13u]);
            }
            if (compare(begin[14u], begin[12u])) {
                swap(begin[12u], begin[14u]);
            }
            if (compare(begin[13u], begin[12u])) {
                swap(begin[12u], begin[13u]);
            }
        }
    };
}}

#endif // CPPSORT_DETAIL_SORT27_H_

