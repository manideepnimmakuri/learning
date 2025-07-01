# ANDROID 

## What is embedded system?

  the system whic is designed to do specific task is known as embedded system.
## Advantages

- Cost efficiency
- High quality 

## Disadvantages

- Development cost 
- Complex design

## types of embeddeed system

1. **saftey-critical , non-complex application**
 - It is used handle critial jobs
 - uses priority based scheduling
 - runs on RTOS (example : FreeRTOS)

2.**non safety ,complex application** 
 - it handles featues-rich, non time critical tasks 
 - it uses fair schedling process
 - runs on general purpose os ( linux,android)

## what does embedded android engineer does?

for embedded system , a regular board is taken and unwanted ports (or) pheripherals are removed. so as a embedded engineer we need to build custom OS from the general OS.

## Android 
 - it is started as camera OS , acquired in 2005
 - it uses Bionic c library
 - it requres less memory and CPU hungry
 - it uses CFS scheduling
 - It has low memory killer :- when multiple process runs at a time then for better perforance android kills low priority process 
 - It uses Binder IPC instead of V IPc

