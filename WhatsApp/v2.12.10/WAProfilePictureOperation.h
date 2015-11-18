/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString;

@interface WAProfilePictureOperation : NSOperation {

	BOOL _isExecuting;
	BOOL _isFinished;
	NSString* _jid;

}

@property (nonatomic,copy) NSString * jid;              //@synthesize jid=_jid - In the implementation block
+(id)operationForJID:(id)arg1 ;
-(void)setJid:(NSString *)arg1 ;
-(NSString *)jid;
-(BOOL)isConcurrent;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finish;
@end
