#pragma once

#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <boost/lexical_cast.hpp>
#include <openvr.h>
#include <windows.h>
class Overlay
{
public:

	virtual ~Overlay() {}

	virtual bool ShowOverlay() = 0;
	virtual void HideOverlay() = 0;
	virtual void handleEvent(const vr::VREvent_t& event) = 0;
	virtual void updateTexture() = 0;
	virtual void setOverlayMatrix(const vr::HmdMatrix34_t& relativePosition) = 0;
	virtual boost::uuids::uuid getOverlayUuid() const = 0;
};

