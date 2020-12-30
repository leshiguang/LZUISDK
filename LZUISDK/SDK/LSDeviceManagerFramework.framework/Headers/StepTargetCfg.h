//
//  StepTargetCfg.h
//  LSBluetooth-Library
//
//  Created by Dylan on 16/1/19.
//  Copyright © 2016年 Lifesense. All rights reserved.
//  步数目标模型

#import <Foundation/Foundation.h>

//目标设置
typedef NS_ENUM(NSUInteger, LZBraceletSportTargetType) {
    LZBraceletSportTargetTypeUnknown,
    LZBraceletSportTargetTypeStepNum = 1, ///< 步数
    LZBraceletSportTargetTypeCalories, ///< 卡路里
    LZBraceletSportTargetTypeDistance, ///< 距离
};

@interface StepTargetCfg : NSObject

/// 步数
@property(nonatomic, assign) NSInteger step;

@property(nonatomic, assign) BOOL isOpen;

@property(nonatomic, assign) LZBraceletSportTargetType type;

@end
