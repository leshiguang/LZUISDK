//
//  LSDeviceManager+Common.h
//  LSDeviceManagerFrameworkTests
//
//  Created by alex.wu on 2019/9/9.
//  Copyright © 2019 Wenzheng Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LSDeviceManager.h"
#import <LSNetwork_iOS/LSBaseRequest.h>
#import <LSNetwork_iOS/LSJSonResponse.h>
NS_ASSUME_NONNULL_BEGIN

@interface LSDeviceManager(Sync)


/// 从服务器同步设备信息
/// @param completion 同步结果回调
-(void)syncToServerCompletion:(void(^)(int code,NSString *msg))completion;


-(void)syncDeviceStatusToServerCompletion:(void(^)(int code,NSString *msg))completion;


-(void)syncDeviceSettingToServerCompletion:(void(^)(int code,NSString *msg))completion;


-(void)syncDeviceToServerCompletion:(void(^)(int code,NSString *msg))completion;

-(void)syncFromServerCompletion:(void(^)(int code,NSString *msg))completion;

- (void)syncDeviceLastUploadTime:(NSString *)deviceId completion:(void(^)(BOOL bSuccess, Device *device))completion;

- (void)sendRequest:(LSBaseRequest *)request
completeWithResponse:(void (^)(NSURLSessionDataTask *task, NSDictionary *resultDic))completeBlock
failureWithResponse:(void (^)(NSURLSessionDataTask *task, NSError *error))failureBlock;
@end

NS_ASSUME_NONNULL_END
