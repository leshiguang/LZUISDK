//
//  LSBLEConnectorDelegate.h
//  LifesenseBle
//
//  Created by lifesense on 14-8-1.
//  Copyright (c) 2014年 lifesense. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <CoreBluetooth/CBPeripheral.h>
#import <CoreBluetooth/CBService.h>
#import "LSBBleExceptionRecord.h"

@protocol LSBleConnectorDelegate <NSObject>

@optional

//扫描结果
-(void)bleConnectorDidScanResults:(CBPeripheral *)peripheral broadcastName:(NSString *)broadcastName serviceLists:(NSArray *)services manufacturerData:(NSString *)manufacturerData rssi:(NSNumber *)rssi;

//开始连接
- (void)bleConnectorBeginConnect:(CBPeripheral *)peripheral;

//连接失败
-(void)bleconnectorDidFailtoConnectPeripheralGatt;

//连接成功
-(void)bleConnectorDidConnectedPeripheralGatt:(CBPeripheral *)targetPeripheral;

//断开连接
-(void)bleConnectorDidDisConnectedPeripheralGatt:(CBPeripheral *)peripheral error:(NSError *)error;

//发现服务号
//-(void)bleConnectorDidDiscoveredGattServices:(NSArray *)gattServices;

//发现特征号
//-(void)bleConnectorDidDiscoveredCharacteristicForService:(CBService *)service;

//特征改变，有数据上传
//-(void)bleConnectorDidUpdateValueForCharacteristic:(CBCharacteristic *)characteristic;

//写数据后回调
//-(void)bleConnectorDidWrittenValueForCharacteristic:(CBCharacteristic *)characteristic;

/**
 异常记录
 
 @param record 记录
 */
- (void)onBleConnectorExceptionRecord:(LSBBleExceptionRecord *)record;
//连接超时回调
@optional
-(void)connectTimeOut;
@end
