/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBAppService.h>

@protocol FBNetworkDispatch, FBAdminedPagesFetchListener, FBHttpRequestToken;
@class NSString, NSSet;

@interface FBAdminedPagesFetcher : NSObject <FBAppService> {

	id<FBNetworkDispatch> _networkDispatcher;
	id<FBAdminedPagesFetchListener> _listener;
	id<FBHttpRequestToken> _networkerToken;

}

@property (nonatomic,retain) id<FBHttpRequestToken> networkerToken;                 //@synthesize networkerToken=_networkerToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * appServiceID; 
@property (nonatomic,copy,readonly) NSSet * appServiceDependencyIDs; 
@property (nonatomic,readonly) unsigned long long serviceStartupLevel; 
+(id)_parseResponse:(id)arg1 ;
-(unsigned long long)serviceStartupLevel;
-(NSString *)appServiceID;
-(NSSet *)appServiceDependencyIDs;
-(void)startAppServiceWithDependencies:(id)arg1 ;
-(void)stopAppServiceWithDependencies:(id)arg1 ;
-(id)initWithSession:(id)arg1 listener:(id)arg2 ;
-(id)initWithNetworkDispatcher:(id)arg1 listener:(id)arg2 ;
-(void)fetchPageViewerInfo;
-(void)setNetworkerToken:(id<FBHttpRequestToken>)arg1 ;
-(void)_handleFetchDataSuccess:(id)arg1 request:(id)arg2 ;
-(void)_handleFetchDataFailure:(id)arg1 ;
-(id<FBHttpRequestToken>)networkerToken;
@end
