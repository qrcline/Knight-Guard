# THIS FILE IS AUTOMATICALLY GENERATED
# Project: D:\GIT\Knight Guard\PSoC6_PWM_MotorControll\PSoC6_PWM_MotorControll.cydsn\PSoC6_PWM_MotorControll.cyprj
# Date: Sun, 09 Feb 2020 23:24:59 GMT
#set_units -time ns
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyClk_LF} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyFLL} -period 10 -waveform {0 5} [list [get_pins {ClockBlock/fll}]]
create_clock -name {CyClk_HF0} -period 10 -waveform {0 5} [list [get_pins {ClockBlock/hfclk_0}]]
create_clock -name {CyClk_Fast} -period 10 -waveform {0 5} [list [get_pins {ClockBlock/fastclk}]]
create_clock -name {CyClk_Peri} -period 20 -waveform {0 10} [list [get_pins {ClockBlock/periclk}]]
create_generated_clock -name {CyClk_Slow} -source [get_pins {ClockBlock/periclk}] -edges {1 2 3} [list [get_pins {ClockBlock/slowclk}]]
create_generated_clock -name {SPI_1_SCBCLK} -source [get_pins {ClockBlock/periclk}] -edges {1 7 15} [list [get_pins {ClockBlock/ff_div_1}]]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/periclk}] -edges {1 2501 5001} [list [get_pins {ClockBlock/ff_div_11}] [get_pins {ClockBlock/ff_div_18}]]
create_generated_clock -name {Clock_2} -source [get_pins {ClockBlock/periclk}] -edges {1 51 101} [list [get_pins {ClockBlock/ff_div_12}]]
create_generated_clock -name {UART_1_SCBCLK} -source [get_pins {ClockBlock/periclk}] -edges {1 37 73} [list [get_pins {ClockBlock/ff_div_5}]]
create_clock -name {CyPeriClk_App} -period 20 -waveform {0 10} [list [get_pins {ClockBlock/periclk_App}]]
create_clock -name {CyIMO} -period 125 -waveform {0 62.5} [list [get_pins {ClockBlock/imo}]]


# Component constraints for D:\GIT\Knight Guard\PSoC6_PWM_MotorControll\PSoC6_PWM_MotorControll.cydsn\TopDesign\TopDesign.cysch
# Project: D:\GIT\Knight Guard\PSoC6_PWM_MotorControll\PSoC6_PWM_MotorControll.cydsn\PSoC6_PWM_MotorControll.cyprj
# Date: Sun, 09 Feb 2020 23:24:36 GMT
