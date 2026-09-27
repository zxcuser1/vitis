# Лабораторная работа 1 — задание `lab1_z1`

Этот репозиторий содержит исходники HLS-компонента для задания `lab1_z1`.

## Алгоритм

Для каждого элемента входного массива вычисляется:

```cpp
outArr[i] = inArr[i] * inA + inB + inC;
```

где:

- `i = 0 .. ROWS - 1`;
- `ROWS = 3`;
- `inArr[i]`, `inA`, `inB`, `inC` — тип `short`;
- `outArr[i]` — тип `int`.

Тест запускает функцию `N = 3` раза на псевдослучайных входных данных и автоматически сравнивает фактический результат с эталонным.

## Файлы

```text
lab1_z1.h          — типы, ROWS, N и объявление функции
lab1_z1.cpp        — реализация HLS-функции
lab1_z1_test.cpp   — testbench
hls_config.cfg     — настройки HLS-компонента
```

## Настройки HLS-компонента

При создании компонента в Vitis HLS использовать следующие параметры:

| Параметр | Значение |
|---|---|
| Component name | `lab1_z1` |
| Top function | `lab1_z1` |
| Device / Part | `xc7z020clg484-1` |
| Clock period | `10 ns` |
| Clock uncertainty / Margin | `12%` |
| Flow target | `Vivado IP` |
| Package output format | `IP Catalog` |

Эквивалентные ключевые настройки в `hls_config.cfg`:

```ini
part=xc7z020clg484-1
flow_target=vivado
package.output.format=ip_catalog
clock=10ns
clock_uncertainty=12%
syn.top=lab1_z1
```

## Директива цикла

Для цикла `internal_loop` конвейеризация должна быть отключена:

```cpp
#pragma HLS PIPELINE off
```

То есть:

```cpp
internal_loop:
for (int i = 0; i < ROWS; ++i) {
#pragma HLS PIPELINE off
    // ...
}
```

## Параметры Co-simulation

Для получения Timeline Trace и временной диаграммы удобно включить:

```ini
cosim.enable_dataflow_profiling=1
cosim.trace_level=all
cosim.wave_debug=1
```

RTL simulator:

```text
xsim
```

RTL language:

```text
verilog
```

## Порядок запуска

1. Создать новый **HLS Component**.
2. Добавить `lab1_z1.cpp` и `lab1_z1.h` как design sources.
3. Добавить `lab1_z1_test.cpp` как test bench.
4. Указать `lab1_z1` как **Top Function**.
5. Проверить `PIPELINE OFF` для `internal_loop`.
6. Запустить **C Simulation** — тест должен завершиться успешно.
7. Запустить **C Synthesis**.
8. Проверить Synthesis Report и Schedule Viewer.
9. Запустить **C/RTL Co-simulation**.
10. Проверить Timeline Trace и Wave Viewer.
11. Выполнить **Package** в Vivado IP.
12. Выполнить **Implementation**: Synthesis → Placement → Routing.

## Контрольная проверка testbench

Чтобы убедиться, что testbench действительно обнаруживает ошибку, можно временно изменить строку:

```cpp
outArr[i] = mult + sumBC;
```

на:

```cpp
outArr[i] = mult + sumBC + 1;
```

После C Simulation тест должен завершиться с ошибками. После проверки обязательно вернуть правильную формулу.

## Референсные результаты — Vitis 2025.2

Ниже приведены результаты, полученные в Vitis/Vivado 2025.2. В другой версии инструмента отдельные оценки могут немного отличаться.

### C Synthesis

| Параметр | Значение |
|---|---:|
| Function Latency | `16` тактов / `160 ns` |
| Function Interval | `17` тактов |
| `internal_loop` Latency | `15` тактов / `150 ns` |
| Iteration Latency | `5` тактов / `50 ns` |
| Trip Count | `3` |
| Pipeline | `off` |
| LUT | `90` |
| FF | `74` |
| DSP | `1` |
| BRAM | `0` |
| URAM | `0` |

При `ROWS = 3` и `PIPELINE OFF`:

```text
3 итерации × 5 тактов = 15 тактов = 150 ns
```

### Co-simulation

```text
Status: PASS
Latency: 16 тактов
Interval: 17 тактов
Stalling Time: 0%
```

### Post-Implementation

| Параметр | Значение |
|---|---:|
| Slice | `8` |
| LUT | `23` |
| FF | `10` |
| DSP | `1` |
| BRAM | `0` |
| URAM | `0` |
| Required clock period | `10.000 ns` |
| Achieved clock period | `2.154 ns` |
| WNS | `≈ 7.96 ns` |
| Timing | `met` |

## Примечание о разных версиях Vitis

Исходный код и функциональный результат должны сохраняться, однако значения `LUT`, `FF`, `DSP`, `Latency`, `Interval` и оценка временных параметров могут отличаться между версиями Vitis/Vivado из-за изменений алгоритмов HLS-планирования, оптимизации, synthesis, placement и routing.

Для проверки корректности в первую очередь ориентироваться на:

```text
C Simulation      -> PASS
C/RTL Co-simulation -> PASS
```

и на соответствие вычисляемой формуле задания.
