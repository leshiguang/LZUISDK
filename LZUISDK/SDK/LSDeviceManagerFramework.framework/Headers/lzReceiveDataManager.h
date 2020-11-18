//
//  lzReceiveDataManager.h
//  LSDeviceManagerFrameworkTests
//
//  Created by wm on 2020/11/9.
//  Copyright © 2020 Wenzheng Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BraceletReceiveDataState.h"
#import "WalkingData.h"
#import "SleepingData.h"
#import "HeartRateData.h"
#import "SportHeartRateData.h"
#import "LSBaseSportData.h"
#import "RunningCaloriesData.h"
#import "lzReceiveDataSqliteModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface lzReceiveDataManager : NSObject

+ (instancetype)shareInstance;

- (void)saveWalkingData:(NSArray <WalkingData *> *)dataAry dataType:(BraceletReceiveDataType)dataType;

- (void)saveSleepingData:(NSArray <SleepingData *> *)dataAry dataType:(BraceletReceiveDataType)dataType;

- (void)saveHeartRateData:(NSArray <HeartRateData *> *)dataAry dataType:(BraceletReceiveDataType)dataType;

- (void)saveSportHeartRateData:(NSArray <SportHeartRateData *> *)dataAry dataType:(BraceletReceiveDataType)dataType;

- (void)saveOxSportData:(NSArray <LSBaseSportData *> *)dataAry dataType:(BraceletReceiveDataType)dataType;

- (void)saveSportData:(NSArray <LSBaseSportData *> *)dataAry dataType:(BraceletReceiveDataType)dataType;

- (void)saveRunningCaloriesData:(NSArray <RunningCaloriesData *> *)dataAry dataType:(BraceletReceiveDataType)dataType;


/// check 未同步的手环数据
/// @param userId userId
/// @param dataType 数据枚举
/// @param block 未同步数据回调
- (void)checkUnsynchronizedDataForUserId:(NSString *)userId dataType:(BraceletReceiveDataType)dataType block:(void(^)(NSArray *ary))block;

@end

NS_ASSUME_NONNULL_END
