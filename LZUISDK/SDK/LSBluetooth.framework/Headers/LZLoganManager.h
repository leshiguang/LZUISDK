//
//  LoganManager.h
//  Logan
//
//  Created by wm on 2020/11/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define LOGMSG(msg) [NSString stringWithFormat:@"Method: %s, Line: %d, Msg: %@", __FUNCTION__, __LINE__, msg]

typedef enum : NSUInteger {
    LOGAN_LZ_UNKNOWN,
    LOGAN_LZ_CRASH,             //crash日志
    LOGAN_LZ_CODE_LEVEL,        //代码级日志
    LOGAN_LZ_NETWORK_LEVEL,     //网络级日志
    LOGAN_LZ_PUSH,              //PUSH日志
    LOGAN_LZ_USER_ACTION,       //用户行为日志
} LOGAN_LZ_TYPE;

@interface LZLoganManager : NSObject

/// 是否允许把log写入文件
@property (nonatomic, assign) BOOL enableWriteToFile;
/// 是否在控制台输出log，默认关闭
@property (nonatomic, assign) BOOL enablePrint;

+ (instancetype)shareInstance;

/// 日志上报
/// 调用示例 [[LoganManager shareInstance] lzAddLog:LOGAN_LZ_API msg:LOGMSG(msg)];
/// @param logType 上报日志类型
/// @param msg  上报日志
- (void)lzAddLog:(LOGAN_LZ_TYPE)logType msg:( NSString * _Nonnull )msg;

/// 查看所有日志文件信息
- (NSDictionary *)lzLogFileInformation;

/// 上传日志
/// @param userId 用户id
- (void)lzUploadLog:(NSString * _Nonnull)userId;


- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
