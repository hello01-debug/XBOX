#pragma once

#include <emu/pci/pci.h>
#include <emu/io/IoBus.h>

// We put this class in this folder because it's not important enough
// To have its own folder

class ISA : public PCIDevice, public IoDev
{
private:
	IoBus* iobus;

	uint32_t cur_io_addr = 0x8000;
public:
	ISA(PCIBus* bus, IoBus* iobus);

	void RemapBAR(int bar) override;
};