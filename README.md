# Zynq-7000 PS MMRs

Purpose: Xilinx Zynq-7000 PS Memory-Mapped Registers C/C++ Headers

## Features

Only PS7 memory-mapped registers (MMRs) are supported for now.

### PS7 MMRs

* All code based on official vendor documentation - `ug585-Zynq-7000-TRM.pdf`.
* All MMR descriptions allocated in header files depend on module types:
    * there are 31 modules, so there are 31 header files with module register descriptions;
    * one header file that include all other headers - `ps7mmrs.h`;
    * one header file with module addresses - `ps7modmap.h`.
* Repository contains header files with MMR descriptions (addresses, bit fields, comments).
* There are three styles based on:
    * constants;
    * enumerations;
    * macros.
* All register and bitfield names are brought to same style - uppercase.
* Register names has the following format: `<MODULE_NAME>_<REGISTER_NAME>_REG`. The only exception is `MPCORE` module - `GIC` registers has no suffix `REG`.
* If there are more than one peripheral module, then resister name has a suffix corresponding to a specific module.
* Some register and bitfield names changed because:
     * there are duplicated names;
     * some names are very long;
     * a number of bitfields lack names - `VAL` value inserted;
     * `CONTROL`, `STATUS`, `INTERRUPT`/`INTRPT` name parts replaced with `CTRL`, `STS`, `INT` accordingtly.
* All registers and bitfields have full detailed text descriptions - identical to base document `ug585-Zynq-7000-TRM.pdf`.
