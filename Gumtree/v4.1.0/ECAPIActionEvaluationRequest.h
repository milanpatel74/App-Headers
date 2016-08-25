/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECAPIRequestBase.h>

@class NSString;

@interface ECAPIActionEvaluationRequest : ECAPIRequestBase {

	NSString* userID;
	NSString* userIPAddress;
	NSString* adID;
	NSString* actionType;

}

@property (retain) NSString * userID; 
@property (retain) NSString * userIPAddress; 
@property (retain) NSString * adID; 
@property (retain) NSString * actionType; 
+(id)actionEvaluationRequestForUserID:(id)arg1 ipAddress:(id)arg2 adID:(id)arg3 actionType:(id)arg4 ;
-(id)httpBody;
-(NSString *)adID;
-(void)setAdID:(NSString *)arg1 ;
-(void)setUserIPAddress:(NSString *)arg1 ;
-(NSString *)userIPAddress;
-(NSString *)actionType;
-(id)init;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
@end
