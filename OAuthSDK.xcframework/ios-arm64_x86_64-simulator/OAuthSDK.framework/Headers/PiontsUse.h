//
//  PiontsUse.h
//  OAuthSDK
//
//  Created by 深圳壹艺科技有限公司-zhi on 2024/6/25.
//

#import <Foundation/Foundation.h>

@interface PiontsUse : NSObject
///交易ID
@property (nonatomic, copy) NSString *transaction_id;
///价格
@property (nonatomic, copy) NSString *price;
///商户ID
@property (nonatomic, copy) NSString *merchant_id;
///需要支付的金额
@property (nonatomic, copy) NSString *pay_amount;
///支付抵扣金额，计算规则:  支付金额 / 抵扣比率
@property (nonatomic, copy) NSString *offset_amount;
///支付抵扣金额换算的积分，计算规则：支付抵扣金额 / 金额换算积分比率
@property (nonatomic, copy) NSString *offset_points;
///RL用户
@property (nonatomic) NSInteger user_id;
///用户积分
@property (nonatomic) CGFloat points;

@end

