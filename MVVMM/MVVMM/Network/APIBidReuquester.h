//
//  APIBidReuquester.h
//  MVVMM
//
//  Created by Peter on 16/5/2.
//  Copyright © 2016年 Pete. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface APIBidReuquester : NSObject

- (void)requestBidWithResult:(void(^)(id result, NSError *error))block;

@end
