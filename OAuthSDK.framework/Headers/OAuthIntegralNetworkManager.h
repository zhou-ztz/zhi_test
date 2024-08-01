//
//  OAuthIntegralNetworkManager.h
//  OAuthSDK
//
//  Created by 深圳壹艺科技有限公司-zhi on 2024/6/24.
//

#import <Foundation/Foundation.h>
#import <OAuthSDK/OAuthSDK.h>
#import <OAuthSDK/OAuthNetworkManager.h>

@interface OAuthIntegralNetworkManager : NSObject

+ (instancetype)sharedManager;

/// 积分记录列表
/// integralList 积分消费记录列表
/// error 失败，error = nil 成功
- (void)fetchIntegralHistoryWithOAuthParamPionts:(OAuthParamPionts *)param
                      completion:(void (^)(NSArray<IntegralList *> * integralList, NSError * error))completion;

///获取积分余额
///返回  points 用户积分
///error 失败，error = nil 成功
- (void)fetchIntegralBalanceWithCompletion:(void (^)(NSString *points, NSError *error))completion;

/// 用户使用积分
/// amount - 使用的积分数额
/// error 失败，error = nil 成功
/// piontsUse 用户积分信息
- (void)integralBalanceWithAmount:(NSString *)amount
                       completion:(void (^)(PiontsUse *piontsUse, NSError *error))completion;

@end


