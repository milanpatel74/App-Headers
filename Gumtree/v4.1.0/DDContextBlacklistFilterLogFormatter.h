/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:11 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/DDLogFormatter.h>

@class DDLoggingContextSet, NSString;

@interface DDContextBlacklistFilterLogFormatter : NSObject <DDLogFormatter> {

	DDLoggingContextSet* contextSet;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)formatLogMessage:(id)arg1 ;
-(BOOL)isOnBlacklist:(int)arg1 ;
-(void)addToBlacklist:(int)arg1 ;
-(void)removeFromBlacklist:(int)arg1 ;
-(id)blacklist;
-(id)init;
@end
