//
//  OAuthSendAuthReq.h
//  OAuthSDK
//
//  Created by dong on 2024/6/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OAuthSendAuthReq : NSObject

/** appKey */
@property (nonatomic, copy) NSString *appId;

/** appSecret */
@property (nonatomic, copy) NSString *appSecret;

///** 网站应用=web，ios应用=ios，android应用=android，桌面应用=desktop */
@property (nonatomic, copy) NSString *appType;

/** 跳转地址(urlencode)，成功后页面将跳转至 redirect_uri/?code=CODE&state=STATE */
@property (nonatomic, copy) NSString *redirectUrl;

/** 作用域 snsapi_base 静默授权(只返回openid)、snsapi_userinfo弹窗授权(返回用户基本信息) */
@property (nonatomic, copy) NSString *scope;

/** 第三方程序本身用来标识其请求的唯一性 */
@property (nonatomic, copy) NSString *state;

/** （可选参数）响应类型，默认redirect，redirect=重定向方式，code=返回json */
@property (nonatomic, copy) NSString *responseType;

+ (NSString *)convertToJSON:(OAuthSendAuthReq *)req;

@end

NS_ASSUME_NONNULL_END
