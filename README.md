# CuppaOS
A Hobby "Operating System" by k3rnl

This project is a learning exercise with the following objectives:
	- Learn more about the ARM Cortex microprocessor architecture
	- Gain a deeper understanding of Operating System design

As a joke, at some point I would also like to create a programming language called Coffee to complement the name of this Operating System. We could then say "CuppaOS was written in the Coffee Programming Language".

This operating system is written for the [Raspberry Pi 2 Model B](https://www.raspberrypi.org/products/raspberry-pi-2-model-b/?resellerType=home) which run with an ARM Cortex-A7 CPU.

qemu-arm-system -machine raspi2

# Project Resources
- [OSDev Forum and Wiki](https://forum.osdev.org/)
- ARM MCU Specific Documentation
  - [ARM Cortex-A7 Series Technical Reference Manual (TRM)](https://s3.us-west-2.amazonaws.com/secure.notion-static.com/912d8595-a7c1-42c7-8351-be3934543183/DDI0464F_cortex_a7_mpcore_r0p5_trm.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAT73L2G45O3KS52Y5%2F20201109%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20201109T110745Z&X-Amz-Expires=86400&X-Amz-Signature=e28579ff787a8cc82ef5ad2069a6cb6deaeb870867526a62eb75580e8457e9f2&X-Amz-SignedHeaders=host&response-content-disposition=filename%20%3D%22DDI0464F_cortex_a7_mpcore_r0p5_trm.pdf%22)
  - [ARM Cortex-A Series Programmer's Guide](https://s3.us-west-2.amazonaws.com/secure.notion-static.com/74c58aeb-d7ee-485b-bb6f-ffda55b440f7/DEN0013D_cortex_a_series_PG.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAT73L2G45O3KS52Y5%2F20201109%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20201109T110842Z&X-Amz-Expires=86400&X-Amz-Signature=1dd5cfab348afa15e0df4a9c143478d9f704b494baebca2019a017a99b2c2a1c&X-Amz-SignedHeaders=host&response-content-disposition=filename%20%3D%22DEN0013D_cortex_a_series_PG.pdf%22)
  - [ARM Assembly Online Reference](https://www.keil.com/support/man/docs/armasm/armasm_dom1361289850039.htm)
  - [ARM: How to Write a Bootloader](https://www.keil.com/support/docs/3913.htm)
  - [Cambridge Tutorial on OS Dev for the Raspberry Pi](https://www.cl.cam.ac.uk/projects/raspberrypi/tutorials/os/)
