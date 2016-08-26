/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLConnectionChangesetSequenceServiceConfiguring.h>

@protocol NSObject;
@class FBConnectionPageLoadLimits, NSDictionary, FBGraphQLConnectionControllerConfiguration, FBGraphQLConnectionStoreConfiguration, NSString;

@interface FBGraphQLConnectionChangesetSequenceServiceConfigurationSetup : NSObject <FBGraphQLConnectionChangesetSequenceServiceConfiguring> {

	/*function pointer*/void* _connectionEdgeToModelTransformer;
	FBConnectionPageLoadLimits* _pageLoadLimits;
	NSDictionary* _pageLoadUserInfo;
	FBGraphQLConnectionControllerConfiguration* _connectionControllerConfiguration;
	FBGraphQLConnectionStoreConfiguration* _connectionStoreConfiguration;
	id<NSObject> _componentContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) /*function pointer*/void* connectionEdgeToModelTransformer;                                  //@synthesize connectionEdgeToModelTransformer=_connectionEdgeToModelTransformer - In the implementation block
@property (nonatomic,copy) FBConnectionPageLoadLimits * pageLoadLimits;                                                   //@synthesize pageLoadLimits=_pageLoadLimits - In the implementation block
@property (nonatomic,copy) NSDictionary * pageLoadUserInfo;                                                               //@synthesize pageLoadUserInfo=_pageLoadUserInfo - In the implementation block
@property (nonatomic,retain) FBGraphQLConnectionControllerConfiguration * connectionControllerConfiguration;              //@synthesize connectionControllerConfiguration=_connectionControllerConfiguration - In the implementation block
@property (nonatomic,retain) FBGraphQLConnectionStoreConfiguration * connectionStoreConfiguration;                        //@synthesize connectionStoreConfiguration=_connectionStoreConfiguration - In the implementation block
@property (nonatomic,retain) id<NSObject> componentContext;                                                               //@synthesize componentContext=_componentContext - In the implementation block
-(id<NSObject>)componentContext;
-(void)setComponentContext:(id<NSObject>)arg1 ;
-(void)setConnectionEdgeToModelTransformer:(/*function pointer*/void*)arg1 ;
-(void)setPageLoadLimits:(FBConnectionPageLoadLimits *)arg1 ;
-(void)setPageLoadUserInfo:(NSDictionary *)arg1 ;
-(void)setConnectionControllerConfiguration:(FBGraphQLConnectionControllerConfiguration *)arg1 ;
-(void)setConnectionStoreConfiguration:(FBGraphQLConnectionStoreConfiguration *)arg1 ;
-(/*function pointer*/void*)connectionEdgeToModelTransformer;
-(FBConnectionPageLoadLimits *)pageLoadLimits;
-(NSDictionary *)pageLoadUserInfo;
-(FBGraphQLConnectionControllerConfiguration *)connectionControllerConfiguration;
-(FBGraphQLConnectionStoreConfiguration *)connectionStoreConfiguration;
-(id)init;
@end
