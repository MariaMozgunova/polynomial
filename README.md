<div id="top"></div>



<!-- PROJECT SHIELDS -->
[![MIT License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

This project is the implementation of the algebraic polynomial stored as a vector of coefficients. All the operations manipulate coefficients only.

The following operations are available:
- `=` - copy assignment operator
- `==`, `!=` - check whether respective coefficients of two polynomials are (non)equal 
- unary `+` - return the polynomial itself
- binary `+` - add two polynomials
- unary `-` - return the polynomial with the changed sign of each coefficient
- binary `-` - subtract the second polynomial from the first
- `+=` - add the right polynomial to the left polynomial and assign the result to the left polynomial
- `-=` - subtract the right polynomial from the left polynomial and assign the result to the left polynomial
- `*`, `/`, `*=`, `/=` - multiply or divide each coefficient by a given number
- `<<` - output polinomial to `std::ostream`
- `>>` - read polynomial from `std::istream`. The format is following: enter the degree of a polynomial `n`, enter `n + 1` coefficients right to left
- `[i]` - return coefficient at `x^i`


<p align="right">(<a href="#top">back to top</a>)</p>



<!-- GETTING STARTED -->
## Getting Started

To use this algebraic polynomial implementation, follow the simple steps below.

### Installation

1. Clone the repo `git clone https://github.com/MariaMozgunova/polynomial.git`
2. Include program into your code `#include "polynomial/polynomial.cpp"`

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- USAGE EXAMPLES -->
## Usage

See `main_polynomial.cpp` for examples of usage.

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE` for more information.

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- CONTACT -->
## Contact

Maria Mozgunova - [Twitter - @MariaMozgunova](https://twitter.com/MariaMozgunova) - mariiamozgunova@gmail.com

Project Link: [https://github.com/MariaMozgunova/polynomial](https://github.com/MariaMozgunova/polynomial)

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- ACKNOWLEDGMENTS -->
## Acknowledgments

* [README Template](https://github.com/othneildrew/Best-README-Template)

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[license-shield]: https://img.shields.io/github/license/othneildrew/Best-README-Template.svg?style=for-the-badge
[license-url]: https://github.com/MariaMozgunova/polynomial/blob/master/LICENSE
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://www.linkedin.com/in/mariamozgunova/
