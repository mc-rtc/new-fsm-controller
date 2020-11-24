#include "NewFSMController_Initial.h"

#include "../NewFSMController.h"

void NewFSMController_Initial::configure(const mc_rtc::Configuration & config) {}

void NewFSMController_Initial::start(mc_control::fsm::Controller & ctl_)
{
  auto & ctl = static_cast<NewFSMController &>(ctl_);
}

bool NewFSMController_Initial::run(mc_control::fsm::Controller & ctl_)
{
  auto & ctl = static_cast<NewFSMController &>(ctl_);
  output("OK");
  return true;
}

void NewFSMController_Initial::teardown(mc_control::fsm::Controller & ctl_)
{
  auto & ctl = static_cast<NewFSMController &>(ctl_);
}

EXPORT_SINGLE_STATE("NewFSMController_Initial", NewFSMController_Initial)
