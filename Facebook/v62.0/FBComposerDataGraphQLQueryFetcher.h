/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBComposerDataFetcher.h>

@protocol FBComposerDataFetchListener;
@class FBUserSession, NSString;

@interface FBComposerDataGraphQLQueryFetcher : NSObject <FBComposerDataFetcher> {

	id<FBComposerDataFetchListener> _listener;
	FBUserSession* _userSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadDataForRequest:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 listener:(id)arg2 ;
-(void)handleCacheResponseForRequest:(id)arg1 withData:(id)arg2 ;
-(void)handleDownloadResponseForRequest:(id)arg1 withData:(id)arg2 error:(id)arg3 ;
@end
