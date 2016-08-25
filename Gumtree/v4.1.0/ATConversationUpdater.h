/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:11 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ATAPIRequestDelegate.h>

@protocol ATConversationUpdaterDelegate;
@class NSObject, ATAPIRequest, NSString;

@interface ATConversationUpdater : NSObject <ATAPIRequestDelegate> {

	NSObject*<ATConversationUpdaterDelegate> delegate;
	ATAPIRequest* request;
	BOOL creatingConversation;

}

@property (assign,nonatomic) NSObject*<ATConversationUpdaterDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)conversationExists;
+(void)registerDefaults;
+(BOOL)shouldUpdate;
+(id)currentConversation;
-(void)processResult:(id)arg1 ;
-(void)at_APIRequestDidFail:(id)arg1 ;
-(void)at_APIRequestDidFinish:(id)arg1 result:(id)arg2 ;
-(void)at_APIRequestDidProgress:(id)arg1 ;
-(float)percentageComplete;
-(void)createOrUpdateConversation;
-(void)cancel;
-(void)setDelegate:(NSObject*<ATConversationUpdaterDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<ATConversationUpdaterDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end
