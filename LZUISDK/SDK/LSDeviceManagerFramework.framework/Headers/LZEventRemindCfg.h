//
//  LZEventRemindCfg.h
//  LSDeviceManagerFramework
//
//  Created by wm on 2020/12/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, LSVibrationType) {
    LSVibrationTypeContinuous = 0x00,             ///< 持续震动
    LSVibrationTypeIntermittentDefault = 0x01,      ///< 间歇震动，震动强度不变
    LSVibrationTypeIntermittentWeakToStrong = 0x02, ///< 间歇震动，震动强度由小变大
    LSVibrationTypeIntermittentStrongToWeak = 0x03, ///< 间歇震动，震动强度由大变小
    LSVibrationTypeCycle = 0x04, ///< 间歇震动，震动强度大小循环
};

@interface LZEventRemindCfg : NSObject

/// 事件提醒序号
@property (nonatomic, assign) int index;
@property (nonatomic, assign) BOOL isOpen;

/// 0000000 0表示关1表示开
@property (nonatomic, copy) NSString *weeks;
@property (nonatomic, assign) int hour;
@property (nonatomic, assign) int minute;
@property (nonatomic, assign) LSVibrationType shockType;
@property (nonatomic, assign) int shockTime;
@property (nonatomic, assign) int shockLevel1;
@property (nonatomic, assign) int shockLevel2;
@property (nonatomic, copy) NSString *remindStr;
 
@end

NS_ASSUME_NONNULL_END
