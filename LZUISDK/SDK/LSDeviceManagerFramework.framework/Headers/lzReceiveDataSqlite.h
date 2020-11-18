//
//  lzReceiveDataSqlite.h
//  LSDeviceManagerFrameworkTests
//
//  Created by wm on 2020/10/19.
//  Copyright © 2020 Wenzheng Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "lzReceiveDataSqliteModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface lzReceiveDataSqlite : NSObject

// 创建数据库
- (void)lzCreateDB;

// 插入数据
- (void)lzInsertDataWithModelAry:(NSArray <lzReceiveDataSqliteModel *> *)ary;

// 查询未同步数据
- (NSArray <lzReceiveDataSqliteModel *> *)lzSelectSqlDataWithUserId:(NSString *)userId datatype:(int)dataType;

// 删除数据
- (void)lzDeleteSqlWith:(NSArray <lzReceiveDataSqliteModel *> *)ary;

@end

NS_ASSUME_NONNULL_END
