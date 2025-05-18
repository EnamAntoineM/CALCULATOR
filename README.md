# CALCULATOR

A simple calculator application built with C++ and Qt, featuring a custom UI and no use of Qt Creator—everything is coded manually.

## Features

- Basic arithmetic operations (+, -, ×, ÷, %)
- Trigonometric functions (sin, cos) with degree support
- Square root, exponentiation, and constants (π, e)
- Expression evaluation using QJSEngine
- Responsive UI with rounded buttons and input fields
- Keyboard support: press Enter to calculate
- Fully custom layout using Qt layouts and widgets

## Build Instructions

1. **Dependencies:**  
   - Qt5 (Core, Widgets, Gui, Qml)
   - C++ compiler (e.g., g++)

2. **Build:**  
   ```bash
   make
   ```

3. **Run:**  
   ```bash
   ./calculator
   ```

## Notes

- All UI is created in code, not with Qt Designer or Qt Creator.
- The calculator supports mathematical expressions like `sin(90)`, `cos(180)`, `π`, `e`, `√(16)`, and more.
- Trigonometric functions expect input in degrees.

---

**Author:** Enam KODJOH-KPAKPASSOU  
**Email:** eakodjoh-kpakpassou@st.ug.edu.gh
