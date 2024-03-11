//
//  TtalkSDKManager.h
//  TtalkSDK
//
//  Created by 侯弥 on 2022/5/6.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@protocol TtalkSDKManagerDelegate <NSObject>

-(void)TtalkSDKManagerReceviceNewMessage;
@end

@interface TtalkSDKManager : NSObject

@property(nonatomic,strong)id<TtalkSDKManagerDelegate>delegate;

@property(nonatomic,strong)NSString *DataCenter_Id;
@property(nonatomic,strong)NSString *merchantId;

@property(nonatomic,strong)NSString *formTemplateId;//询前表单id
@property (nonatomic, assign) BOOL customerFormInfoSelectFlag;
@property(nonatomic,strong)NSString *accessMethodId;//接入方式id
@property(nonatomic,strong)NSString *merchantKey;

@property(nonatomic,strong)NSString *sdkDomain;
@property(nonatomic,strong)NSString *icon;

@property(nonatomic,strong)NSString *houseId;
@property(nonatomic,strong)NSString *deviceId;
@property(nonatomic,strong)NSString *meetWord;//欢迎语
@property(nonatomic,strong)NSArray *bottomQuestionArr;
@property(nonatomic,strong)NSArray *langNameArr;
@property(nonatomic,strong)NSArray *langCodeArr;
@property(nonatomic,strong) NSString *ip;
@property(nonatomic,strong) NSString *scheme;
@property(nonatomic,strong) NSString *domain;
@property (nonatomic, assign) int tcpPort;
@property (nonatomic, assign) int websocketPort;
@property (nonatomic, assign) BOOL isInRoom;
@property (nonatomic, assign) BOOL rate;//评价

@property(nonatomic,strong)NSDictionary *MerchantAccessMethod;
@property(nonatomic,strong)NSDictionary *systemSettingVO;
@property(nonatomic,strong)NSArray *promotionMsgList;


@property(nonatomic,strong)NSString *lang;//语言
@property(nonatomic,strong)NSString *guestName;//
@property(nonatomic,strong)NSString *devNewId;//




+ (instancetype)manager;
+ (instancetype)allocWithZone:(struct _NSZone *)zone;
- (id)copyWithZone:(nullable NSZone *)zone;
- (id)mutableCopyWithZone:(nullable NSZone *)zone;
-(void)receviceUnreadMsg;
-(void)setupIm;
-(UIViewController *)getCustomerController;
-(void)setupSDKWithDomain:(NSString *)sdkDomain andMerchantKey:(NSString *)merchantKey;
-(void)setupSDKWithDomain:(NSString *)sdkDomain andMerchantKey:(NSString *)merchantKey andMerchantId:(NSString *)merchantId andDataCenter_Id:(NSString *)dataCenter_Id;

-(void)setupSDKWithDomain:(NSString *)sdkDomain andMerchantAccessMethodId:(NSString *)accessMethodId;

@end

NS_ASSUME_NONNULL_END
