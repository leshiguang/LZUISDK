#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "LSDeviceManagerFramework.h"
#import "LSDMConstants.h"
#import "AlarmData+CoreDataClass.h"
#import "AlarmData+CoreDataProperties.h"
#import "LSLocalDataHelper+AlarmData.h"
#import "LSLocalDataHelper+Device.h"
#import "LSLocalDataHelper+DeviceSetting.h"
#import "LSLocalDataHelper+DeviceStatus.h"
#import "LSLocalDataHelper+DeviceUser.h"
#import "CoreDataManager.h"
#import "Device+CoreDataClass.h"
#import "Device+CoreDataProperties.h"
#import "DeviceSetting+CoreDataClass.h"
#import "DeviceSetting+CoreDataProperties.h"
#import "DeviceStatus+CoreDataClass.h"
#import "DeviceStatus+CoreDataProperties.h"
#import "DeviceUser+CoreDataClass.h"
#import "DeviceUser+CoreDataProperties.h"
#import "DMDataCenter.h"
#import "LSDeviceManagerDBModels.h"
#import "LSLocalDataHelper.h"
#import "NSMutableArray+LSTraverseProerty.h"
#import "LSBleExceptionRecord.h"
#import "LSDeviceManagerDataModels.h"
#import "LSEApplyDeviceIdInfo.h"
#import "LSEDeviceInfo.h"
#import "LSEDialProertyValue.h"
#import "LSEManufacturerInfo.h"
#import "LSEProductInfo.h"
#import "DeviceUnitCfg.h"
#import "DeviceUserInfo.h"
#import "HeartRateCfg.h"
#import "HMSplashesCfg.h"
#import "LSDeviceManagerDeviceCfgs.h"
#import "LSEHRSection.h"
#import "LSEScaleTargetCfg.h"
#import "LSEScaleUserInfoCfg.h"
#import "LSESportHRSectionCfg.h"
#import "WiFiCfg.h"
#import "BloodPressureReceiveDataDelegate.h"
#import "LSDeviceManager+BloodPreasure.h"
#import "lzReceiveDataManager.h"
#import "lzReceiveDataSqlite.h"
#import "lzReceiveDataSqliteModel.h"
#import "BraceletReceiveDataDelegate.h"
#import "BraceletReceiveDataState.h"
#import "LSDeviceManager+Calories.h"
#import "LSDeviceManager+GPS.h"
#import "LSDeviceManager+Heartrate.h"
#import "LSDeviceManager+Sleep.h"
#import "LSDeviceManager+Sport.h"
#import "LSDeviceManager+Steps.h"
#import "BraceletReceiveData.h"
#import "HeartRateData.h"
#import "HRSectionStatisticData.h"
#import "LSBaseSportData.h"
#import "RunningCaloriesData.h"
#import "RunningData.h"
#import "SleepingData.h"
#import "SportHeartRateData.h"
#import "SportStateData.h"
#import "SwimmingData.h"
#import "UWalkingData.h"
#import "WalkingData.h"
#import "WeatherData.h"
#import "LSSyncHeartRateRequest.h"
#import "LSSyncRunCaloriesRequest.h"
#import "LSSyncSportHeartRateRequest.h"
#import "LSUploadAerobicsRequest.h"
#import "LSUploadBindStepRequest.h"
#import "LSUploadeBindSleepRequest.h"
#import "LSUploadRunRecordRequest.h"
#import "LSBraceletSettingState.h"
#import "LSDeviceManager+BraceletSetting.h"
#import "AlarmClockCfg.h"
#import "EncourageCfg.h"
#import "HeartrateSwitchCfg.h"
#import "LSEAutomaticSportstypeCfg.h"
#import "LSEDialModelCfg.h"
#import "LSEHRRemindCfg.h"
#import "LSESportsInfoCfg.h"
#import "LSESwimmingInfoCfg.h"
#import "LSEWeatherData.h"
#import "LSSportItemsCfg.h"
#import "LZEventRemindCfg.h"
#import "MessageReminderCfg.h"
#import "NightModeCfg.h"
#import "NoDisturbModeCfg.h"
#import "ScreenContentCfg.h"
#import "ScreenDirectionCfg.h"
#import "SedentaryCfg.h"
#import "StepTargetCfg.h"
#import "TimeFormatCfg.h"
#import "WearStateCfg.h"
#import "LSBraceletSyncDataManager.h"
#import "LSDeviceManager+Bind.h"
#import "LSDeviceManager+Connect.h"
#import "LSUploadTimezoneManager.h"
#import "LSUploadTimezoneRequest.h"
#import "LSDeviceComponentDelegate.h"
#import "LSDeviceManager+CommonDeviceUpload.h"
#import "LSDeviceManager+Commons.h"
#import "LSDeviceManager+Device.h"
#import "LSDeviceManager+DeviceCommand.h"
#import "LSDeviceManager+Settings.h"
#import "LSDeviceManager+Sync.h"
#import "LSDeviceManager.h"
#import "LSDeviceManagerInfoDataSource.h"
#import "LSDeviceManager+OTA.h"
#import "LSDeviceManager+ScalesSetting.h"
#import "LSDeviceManager+Weight.h"
#import "ScalesReceiveDataDelegate.h"
#import "WeightData.h"
#import "LSUploadBtDeviceWeightRequest.h"
#import "LSScalesSyncDataManager.h"
#import "LSDeviceManager+WifiConfig.h"
#import "HFSmartLink.h"
#import "HFSmartLinkDeviceInfo.h"
#import "LSWifiConfig.h"

FOUNDATION_EXPORT double LSDeviceManagerFrameworkVersionNumber;
FOUNDATION_EXPORT const unsigned char LSDeviceManagerFrameworkVersionString[];

