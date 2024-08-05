//
//  OAuthNetworkManager.h
//  OAuthSDK
//
//  Created by dong on 2024/6/20.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, HTTPMethod) {
    HTTPMethodGET,
    HTTPMethodPOST,
    HTTPMethodPUT,
    HTTPMethodDELETE
};

@interface OAuthNetworkManager : NSObject

@property (nonatomic, strong) NSString *baseUrl; 
@property (nonatomic, strong) NSMutableDictionary *defaultHeaders;

+ (instancetype)sharedManager;

- (void)requestWithUrlPath:(NSString *)urlPath
                       url:(NSString *)url
                    method:(HTTPMethod)method
                    params:(NSDictionary<NSString *, id> *)params
                   headers:(NSDictionary<NSString *, NSString *> *)headers
                completion:(void (^)(NSData *data, NSURLResponse *response, NSError *error))completion;

@end
