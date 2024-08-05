//
//  OAuthParamPionts.h
//  OAuthSDK
//
//  Created by 深圳壹艺科技有限公司-zhi on 2024/6/28.
//

#import <Foundation/Foundation.h>

/**
  积分列表 param
  type   all:0,expenses:-1,income:1
  limit
  offset
 */

@interface OAuthParamPionts : NSObject

@property (nonatomic, copy) NSString * type;

@property (nonatomic, copy) NSString * limit;

@property (nonatomic, copy) NSString * offset;

@end

