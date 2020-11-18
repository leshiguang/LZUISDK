//
//  LSBluetoothUIManager.h
//  KMNavigationBarTransition
//
//  Created by wm on 2020/9/4.
//

typedef enum : NSUInteger {
    LSBluetoothResultTypeSusses, //成功
    LSBluetoothResultTypeFaile   //失败
} LSBluetoothResultType;

#import <Foundation/Foundation.h>
#import "LSBluetoothUIConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface LSBluetoothUIManager : NSObject
+ (instancetype)shareInstance;

@property (nonatomic, assign) LSBluetoothResultType resultType;

#pragma mark - 初始化Api


/// 初始化
/// @param accuountInfo 账号信息
- (void)initBluetoothUISDK:(LSBluetoothUIAccountInfo *)accuountInfo;

/// 更新用户信息
/// @param userInfo 用户信息
- (void)updateUserInfo:(LSBluetoothUIUserInfo *)userInfo completion:(void(^)(LSBluetoothResultType resultType))completion;

#pragma mark - 调用乐智界面Api

/// 设备列表页面
- (UIViewController *)lsPageDeviceList;
/// 我的设备页面
- (UIViewController *)lsPageBindDeviceList;
/// 打开体重页面
- (void)lsOpenWeightPage;
/// 血压页面
- (void)lsBloodpressurePage;
/// 心率页面
- (void)lsHeartRatePage;
/// 有氧能力
- (void)lsAerobicRatePage;
/// 睡眠
- (void)lsSleepRatePage;
/// 步数
- (void)lsStepPage;

#pragma mark - 版本

/// 获取当前版本号
- (NSString *)getVersion;

@end

NS_ASSUME_NONNULL_END
