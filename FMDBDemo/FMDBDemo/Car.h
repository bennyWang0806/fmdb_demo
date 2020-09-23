//
//  Car.h
//  FMDBDemo
//
//  Created by admin on 16/3/21.
//  Copyright © 2017年 admin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Car : NSObject
/**
 *  所有者
 */
@property(nonatomic,strong ) NSNumber *own_id;

/**
 *  车的ID
 */
@property(nonatomic,strong) NSNumber *car_id;


@property(nonatomic,copy) NSString *brand;

@property(nonatomic,assign) NSInteger price;


@end
