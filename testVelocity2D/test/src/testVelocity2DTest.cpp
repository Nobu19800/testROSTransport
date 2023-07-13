﻿// -*- C++ -*-
// <rtc-template block="description">
/*!
 * @file  testVelocity2DTest.cpp
 * @brief Test TimedVelocity2D OutPort Component (test code)
 *
 * LGPL
 *
 */
// </rtc-template>

#include "testVelocity2DTest.h"

// Module specification
// <rtc-template block="module_spec">
#if RTM_MAJOR_VERSION >= 2
static const char* const testvelocity2d_spec[] =
#else
static const char* testvelocity2d_spec[] =
#endif
  {
    "implementation_id", "testVelocity2DTest",
    "type_name",         "testVelocity2DTest",
    "description",       "Test TimedVelocity2D OutPort Component",
    "version",           "1.0.0",
    "vendor",            "AIST",
    "category",          "Test",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    // Configuration variables
    "conf.default.speed_x", "0.0",
    "conf.default.speed_y", "0.0",
    "conf.default.speed_r", "0.0",

    // Widget
    "conf.__widget__.speed_x", "slider.0.1",
    "conf.__widget__.speed_y", "slider.0.1",
    "conf.__widget__.speed_r", "slider.0.1",
    // Constraints
    "conf.__constraints__.speed_x", "-10.0<x<10.0",
    "conf.__constraints__.speed_y", "-10.0<x<10.0",
    "conf.__constraints__.speed_r", "-3.0<x<3.0",

    "conf.__type__.speed_x", "double",
    "conf.__type__.speed_y", "double",
    "conf.__type__.speed_r", "double",

    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
testVelocity2DTest::testVelocity2DTest(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_outIn("out", m_out)

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
testVelocity2DTest::~testVelocity2DTest()
{
}



RTC::ReturnCode_t testVelocity2DTest::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  addInPort("out", m_outIn);
  
  // Set OutPort buffer
  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // Bind variables and configuration variable
  bindParameter("speed_x", m_speed_x, "0.0");
  bindParameter("speed_y", m_speed_y, "0.0");
  bindParameter("speed_r", m_speed_r, "0.0");
  // </rtc-template>
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t testVelocity2DTest::onFinalize()
{
  return RTC::RTC_OK;
}
*/


//RTC::ReturnCode_t testVelocity2DTest::onStartup(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t testVelocity2DTest::onShutdown(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t testVelocity2DTest::onActivated(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t testVelocity2DTest::onDeactivated(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


RTC::ReturnCode_t testVelocity2DTest::onExecute(RTC::UniqueId /*ec_id*/)
{
  return RTC::RTC_OK;
}


//RTC::ReturnCode_t testVelocity2DTest::onAborting(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t testVelocity2DTest::onError(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t testVelocity2DTest::onReset(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t testVelocity2DTest::onStateUpdate(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t testVelocity2DTest::onRateChanged(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


bool testVelocity2DTest::runTest()
{
    return true;
}


extern "C"
{
 
  void testVelocity2DTestInit(RTC::Manager* manager)
  {
    coil::Properties profile(testvelocity2d_spec);
    manager->registerFactory(profile,
                             RTC::Create<testVelocity2DTest>,
                             RTC::Delete<testVelocity2DTest>);
  }
  
}
