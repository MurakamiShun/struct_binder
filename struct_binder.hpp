#pragma once
#include <type_traits>
#include <tuple>

namespace struct_binder{
    namespace detail{
        template<typename T>
        constexpr auto make_reference_tuple([[maybe_unused]]T&, [[maybe_unused]] std::integral_constant<std::size_t, 0>) noexcept {
            return std::tuple<>{};
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 1>) noexcept {
            auto& [a0] = arg;
            return std::tie(a0);
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 2>) noexcept {
            auto& [a0,a1] = arg;
            return std::tie(a0,a1);
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 3>) noexcept {
            auto& [a0,a1,a2] = arg;
            return std::tie(a0,a1,a2);
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 4>) noexcept {
            auto& [a0,a1,a2,a3] = arg;
            return std::tie(a0,a1,a2,a3);
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 5>) noexcept {
            auto& [a0,a1,a2,a3,a4] = arg;
            return std::tie(a0,a1,a2,a3,a4);
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 6>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5);
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 7>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6);
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 8>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7);
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 9>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8);
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 10>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9);
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 11>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10);
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 12>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11);
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 13>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12);
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 14>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13);
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 15>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14);
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 16>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15);
        }

        template<typename T, typename std::enable_if<std::is_aggregate<T>::value, std::nullptr_t>::type = nullptr>
        struct struct_binder {
        private:
            template<auto>
            struct anything {
                template<typename Type>
                operator Type && () const&& noexcept;
            };

            template<auto>
            struct any_base {
                template<typename Type, typename std::enable_if<std::is_base_of<Type, T>::value, std::nullptr_t>::type = nullptr>
                operator Type && () const&& noexcept;
            };

            template<template<auto>class Any, std::size_t... I>
            static constexpr auto initializable(std::index_sequence<I...>, int) noexcept -> decltype(T{ (Any<I>{})... }, bool{}) {
                return true;
            }
            template<template<auto>class Any, std::size_t... I>
            static constexpr auto initializable(std::index_sequence<I...>, char) noexcept {
                return false;
            }

            template<template<auto>class Any, std::size_t N>
            static constexpr std::size_t max_initializable_arg_count() noexcept {
                if constexpr(!initializable<Any>(std::make_index_sequence<N>{}, 0)) return N-1;
                else return max_initializable_arg_count<Any, N+1>();
            }
        public:
            static constexpr std::size_t base_class_num = []() constexpr noexcept {
                return max_initializable_arg_count<any_base, 0>();
            }();

            static constexpr std::size_t variable_num = []() constexpr noexcept {
            return max_initializable_arg_count<anything, base_class_num>();
            }() - base_class_num;

            constexpr auto operator()(T& t) const noexcept {
                return make_reference_tuple(t, std::integral_constant<std::size_t, variable_num>{});
            }
            constexpr auto operator()(const T& t) const noexcept {
                return make_reference_tuple(t, std::integral_constant<std::size_t, variable_num>{});
            }

            using type = decltype(make_reference_tuple(std::declval<T&>(), std::integral_constant<std::size_t, variable_num>{}));
        };
    }

    template<std::size_t N, typename T>
    decltype(auto) get(T&& t){
        auto member_ref_tuple = detail::struct_binder<std::remove_reference_t<T>>{}(t);
        if constexpr(std::is_rvalue_reference_v<T>){
            return std::move(std::get<N>(member_ref_tuple));
        }
        else{
            return std::get<N>(member_ref_tuple);
        }
    }
}