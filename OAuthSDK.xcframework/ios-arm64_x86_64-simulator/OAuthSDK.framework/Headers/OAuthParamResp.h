//
//  OAuthParamResp.h
//  OAuthSDK
//
//  Created by dong on 2024/6/25.
//  返回授权所需参数

#import <Foundation/Foundation.h>

@interface OAuthParamResp : NSObject

/** access_token */
@property (nonatomic, copy) NSString *access_token;

/** expires_in */
@property (nonatomic, assign) NSInteger expires_in;

/** refresh_token */
@property (nonatomic, copy) NSString *refresh_token;

/** openid */
@property (nonatomic, copy) NSString *openid;

/** scope */
@property (nonatomic, copy) NSString *scope;

/** unionid */
@property (nonatomic, copy) NSString *unionid;

@end
