//
//  LSAuthorization.h
//  LSAuthorization
//
//  Created by alex.wu on 2020/3/3.
//

#import <Foundation/Foundation.h>
#define lsw_authorize_device(appId, serviceId, serviceVersion, mac, model, block) [[LSAuthorization sharedInstance] authorizeDevice:appId andService:serviceId andVersion:serviceVersion andMac:mac andModel:model withBlock:block]
#define lsw_authorize(appId, serviceId, serviceVersion, block) [[LSAuthorization sharedInstance] authorize:appId andService:serviceId andVersion:serviceVersion withBlock:block]

#define NULLABLE_STRING(s) s ? s : @""
NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, LSAccessCode) {
    UN_KNOWN = -1,
    SUCCESS = 200,
    SERVER_ERROR = 500,
    UNCERFIFIED_BUNDLE = 20001,
    PARAMETER_ERROR = 20002,
    UNCERFIFIED_MODEL = 20003,
    ACTIVATION_EXCEED = 20004,
    INVALID_SERVICE = 20005,
    INVALID_DEVICE = 20006,
    INVALID_APPID = 20007
};

@interface LSAuthorization : NSObject

+(instancetype) sharedInstance;


/// 设备鉴权服务
/// @param serviceId 服务ID，由服务中心指定
/// @param serviceVersion 服务版本，由服务中心指定
/// @param mac 设备mac地址
/// @param complete 回调
-(void) authorizeDevice:(NSString *)appId andService:(NSString *)serviceId andVersion:(NSString *)serviceVersion andMac:(NSString *)mac andModel:(NSString *)model withBlock:(void (^)(LSAccessCode)) complete;


/// 通用服务鉴权接口，针对算法、SDK等
/// @param serviceId 服务ID，由服务中心指定
/// @param serviceVersion 服务版本
/// @param complete 回调
-(void) authorize:(NSString *)appId andService:(NSString *)serviceId andVersion:(NSString *)serviceVersion withBlock:(void (^)(LSAccessCode)) complete;


/// 上报时区
/// @param model model
/// @param mac mac地址
- (void)reportTimezone:(NSString *)model andMac:(NSString *)mac;


/// 第三方账号授权登录
/// @param appKey appkey
/// @param appSecret appSecret
/// @param associatedId 第三方账号
/// @param callback 授权信息回调
- (void)authorizeDevice:(NSString *)appKey appSecret:(NSString *)appSecret associatedId:(NSString *)associatedId callback:(nonnull void(^)(NSUInteger userId, NSString *accessToken))callback;

/// 第三方账号授权登录 old
/// @param tenantId 租户ID
/// @param subscriptionId 订阅ID
/// @param associatedId 第三方账号
/// @param callback 授权信息
- (void)authorize:(NSInteger)tenantId andSubscribe:(NSInteger)subscriptionId andThirdUserId:(nonnull NSString *)associatedId callback:(nonnull void(^)(NSUInteger userId, NSString *accessToken))callback;

@end

NS_ASSUME_NONNULL_END
