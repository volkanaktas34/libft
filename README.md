𝘛𝘩𝘪𝘴 𝘱𝘳𝘰𝘫𝘦𝘤𝘵 𝘩𝘢𝘴 𝘣𝘦𝘦𝘯 𝘤𝘳𝘦𝘢𝘵𝘦𝘥 𝘢𝘴 𝘱𝘢𝘳𝘵 𝘰𝘧 𝘵𝘩𝘦 𝟦𝟤 𝘤𝘶𝘳𝘳𝘪𝘤𝘶𝘭𝘶𝘮 𝘣𝘺 <𝘷𝘢𝘬𝘵𝘢𝘴>

Libft - @42Istanbul

EN:

Description

Libft is the first project of the 42 school curriculum. The goal of this project is to recreate a series of standard C library functions, as well as additional helper functions that will be used throughout the rest of the program.

By building this library from scratch, the project provides a deep understanding of memory management, string manipulation, and data structures in C. It serves as a personal toolset that replaces the standard libc in future 42 projects.

The Library: Detailed Overview

The library is composed of three distinct parts:

    Libc Functions: Re-implementations of standard functions like strlen, memcpy, atoi, and the is... family (e.g., isalpha, isdigit). These follow the exact behavior of the original system man pages.

    Additional Functions: Essential functions for string and memory manipulation that are not part of the standard library, such as ft_substr, ft_strjoin, ft_split, and ft_itoa.

    Linked Lists Functions: A suite of functions designed to handle linked lists, allowing for dynamic data storage and manipulation (e.g., ft_lstadd_back, ft_lstmap, ft_lstclear).

Instructions

Compilation

The project includes a Makefile that compiles the source files into a static library file called libft.a.

    To compile the mandatory part:

    make

    To remove object files:

    make clean

    To remove all generated files (including the library):

    make fclean

    To recompile the entire project:

    make re

Execution

To use this library in your own C projects, include the header file in your code:

#include "libft.h"

When compiling your project, link the library as follows:

gcc main.c -L. -lft -o my_program

Resources

    C Standard Library (libc) Documentation: Detailed documentation of standard functions.

    Linux Man Pages: Accessible via the command man <function_name>.

    C Programming Language (K&R): The definitive guide to C syntax and logic.

    Makefile Guide: GNU Make Manual

    Linked Lists Concept: GeeksforGeeks Data Structures

AI Usage Disclosure

Artificial Intelligence (specifically Gemini) was utilized in this project for the following tasks:

    Algorithm Optimization: AI was used to brainstorm efficient ways to handle memory allocation for the ft_split function to prevent memory leaks.

    Documentation: AI assisted in structuring and translating the technical descriptions within this README file to ensure clarity for peers and recruiters.

    Unit Test Generation: AI provided edge-case scenarios (such as null pointers or empty strings) to help test the robustness of the ft_strtrim and ft_substr functions.

𝘉𝘶 𝘱𝘳𝘰𝘫𝘦, 𝟦𝟤 𝘮𝘶̈𝘧𝘳𝘦𝘥𝘢𝘵ı𝘯ı𝘯 𝘣𝘪𝘳 𝘱𝘢𝘳𝘤̧𝘢𝘴ı 𝘰𝘭𝘢𝘳𝘢𝘬 <𝘷𝘢𝘬𝘵𝘢𝘴> 𝘵𝘢𝘳𝘢𝘧ı𝘯𝘥𝘢𝘯 𝘰𝘭𝘶𝘴̧𝘵𝘶𝘳𝘶𝘭𝘮𝘶𝘴̧𝘵𝘶𝘳.

Libft - @42Istanbul

TR:

Açıklama

Libft, C programlama dilinde standart kütüphane (libc) fonksiyonlarını yeniden yazarak ve müfredat boyunca kullanılacak yardımcı fonksiyonları ekleyerek oluşturulan kişisel bir C kütüphanesidir.

Bu projenin temel amacı, bir C programcısının en temel araçlarını (string yönetimi, bellek yönetimi, karakter kontrolü vb.) derinlemesine anlamak ve ilerideki projelerde kullanılmak üzere sağlam bir temel oluşturmaktır. Proje; karakter analizi, bellek manipülasyonu, string işleme ve bağlı liste (linked list) yönetimi gibi alanları kapsar.

Kütüphane: Detaylı Genel Bakış

Kütüphane üç farklı bölümden oluşmaktadır:

    Libc Fonksiyonları: strlen, memcpy, atoi ve is... ailesi (örneğin; isalpha, isdigit) gibi standart fonksiyonların yeniden yazılmış halleridir. Bu fonksiyonlar, orijinal sistem "man" sayfalarındaki davranışların birebir aynısını sergiler.

    Ek Fonksiyonlar: Standart kütüphanede bulunmayan ancak string ve bellek yönetimi için temel teşkil eden ft_substr, ft_strjoin, ft_split ve ft_itoa gibi fonksiyonlardır.

    Bağlı Liste Fonksiyonları: Dinamik veri depolama ve yönetimi sağlayan, bağlı listeleri (linked lists) işlemek için tasarlanmış bir dizi fonksiyondur (örneğin; ft_lstadd_back, ft_lstmap, ft_lstclear).

Talimatlar

Derleme

Proje, kaynak dosyalarını libft.a adlı statik bir kütüphane dosyasına derleyen bir Makefile içerir.

    Zorunlu bölümü derlemek için:

    make

    Nesne dosyalarını (.o) silmek için:

    make clean

    Oluşturulan tüm dosyaları (kütüphane dahil) silmek için:

    make fclean

    Tüm projeyi yeniden derlemek için:

    make re

Kullanım

Bu kütüphaneyi kendi C projelerinizde kullanmak için başlık (header) dosyasını kodunuza dahil edin:

#include "libft.h"

Projenizi derlerken kütüphaneyi aşağıdaki şekilde bağlayın:

gcc main.c -L. -lft -o program_adi

Kaynaklar

    C Standart Kütüphanesi (libc) Dokümantasyonu: Standart fonksiyonların ayrıntılı dokümantasyonu.

    Linux Man Sayfaları: man <fonksiyon_adı> komutuyla erişilebilir.

    C Programlama Dili (K&R): C sözdizimi ve mantığına dair kesin kılavuz.

    Makefile Kılavuzu: GNU Make Kılavuzu

    Bağlı Listeler Kavramı: GeeksforGeeks Veri Yapıları

Yapay Zeka Kullanım Beyanı

Bu projede Yapay Zeka (özellikle Gemini), aşağıdaki görevler için kullanılmıştır:

    Algoritma Optimizasyonu: ft_split fonksiyonunda bellek sızıntılarını önlemek ve bellek allocation (tahsis) işlemlerini verimli hale getirmek için fikir alışverişinde bulunuldu.

    Dokümantasyon: Bu README dosyasındaki teknik açıklamaların, meslektaşlar ve işe alım uzmanları için net olması adına yapılandırılmasına ve tercümesine yardımcı olundu.

    Birim Test Hazırlığı: ft_strtrim ve ft_substr gibi fonksiyonların dayanıklılığını test etmek için uç durum senaryoları (null pointer veya boş string gibi) sağlandı.